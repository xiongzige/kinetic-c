/*
* kinetic-c
* Copyright (C) 2014 Seagate Technology.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*
*/

#include "unity.h"
#include "kinetic_exchange.h"
#include "kinetic_proto.h"
#include <protobuf-c/protobuf-c.h>

static KineticConnection Connection;
static KineticExchange Exchange;

void setUp(void)
{
    KineticExchange_Init(&Exchange, 1234, 5678, &Connection);
}

void tearDown(void)
{
}

void test_KineticExchange_Init_should_initialize_a_KineticExchange(void)
{
    TEST_ASSERT_EQUAL_PTR(&Connection, Exchange.connection);
    TEST_ASSERT_FALSE(Exchange.has_clusterVersion);
    TEST_ASSERT_EQUAL_INT64(0, Exchange.clusterVersion);
    TEST_ASSERT_EQUAL_INT64(1234, Exchange.identity);
    TEST_ASSERT_EQUAL_INT64(5678, Exchange.connectionID);
    TEST_ASSERT_EQUAL_INT64(0, Exchange.sequence);
}

void test_KineticExchange_SetClusterVersion_should_set_and_enable_the_field(void)
{
    KineticExchange_SetClusterVersion(&Exchange, 1122334455667788);

    TEST_ASSERT_TRUE(Exchange.has_clusterVersion);
    TEST_ASSERT_EQUAL_INT64(1122334455667788, Exchange.clusterVersion);
}

void test_KineticExchange_IncrementSequence_should_set_and_enable_the_field(void)
{
    Exchange.sequence = 57;

    KineticExchange_IncrementSequence(&Exchange);

    TEST_ASSERT_EQUAL_INT64(58, Exchange.sequence);
}

void test_KineticExchange_ConfigureHeader_should_set_the_exchange_fields_in_the_specified_header(void)
{
    KineticProto_Header header = KINETIC_PROTO_HEADER_INIT;
    KineticExchange_SetClusterVersion(&Exchange, 1122334455667788);

    KineticExchange_ConfigureHeader(&Exchange, &header);

    TEST_ASSERT_TRUE(header.has_clusterversion);
    TEST_ASSERT_EQUAL_INT64(1122334455667788, header.clusterversion);
    TEST_ASSERT_TRUE(header.has_identity);
    TEST_ASSERT_EQUAL_INT64(1234, header.identity);
    TEST_ASSERT_TRUE(header.has_connectionid);
    TEST_ASSERT_EQUAL_INT64(5678, header.connectionid);
    TEST_ASSERT_TRUE(header.has_sequence);
    TEST_ASSERT_EQUAL_INT64(0, header.sequence);
}

void test_KineticExchange_ConfigureHeader_should_not_set_nor_enable_the_exchangeid_field_in_the_specified_header_if_not_configured(void)
{
    KineticProto_Header header = KINETIC_PROTO_HEADER_INIT;

    KineticExchange_IncrementSequence(&Exchange);
    KineticExchange_ConfigureHeader(&Exchange, &header);

    TEST_ASSERT_FALSE(header.has_clusterversion);
    TEST_ASSERT_TRUE(header.has_identity);
    TEST_ASSERT_EQUAL_INT64(1234, header.identity);
    TEST_ASSERT_TRUE(header.has_connectionid);
    TEST_ASSERT_EQUAL_INT64(5678, header.connectionid);
    TEST_ASSERT_TRUE(header.has_sequence);
    TEST_ASSERT_EQUAL_INT64(1, header.sequence);
}