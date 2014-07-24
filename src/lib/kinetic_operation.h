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

#ifndef _KINETIC_OPERATION_H
#define _KINETIC_OPERATION_H

#include "kinetic_types.h"
#include "kinetic_exchange.h"
#include "kinetic_message.h"

typedef struct _KineticOperation
{
    KineticExchange* exchange;
    KineticMessage* message;
} KineticOperation;

#define KINETIC_OPERATION_INIT(op, xchng, msg) { \
    (op)->exchange = (xchng); \
    (op)->message = (msg); }

void KineticOperation_Init(KineticOperation* operation,
    KineticExchange* exchange,
    KineticMessage* message);

void KineticOperation_BuildNoop(KineticOperation* operation);

#endif // _KINETIC_OPERATION_H