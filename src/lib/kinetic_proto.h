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
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*
*/

/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: kinetic.proto */

#ifndef PROTOBUF_C_kinetic_2eproto__INCLUDED
#define PROTOBUF_C_kinetic_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1000001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _KineticProto_Local KineticProto_Local;
typedef struct _KineticProto_Message KineticProto_Message;
typedef struct _KineticProto_Message_HMACauth KineticProto_Message_HMACauth;
typedef struct _KineticProto_Message_PINauth KineticProto_Message_PINauth;
typedef struct _KineticProto_Command KineticProto_Command;
typedef struct _KineticProto_Command_Header KineticProto_Command_Header;
typedef struct _KineticProto_Command_Body KineticProto_Command_Body;
typedef struct _KineticProto_Command_Status KineticProto_Command_Status;
typedef struct _KineticProto_Command_KeyValue KineticProto_Command_KeyValue;
typedef struct _KineticProto_Command_Range KineticProto_Command_Range;
typedef struct _KineticProto_Command_Setup KineticProto_Command_Setup;
typedef struct _KineticProto_Command_P2POperation KineticProto_Command_P2POperation;
typedef struct _KineticProto_Command_P2POperation_Operation KineticProto_Command_P2POperation_Operation;
typedef struct _KineticProto_Command_P2POperation_Peer KineticProto_Command_P2POperation_Peer;
typedef struct _KineticProto_Command_GetLog KineticProto_Command_GetLog;
typedef struct _KineticProto_Command_GetLog_Utilization KineticProto_Command_GetLog_Utilization;
typedef struct _KineticProto_Command_GetLog_Temperature KineticProto_Command_GetLog_Temperature;
typedef struct _KineticProto_Command_GetLog_Capacity KineticProto_Command_GetLog_Capacity;
typedef struct _KineticProto_Command_GetLog_Configuration KineticProto_Command_GetLog_Configuration;
typedef struct _KineticProto_Command_GetLog_Configuration_Interface KineticProto_Command_GetLog_Configuration_Interface;
typedef struct _KineticProto_Command_GetLog_Statistics KineticProto_Command_GetLog_Statistics;
typedef struct _KineticProto_Command_GetLog_Limits KineticProto_Command_GetLog_Limits;
typedef struct _KineticProto_Command_GetLog_Device KineticProto_Command_GetLog_Device;
typedef struct _KineticProto_Command_Security KineticProto_Command_Security;
typedef struct _KineticProto_Command_Security_ACL KineticProto_Command_Security_ACL;
typedef struct _KineticProto_Command_Security_ACL_Scope KineticProto_Command_Security_ACL_Scope;
typedef struct _KineticProto_Command_PinOperation KineticProto_Command_PinOperation;


/* --- enums --- */

typedef enum _KineticProto_Message_AuthType {
    KINETIC_PROTO_MESSAGE_AUTH_TYPE_INVALID_AUTH_TYPE = -1,
    KINETIC_PROTO_MESSAGE_AUTH_TYPE_HMACAUTH = 1,
    KINETIC_PROTO_MESSAGE_AUTH_TYPE_PINAUTH = 2,
    KINETIC_PROTO_MESSAGE_AUTH_TYPE_UNSOLICITEDSTATUS = 3
            PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_MESSAGE_AUTH_TYPE)
} KineticProto_Message_AuthType;
typedef enum _KineticProto_Command_Status_StatusCode {
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_INVALID_STATUS_CODE = -1,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_NOT_ATTEMPTED = 0,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_SUCCESS = 1,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_HMAC_FAILURE = 2,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_NOT_AUTHORIZED = 3,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_VERSION_FAILURE = 4,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_INTERNAL_ERROR = 5,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_HEADER_REQUIRED = 6,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_NOT_FOUND = 7,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_VERSION_MISMATCH = 8,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_SERVICE_BUSY = 9,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_EXPIRED = 10,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_DATA_ERROR = 11,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_PERM_DATA_ERROR = 12,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_REMOTE_CONNECTION_ERROR = 13,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_NO_SPACE = 14,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_NO_SUCH_HMAC_ALGORITHM = 15,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_INVALID_REQUEST = 16,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_NESTED_OPERATION_ERRORS = 17,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_DEVICE_LOCKED = 18,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_DEVICE_ALREADY_UNLOCKED = 19,
    KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE_CONNECTION_TERMINATED = 20
            PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_COMMAND_STATUS_STATUS_CODE)
} KineticProto_Command_Status_StatusCode;
typedef enum _KineticProto_Command_GetLog_Type {
    KINETIC_PROTO_COMMAND_GET_LOG_TYPE_INVALID_TYPE = -1,
    KINETIC_PROTO_COMMAND_GET_LOG_TYPE_UTILIZATIONS = 0,
    KINETIC_PROTO_COMMAND_GET_LOG_TYPE_TEMPERATURES = 1,
    KINETIC_PROTO_COMMAND_GET_LOG_TYPE_CAPACITIES = 2,
    KINETIC_PROTO_COMMAND_GET_LOG__INIT_TYPE_CONFIGURATION = 3,
    KINETIC_PROTO_COMMAND_GET_LOG_TYPE_STATISTICS = 4,
    KINETIC_PROTO_COMMAND_GET_LOG_TYPE_MESSAGES = 5,
    KINETIC_PROTO_COMMAND_GET_LOG_TYPE_LIMITS = 6,
    KINETIC_PROTO_COMMAND_GET_LOG_TYPE_DEVICE = 7
            PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_COMMAND_GET_LOG_TYPE)
} KineticProto_Command_GetLog_Type;
typedef enum _KineticProto_Command_Security_ACL_HMACAlgorithm {
    KINETIC_PROTO_COMMAND_SECURITY_ACL_HMACALGORITHM_INVALID_HMAC_ALGORITHM = -1,
    KINETIC_PROTO_COMMAND_SECURITY_ACL_HMACALGORITHM_HmacSHA1 = 1
            PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_COMMAND_SECURITY_ACL_HMACALGORITHM)
} KineticProto_Command_Security_ACL_HMACAlgorithm;
typedef enum _KineticProto_Command_Security_ACL_Permission {
    KINETIC_PROTO_COMMAND_SECURITY_ACL_PERMISSION_INVALID_PERMISSION = -1,
    KINETIC_PROTO_COMMAND_SECURITY_ACL_PERMISSION_READ = 0,
    KINETIC_PROTO_COMMAND_SECURITY_ACL_PERMISSION_WRITE = 1,
    KINETIC_PROTO_COMMAND_SECURITY_ACL_PERMISSION_DELETE = 2,
    KINETIC_PROTO_COMMAND_SECURITY_ACL_PERMISSION_RANGE = 3,
    KINETIC_PROTO_COMMAND_SECURITY_ACL_PERMISSION_SETUP = 4,
    KINETIC_PROTO_COMMAND_SECURITY_ACL_PERMISSION_P2POP = 5,
    KINETIC_PROTO_COMMAND_SECURITY_ACL_PERMISSION_GETLOG = 7,
    KINETIC_PROTO_COMMAND_SECURITY_ACL_PERMISSION_SECURITY = 8
            PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_COMMAND_SECURITY_ACL_PERMISSION)
} KineticProto_Command_Security_ACL_Permission;
typedef enum _KineticProto_Command_PinOperation_PinOpType {
    KINETIC_PROTO_COMMAND_PIN_OPERATION_PIN_OP_TYPE_INVALID_PINOP = -1,
    KINETIC_PROTO_COMMAND_PIN_OPERATION_PIN_OP_TYPE_UNLOCK_PINOP = 1,
    KINETIC_PROTO_COMMAND_PIN_OPERATION_PIN_OP_TYPE_LOCK_PINOP = 2,
    KINETIC_PROTO_COMMAND_PIN_OPERATION_PIN_OP_TYPE_ERASE_PINOP = 3,
    KINETIC_PROTO_COMMAND_PIN_OPERATION_PIN_OP_TYPE_SECURE_ERASE_PINOP = 4
            PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_COMMAND_PIN_OPERATION_PIN_OP_TYPE)
} KineticProto_Command_PinOperation_PinOpType;
typedef enum _KineticProto_Command_Synchronization {
    KINETIC_PROTO_COMMAND_SYNCHRONIZATION_INVALID_SYNCHRONIZATION = -1,
    KINETIC_PROTO_COMMAND_SYNCHRONIZATION_WRITETHROUGH = 1,
    KINETIC_PROTO_COMMAND_SYNCHRONIZATION_WRITEBACK = 2,
    KINETIC_PROTO_COMMAND_SYNCHRONIZATION_FLUSH = 3
            PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_COMMAND_SYNCHRONIZATION)
} KineticProto_Command_Synchronization;
typedef enum _KineticProto_Command_Priority {
    KINETIC_PROTO_COMMAND_PRIORITY_NORMAL = 5,
    KINETIC_PROTO_COMMAND_PRIORITY_LOWEST = 1,
    KINETIC_PROTO_COMMAND_PRIORITY_LOWER = 3,
    KINETIC_PROTO_COMMAND_PRIORITY_HIGHER = 7,
    KINETIC_PROTO_COMMAND_PRIORITY_HIGHEST = 9
            PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_COMMAND_PRIORITY)
} KineticProto_Command_Priority;
typedef enum _KineticProto_Command_Algorithm {
    KINETIC_PROTO_COMMAND_ALGORITHM_INVALID_ALGORITHM = -1,
    KINETIC_PROTO_COMMAND_ALGORITHM_SHA1 = 1,
    KINETIC_PROTO_COMMAND_ALGORITHM_SHA2 = 2,
    KINETIC_PROTO_COMMAND_ALGORITHM_SHA3 = 3,
    KINETIC_PROTO_COMMAND_ALGORITHM_CRC32 = 4,
    KINETIC_PROTO_COMMAND_ALGORITHM_CRC64 = 5
                                            PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_COMMAND_ALGORITHM)
} KineticProto_Command_Algorithm;
typedef enum _KineticProto_Command_MessageType {
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_INVALID_MESSAGE_TYPE = -1,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GET = 2,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GET_RESPONSE = 1,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_PUT = 4,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_PUT_RESPONSE = 3,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_DELETE = 6,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_DELETE_RESPONSE = 5,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GETNEXT = 8,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GETNEXT_RESPONSE = 7,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GETPREVIOUS = 10,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GETPREVIOUS_RESPONSE = 9,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GETKEYRANGE = 12,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GETKEYRANGE_RESPONSE = 11,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GETVERSION = 16,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GETVERSION_RESPONSE = 15,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_SETUP = 22,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_SETUP_RESPONSE = 21,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GETLOG = 24,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_GETLOG_RESPONSE = 23,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_SECURITY = 26,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_SECURITY_RESPONSE = 25,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_PEER2PEERPUSH = 28,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_PEER2PEERPUSH_RESPONSE = 27,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_NOOP = 30,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_NOOP_RESPONSE = 29,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_FLUSHALLDATA = 32,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_FLUSHALLDATA_RESPONSE = 31,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_PINOP = 36,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_PINOP_RESPONSE = 35,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_MEDIASCAN = 38,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_MEDIASCAN_RESPONSE = 37,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_MEDIAOPTIMIZE = 40,
    KINETIC_PROTO_COMMAND_MESSAGE_TYPE_MEDIAOPTIMIZE_RESPONSE = 39
            PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_COMMAND_MESSAGE_TYPE)
} KineticProto_Command_MessageType;

/* --- messages --- */

struct  _KineticProto_Local {
    ProtobufCMessage base;
    char* protocolVersion;
};
extern char KineticProto_local_protocol_version_default_value[];
#define KINETIC_PROTO_LOCAL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_local__descriptor) \
    , KineticProto_local_protocol_version_default_value }


struct  _KineticProto_Message_HMACauth {
    ProtobufCMessage base;
    protobuf_c_boolean has_identity;
    int64_t identity;
    protobuf_c_boolean has_hmac;
    ProtobufCBinaryData hmac;
};
#define KINETIC_PROTO_MESSAGE_HMACAUTH__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_Message_hmacauth__descriptor) \
    , 0,0, 0,{0,NULL} }


struct  _KineticProto_Message_PINauth {
    ProtobufCMessage base;
    protobuf_c_boolean has_pin;
    ProtobufCBinaryData pin;
};
#define KINETIC_PROTO_MESSAGE_PINAUTH__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_Message_pinauth__descriptor) \
    , 0,{0,NULL} }


struct  _KineticProto_Message {
    ProtobufCMessage base;
    protobuf_c_boolean has_authType;
    KineticProto_Message_AuthType authType;
    KineticProto_Message_HMACauth* hmacAuth;
    KineticProto_Message_PINauth* pinAuth;
    protobuf_c_boolean has_commandBytes;
    ProtobufCBinaryData commandBytes;
};
#define KINETIC_PROTO_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_Message__descriptor) \
    , 0,0, NULL, NULL, 0,{0,NULL} }


struct  _KineticProto_Command_Header {
    ProtobufCMessage base;
    protobuf_c_boolean has_clusterVersion;
    int64_t clusterVersion;
    protobuf_c_boolean has_connectionID;
    int64_t connectionID;
    protobuf_c_boolean has_sequence;
    int64_t sequence;
    protobuf_c_boolean has_ackSequence;
    int64_t ackSequence;
    protobuf_c_boolean has_messageType;
    KineticProto_Command_MessageType messageType;
    protobuf_c_boolean has_timeout;
    int64_t timeout;
    protobuf_c_boolean has_earlyExit;
    protobuf_c_boolean earlyExit;
    protobuf_c_boolean has_priority;
    KineticProto_Command_Priority priority;
    protobuf_c_boolean has_TimeQuanta;
    int64_t TimeQuanta;
};
#define KINETIC_PROTO_COMMAND_HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_header__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _KineticProto_Command_Body {
    ProtobufCMessage base;
    KineticProto_Command_KeyValue* keyValue;
    KineticProto_Command_Range* range;
    KineticProto_Command_Setup* setup;
    KineticProto_Command_P2POperation* p2pOperation;
    KineticProto_Command_GetLog* getLog;
    KineticProto_Command_Security* security;
    KineticProto_Command_PinOperation* pinOp;
};
#define KINETIC_PROTO_COMMAND_BODY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_body__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, NULL, NULL }


struct  _KineticProto_Command_Status {
    ProtobufCMessage base;
    protobuf_c_boolean has_code;
    KineticProto_Command_Status_StatusCode code;
    char* statusMessage;
    protobuf_c_boolean has_detailedMessage;
    ProtobufCBinaryData detailedMessage;
};
#define KINETIC_PROTO_COMMAND_STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_status__descriptor) \
    , 0,0, NULL, 0,{0,NULL} }


struct  _KineticProto_Command_KeyValue {
    ProtobufCMessage base;
    protobuf_c_boolean has_newVersion;
    ProtobufCBinaryData newVersion;
    protobuf_c_boolean has_force;
    protobuf_c_boolean force;
    protobuf_c_boolean has_key;
    ProtobufCBinaryData key;
    protobuf_c_boolean has_dbVersion;
    ProtobufCBinaryData dbVersion;
    protobuf_c_boolean has_tag;
    ProtobufCBinaryData tag;
    protobuf_c_boolean has_algorithm;
    KineticProto_Command_Algorithm algorithm;
    protobuf_c_boolean has_metadataOnly;
    protobuf_c_boolean metadataOnly;
    protobuf_c_boolean has_synchronization;
    KineticProto_Command_Synchronization synchronization;
};
#define KINETIC_PROTO_COMMAND_KEY_VALUE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_key_value__descriptor) \
    , 0,{0,NULL}, 0,0, 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL}, 0,0, 0,0, 0,0 }


struct  _KineticProto_Command_Range {
    ProtobufCMessage base;
    protobuf_c_boolean has_startKey;
    ProtobufCBinaryData startKey;
    protobuf_c_boolean has_endKey;
    ProtobufCBinaryData endKey;
    protobuf_c_boolean has_startKeyInclusive;
    protobuf_c_boolean startKeyInclusive;
    protobuf_c_boolean has_endKeyInclusive;
    protobuf_c_boolean endKeyInclusive;
    protobuf_c_boolean has_maxReturned;
    int32_t maxReturned;
    protobuf_c_boolean has_reverse;
    protobuf_c_boolean reverse;
    size_t n_keys;
    ProtobufCBinaryData* keys;
};
#define KINETIC_PROTO_COMMAND_RANGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_range__descriptor) \
    , 0,{0,NULL}, 0,{0,NULL}, 0,0, 0,0, 0,0, 0,0, 0,NULL }


struct  _KineticProto_Command_Setup {
    ProtobufCMessage base;
    protobuf_c_boolean has_newClusterVersion;
    int64_t newClusterVersion;
    protobuf_c_boolean has_firmwareDownload;
    protobuf_c_boolean firmwareDownload;
};
#define KINETIC_PROTO_COMMAND_SETUP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_setup__descriptor) \
    , 0,0, 0,0 }


struct  _KineticProto_Command_P2POperation_Operation {
    ProtobufCMessage base;
    protobuf_c_boolean has_key;
    ProtobufCBinaryData key;
    protobuf_c_boolean has_version;
    ProtobufCBinaryData version;
    protobuf_c_boolean has_newKey;
    ProtobufCBinaryData newKey;
    protobuf_c_boolean has_force;
    protobuf_c_boolean force;
    KineticProto_Command_Status* status;
    KineticProto_Command_P2POperation* p2pop;
};
#define KINETIC_PROTO_COMMAND_P2_POPERATION_OPERATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_p2_poperation_operation__descriptor) \
    , 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL}, 0,0, NULL, NULL }


struct  _KineticProto_Command_P2POperation_Peer {
    ProtobufCMessage base;
    char* hostname;
    protobuf_c_boolean has_port;
    int32_t port;
    protobuf_c_boolean has_tls;
    protobuf_c_boolean tls;
};
#define KINETIC_PROTO_COMMAND_P2_POPERATION_PEER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_p2_poperation_peer__descriptor) \
    , NULL, 0,0, 0,0 }


struct  _KineticProto_Command_P2POperation {
    ProtobufCMessage base;
    KineticProto_Command_P2POperation_Peer* peer;
    size_t n_operation;
    KineticProto_Command_P2POperation_Operation** operation;
    protobuf_c_boolean has_allChildOperationsSucceeded;
    protobuf_c_boolean allChildOperationsSucceeded;
};
#define KINETIC_PROTO_COMMAND_P2_POPERATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_p2_poperation__descriptor) \
    , NULL, 0,NULL, 0,0 }


struct  _KineticProto_Command_GetLog_Utilization {
    ProtobufCMessage base;
    char* name;
    protobuf_c_boolean has_value;
    float value;
};
#define KINETIC_PROTO_COMMAND_GET_LOG_UTILIZATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_get_log_utilization__descriptor) \
    , NULL, 0,0 }


struct  _KineticProto_Command_GetLog_Temperature {
    ProtobufCMessage base;
    char* name;
    protobuf_c_boolean has_current;
    float current;
    protobuf_c_boolean has_minimum;
    float minimum;
    protobuf_c_boolean has_maximum;
    float maximum;
    protobuf_c_boolean has_target;
    float target;
};
#define KINETIC_PROTO_COMMAND_GET_LOG_TEMPERATURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_get_log_temperature__descriptor) \
    , NULL, 0,0, 0,0, 0,0, 0,0 }


struct  _KineticProto_Command_GetLog_Capacity {
    ProtobufCMessage base;
    protobuf_c_boolean has_nominalCapacityInBytes;
    uint64_t nominalCapacityInBytes;
    protobuf_c_boolean has_portionFull;
    float portionFull;
};
#define KINETIC_PROTO_COMMAND_GET_LOG_CAPACITY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_get_log_capacity__descriptor) \
    , 0,0, 0,0 }


struct  _KineticProto_Command_GetLog_Configuration_Interface {
    ProtobufCMessage base;
    char* name;
    protobuf_c_boolean has_MAC;
    ProtobufCBinaryData MAC;
    protobuf_c_boolean has_ipv4Address;
    ProtobufCBinaryData ipv4Address;
    protobuf_c_boolean has_ipv6Address;
    ProtobufCBinaryData ipv6Address;
};
#define KINETIC_PROTO_COMMAND_GET_LOG_CONFIGURATION_INTERFACE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_get_log_configuration_interface__descriptor) \
    , NULL, 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL} }


struct  _KineticProto_Command_GetLog_Configuration {
    ProtobufCMessage base;
    char* vendor;
    char* model;
    protobuf_c_boolean has_serialNumber;
    ProtobufCBinaryData serialNumber;
    protobuf_c_boolean has_worldWideName;
    ProtobufCBinaryData worldWideName;
    char* version;
    char* compilationDate;
    char* sourceHash;
    char* protocolVersion;
    char* protocolCompilationDate;
    char* protocolSourceHash;
    size_t n_interface;
    KineticProto_Command_GetLog_Configuration_Interface** interface;
    protobuf_c_boolean has_port;
    int32_t port;
    protobuf_c_boolean has_tlsPort;
    int32_t tlsPort;
};
#define KINETIC_PROTO_COMMAND_GET_LOG_CONFIGURATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_get_log_configuration__descriptor) \
    , NULL, NULL, 0,{0,NULL}, 0,{0,NULL}, NULL, NULL, NULL, NULL, NULL, NULL, 0,NULL, 0,0, 0,0 }


struct  _KineticProto_Command_GetLog_Statistics {
    ProtobufCMessage base;
    protobuf_c_boolean has_messageType;
    KineticProto_Command_MessageType messageType;
    protobuf_c_boolean has_count;
    uint64_t count;
    protobuf_c_boolean has_bytes;
    uint64_t bytes;
};
#define KINETIC_PROTO_COMMAND_GET_LOG_STATISTICS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_get_log_statistics__descriptor) \
    , 0,0, 0,0, 0,0 }


struct  _KineticProto_Command_GetLog_Limits {
    ProtobufCMessage base;
    protobuf_c_boolean has_maxKeySize;
    uint32_t maxKeySize;
    protobuf_c_boolean has_maxValueSize;
    uint32_t maxValueSize;
    protobuf_c_boolean has_maxVersionSize;
    uint32_t maxVersionSize;
    protobuf_c_boolean has_maxTagSize;
    uint32_t maxTagSize;
    protobuf_c_boolean has_maxConnections;
    uint32_t maxConnections;
    protobuf_c_boolean has_maxOutstandingReadRequests;
    uint32_t maxOutstandingReadRequests;
    protobuf_c_boolean has_maxOutstandingWriteRequests;
    uint32_t maxOutstandingWriteRequests;
    protobuf_c_boolean has_maxMessageSize;
    uint32_t maxMessageSize;
    protobuf_c_boolean has_maxKeyRangeCount;
    uint32_t maxKeyRangeCount;
    protobuf_c_boolean has_maxIdentityCount;
    uint32_t maxIdentityCount;
    protobuf_c_boolean has_maxPinSize;
    uint32_t maxPinSize;
};
#define KINETIC_PROTO_COMMAND_GET_LOG_LIMITS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_get_log_limits__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _KineticProto_Command_GetLog_Device {
    ProtobufCMessage base;
    protobuf_c_boolean has_name;
    ProtobufCBinaryData name;
};
#define KINETIC_PROTO_COMMAND_GET_LOG_DEVICE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_get_log_device__descriptor) \
    , 0,{0,NULL} }


struct  _KineticProto_Command_GetLog {
    ProtobufCMessage base;
    size_t n_types;
    KineticProto_Command_GetLog_Type* types;
    size_t n_utilizations;
    KineticProto_Command_GetLog_Utilization** utilizations;
    size_t n_temperatures;
    KineticProto_Command_GetLog_Temperature** temperatures;
    KineticProto_Command_GetLog_Capacity* capacity;
    KineticProto_Command_GetLog_Configuration* configuration;
    size_t n_statistics;
    KineticProto_Command_GetLog_Statistics** statistics;
    protobuf_c_boolean has_messages;
    ProtobufCBinaryData messages;
    KineticProto_Command_GetLog_Limits* limits;
    KineticProto_Command_GetLog_Device* device;
};
#define KINETIC_PROTO_COMMAND_GET_LOG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_get_log__descriptor) \
    , 0,NULL, 0,NULL, 0,NULL, NULL, NULL, 0,NULL, 0,{0,NULL}, NULL, NULL }


struct  _KineticProto_Command_Security_ACL_Scope {
    ProtobufCMessage base;
    protobuf_c_boolean has_offset;
    int64_t offset;
    protobuf_c_boolean has_value;
    ProtobufCBinaryData value;
    size_t n_permission;
    KineticProto_Command_Security_ACL_Permission* permission;
    protobuf_c_boolean has_TlsRequired;
    protobuf_c_boolean TlsRequired;
};
#define KINETIC_PROTO_COMMAND_SECURITY_ACL_SCOPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_security_acl_scope__descriptor) \
    , 0,0, 0,{0,NULL}, 0,NULL, 0,0 }


struct  _KineticProto_Command_Security_ACL {
    ProtobufCMessage base;
    protobuf_c_boolean has_identity;
    int64_t identity;
    protobuf_c_boolean has_key;
    ProtobufCBinaryData key;
    protobuf_c_boolean has_hmacAlgorithm;
    KineticProto_Command_Security_ACL_HMACAlgorithm hmacAlgorithm;
    size_t n_scope;
    KineticProto_Command_Security_ACL_Scope** scope;
    protobuf_c_boolean has_maxPriority;
    KineticProto_Command_Priority maxPriority;
};
#define KINETIC_PROTO_COMMAND_SECURITY_ACL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_security_acl__descriptor) \
    , 0,0, 0,{0,NULL}, 0,0, 0,NULL, 0,0 }


struct  _KineticProto_Command_Security {
    ProtobufCMessage base;
    size_t n_acl;
    KineticProto_Command_Security_ACL** acl;
    protobuf_c_boolean has_oldLockPIN;
    ProtobufCBinaryData oldLockPIN;
    protobuf_c_boolean has_newLockPIN;
    ProtobufCBinaryData newLockPIN;
    protobuf_c_boolean has_oldErasePIN;
    ProtobufCBinaryData oldErasePIN;
    protobuf_c_boolean has_newErasePIN;
    ProtobufCBinaryData newErasePIN;
};
#define KINETIC_PROTO_COMMAND_SECURITY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_security__descriptor) \
    , 0,NULL, 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL} }


struct  _KineticProto_Command_PinOperation {
    ProtobufCMessage base;
    protobuf_c_boolean has_pinOpType;
    KineticProto_Command_PinOperation_PinOpType pinOpType;
};
#define KINETIC_PROTO_COMMAND_PIN_OPERATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command_pin_operation__descriptor) \
    , 0,0 }


struct  _KineticProto_Command {
    ProtobufCMessage base;
    KineticProto_Command_Header* header;
    KineticProto_Command_Body* body;
    KineticProto_Command_Status* status;
};
#define KINETIC_PROTO_COMMAND__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&KineticProto_command__descriptor) \
    , NULL, NULL, NULL }


/* KineticProto_Local methods */
void KineticProto_local__init
(KineticProto_Local* message);
size_t KineticProto_local__get_packed_size(
    const KineticProto_Local* message);
size_t KineticProto_local__pack(
    const KineticProto_Local* message,
    uint8_t* out);
size_t KineticProto_local__pack_to_buffer(
    const KineticProto_Local* message,
    ProtobufCBuffer* buffer);
KineticProto_Local* KineticProto_local__unpack(
    ProtobufCAllocator* allocator,
    size_t len,
    const uint8_t* data);
void KineticProto_local__free_unpacked(
    KineticProto_Local* message,
    ProtobufCAllocator* allocator);
/* KineticProto_Message_HMACauth methods */
void KineticProto_Message_hmacauth__init
(KineticProto_Message_HMACauth* message);
/* KineticProto_Message_PINauth methods */
void KineticProto_Message_pinauth__init
(KineticProto_Message_PINauth* message);
/* KineticProto_Message methods */
void KineticProto_Message__init
(KineticProto_Message* message);
size_t KineticProto_Message__get_packed_size(
    const KineticProto_Message* message);
size_t KineticProto_Message__pack(
    const KineticProto_Message* message,
    uint8_t* out);
size_t KineticProto_Message__pack_to_buffer(
    const KineticProto_Message* message,
    ProtobufCBuffer* buffer);
KineticProto_Message* KineticProto_Message__unpack(
    ProtobufCAllocator* allocator,
    size_t len,
    const uint8_t* data);
void KineticProto_Message__free_unpacked(
    KineticProto_Message* message,
    ProtobufCAllocator* allocator);
/* KineticProto_Command_Header methods */
void KineticProto_command_header__init
(KineticProto_Command_Header* message);
/* KineticProto_Command_Body methods */
void KineticProto_command_body__init
(KineticProto_Command_Body* message);
/* KineticProto_Command_Status methods */
void KineticProto_command_status__init
(KineticProto_Command_Status* message);
/* KineticProto_Command_KeyValue methods */
void KineticProto_command_key_value__init
(KineticProto_Command_KeyValue* message);
/* KineticProto_Command_Range methods */
void KineticProto_command_range__init
(KineticProto_Command_Range* message);
/* KineticProto_Command_Setup methods */
void KineticProto_command_setup__init
(KineticProto_Command_Setup* message);
/* KineticProto_Command_P2POperation_Operation methods */
void KineticProto_command_p2_poperation_operation__init
(KineticProto_Command_P2POperation_Operation* message);
/* KineticProto_Command_P2POperation_Peer methods */
void KineticProto_command_p2_poperation_peer__init
(KineticProto_Command_P2POperation_Peer* message);
/* KineticProto_Command_P2POperation methods */
void KineticProto_command_p2_poperation__init
(KineticProto_Command_P2POperation* message);
/* KineticProto_Command_GetLog_Utilization methods */
void KineticProto_command_get_log_utilization__init
(KineticProto_Command_GetLog_Utilization* message);
/* KineticProto_Command_GetLog_Temperature methods */
void KineticProto_command_get_log_temperature__init
(KineticProto_Command_GetLog_Temperature* message);
/* KineticProto_Command_GetLog_Capacity methods */
void KineticProto_command_get_log_capacity__init
(KineticProto_Command_GetLog_Capacity* message);
/* KineticProto_Command_GetLog_Configuration_Interface methods */
void KineticProto_command_get_log_configuration_interface__init
(KineticProto_Command_GetLog_Configuration_Interface* message);
/* KineticProto_Command_GetLog_Configuration methods */
void KineticProto_command_get_log_configuration__init
(KineticProto_Command_GetLog_Configuration* message);
/* KineticProto_Command_GetLog_Statistics methods */
void KineticProto_command_get_log_statistics__init
(KineticProto_Command_GetLog_Statistics* message);
/* KineticProto_Command_GetLog_Limits methods */
void KineticProto_command_get_log_limits__init
(KineticProto_Command_GetLog_Limits* message);
/* KineticProto_Command_GetLog_Device methods */
void KineticProto_command_get_log_device__init
(KineticProto_Command_GetLog_Device* message);
/* KineticProto_Command_GetLog methods */
void KineticProto_command_get_log__init
(KineticProto_Command_GetLog* message);
/* KineticProto_Command_Security_ACL_Scope methods */
void KineticProto_command_security_acl_scope__init
(KineticProto_Command_Security_ACL_Scope* message);
/* KineticProto_Command_Security_ACL methods */
void KineticProto_command_security_acl__init
(KineticProto_Command_Security_ACL* message);
/* KineticProto_Command_Security methods */
void KineticProto_command_security__init
(KineticProto_Command_Security* message);
/* KineticProto_Command_PinOperation methods */
void KineticProto_command_pin_operation__init
(KineticProto_Command_PinOperation* message);
/* KineticProto_Command methods */
void KineticProto_command__init
(KineticProto_Command* message);
size_t KineticProto_command__get_packed_size(
    const KineticProto_Command* message);
size_t KineticProto_command__pack(
    const KineticProto_Command* message,
    uint8_t* out);
size_t KineticProto_command__pack_to_buffer(
    const KineticProto_Command* message,
    ProtobufCBuffer* buffer);
KineticProto_Command* KineticProto_command__unpack(
    ProtobufCAllocator* allocator,
    size_t len,
    const uint8_t* data);
void KineticProto_command__free_unpacked(
    KineticProto_Command* message,
    ProtobufCAllocator* allocator);
/* --- per-message closures --- */

typedef void (*KineticProto_Local_Closure)(
    const KineticProto_Local* message,
    void* closure_data);
typedef void (*KineticProto_Message_HMACauth_Closure)(
    const KineticProto_Message_HMACauth* message,
    void* closure_data);
typedef void (*KineticProto_Message_PINauth_Closure)(
    const KineticProto_Message_PINauth* message,
    void* closure_data);
typedef void (*KineticProto_Message_Closure)(
    const KineticProto_Message* message,
    void* closure_data);
typedef void (*KineticProto_Command_Header_Closure)(
    const KineticProto_Command_Header* message,
    void* closure_data);
typedef void (*KineticProto_Command_Body_Closure)(
    const KineticProto_Command_Body* message,
    void* closure_data);
typedef void (*KineticProto_Command_Status_Closure)(
    const KineticProto_Command_Status* message,
    void* closure_data);
typedef void (*KineticProto_Command_KeyValue_Closure)(
    const KineticProto_Command_KeyValue* message,
    void* closure_data);
typedef void (*KineticProto_Command_Range_Closure)(
    const KineticProto_Command_Range* message,
    void* closure_data);
typedef void (*KineticProto_Command_Setup_Closure)(
    const KineticProto_Command_Setup* message,
    void* closure_data);
typedef void (*KineticProto_Command_P2POperation_Operation_Closure)(
    const KineticProto_Command_P2POperation_Operation* message,
    void* closure_data);
typedef void (*KineticProto_Command_P2POperation_Peer_Closure)(
    const KineticProto_Command_P2POperation_Peer* message,
    void* closure_data);
typedef void (*KineticProto_Command_P2POperation_Closure)(
    const KineticProto_Command_P2POperation* message,
    void* closure_data);
typedef void (*KineticProto_Command_GetLog_Utilization_Closure)(
    const KineticProto_Command_GetLog_Utilization* message,
    void* closure_data);
typedef void (*KineticProto_Command_GetLog_Temperature_Closure)(
    const KineticProto_Command_GetLog_Temperature* message,
    void* closure_data);
typedef void (*KineticProto_Command_GetLog_Capacity_Closure)(
    const KineticProto_Command_GetLog_Capacity* message,
    void* closure_data);
typedef void (*KineticProto_Command_GetLog_Configuration_Interface_Closure)(
    const KineticProto_Command_GetLog_Configuration_Interface* message,
    void* closure_data);
typedef void (*KineticProto_Command_GetLog_Configuration_Closure)(
    const KineticProto_Command_GetLog_Configuration* message,
    void* closure_data);
typedef void (*KineticProto_Command_GetLog_Statistics_Closure)(
    const KineticProto_Command_GetLog_Statistics* message,
    void* closure_data);
typedef void (*KineticProto_Command_GetLog_Limits_Closure)(
    const KineticProto_Command_GetLog_Limits* message,
    void* closure_data);
typedef void (*KineticProto_Command_GetLog_Device_Closure)(
    const KineticProto_Command_GetLog_Device* message,
    void* closure_data);
typedef void (*KineticProto_Command_GetLog_Closure)(
    const KineticProto_Command_GetLog* message,
    void* closure_data);
typedef void (*KineticProto_Command_Security_ACL_Scope_Closure)(
    const KineticProto_Command_Security_ACL_Scope* message,
    void* closure_data);
typedef void (*KineticProto_Command_Security_ACL_Closure)(
    const KineticProto_Command_Security_ACL* message,
    void* closure_data);
typedef void (*KineticProto_Command_Security_Closure)(
    const KineticProto_Command_Security* message,
    void* closure_data);
typedef void (*KineticProto_Command_PinOperation_Closure)(
    const KineticProto_Command_PinOperation* message,
    void* closure_data);
typedef void (*KineticProto_Command_Closure)(
    const KineticProto_Command* message,
    void* closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor KineticProto_local__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_Message__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_Message_hmacauth__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_Message_pinauth__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_Message_auth_type__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_header__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_body__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_status__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_command_status_status_code__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_key_value__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_range__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_setup__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_p2_poperation__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_p2_poperation_operation__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_p2_poperation_peer__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_get_log__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_get_log_utilization__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_get_log_temperature__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_get_log_capacity__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_get_log_configuration__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_get_log_configuration_interface__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_get_log_statistics__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_get_log_limits__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_get_log_device__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_command_get_log_type__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_security__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_security_acl__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_security_acl_scope__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_command_security_acl_hmacalgorithm__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_command_security_acl_permission__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command_pin_operation__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_command_pin_operation_pin_op_type__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_command_synchronization__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_command_priority__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_command_algorithm__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_command_message_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_kinetic_2eproto__INCLUDED */
