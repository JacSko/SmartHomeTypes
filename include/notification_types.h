#ifndef _NOTIFICATION_TYPES_H_
#define _NOTIFICATION_TYPES_H_

/* ============================= */
/**
 * @file notification_types.h
 *
 * @brief Common enum types related to Notification module.
 *
 * @author Jacek Skowronek
 * @date 23/01/2021
 */
/* ============================= */

/* ============================= */
/* >>> Notification system message structure
 *
 *                       MESSAGE HEADER                                       MESSAGE DATA                MESSAGE_END
 * |=============================================================================| |=====================================| |===============|
 *  [NTF_GROUP] [NTF_GROUP_SUBCMD] [NTF_REQ_TYPE] [NTF_REPLY_TYPE] [BYTES_COUNT]    [BYTE0] ... [BYTE (BYTES_COUNT -1)]   [MSG_DELIMITER]
 *
 * EXAMPLES:
 *
 * > SET/GET:
 *    - SET SYSTEM TIME:
 *    REQ: 01 01 01 00 06 0C 01 07 E5 0F 1E | (12-01-2021 15:30)
 *    REP: 01 01 01 01 00  | REPLY OK
 *
 *    - GET SYSTEM TIME:
 *    REQ: 01 01 00 00 | GET
 *    REP: 01 01 00 01 06 0C 01 07 E5 0F 1E | (12-01-2021 15:30)
 *
 * > RELAY NOTIFICATION:
 *    NOT: 03 01 02 00 02 08 01 | RELAY 08 set to 01
 *
 * NOTES:
 * - NTF_REPLY_TYPE should be unknown for requests and notifications
 * - NTF_REPLY_TYPE for replies indicates command execution status
 * - Detailed command usage is explained in separate document
 */
/* ============================= */
#define NTF_MESSAGE_DELIMITER 0x04  /**< 0x04 (EOT) - End of transmisstion */
#define NTF_MAX_MESSAGE_SIZE 255   /**< Maximum length of message */

#define NTF_GROUP_OFFSET 0
#define NTF_GROUP_SUBCMD_OFFSET 1
#define NTF_GROUP_REQ_TYPE_OFFSET 2

typedef enum
{
   REPLY_UNKNOWN, /**< State not known - used only for reply messages */
   REPLY_OK,      /**< Command executed with success */
   REPLY_NOK,     /**< Command executed with errors */
} NTF_REPLY_TYPE;

typedef enum
{
   NTF_GET,       /**< Get data specified by SUBCMDS */
   NTF_SET,       /**< Set data specified by SUBCMDS */
   NTF_NTF,       /**< Notification from particular module */
} NTF_REQ_TYPE;

typedef enum
{
   GROUP_SYSTEM = 1,
   GROUP_INPUTS,
   GROUP_RELAYS,
   GROUP_ENV,
   GROUP_FAN,
   GROUP_SLM
} NTF_GROUP;

typedef enum
{
   SYSTEM_TIME = 1,
} NTF_SYSTEM_SUBCMDS;

typedef enum
{
   INPUTS_STATE = 1,
   INPUTS_STATE_ALL,
} NTF_INPUTS_SUBCMDS;

typedef enum
{
   RELAYS_STATE = 1,
   RELAYS_STATE_ALL,
} NTF_RELAYS_SUBCMDS;

typedef enum
{
   ENV_SENSOR_DATA = 1,
} NTF_ENV_SUBCMDS;

typedef enum
{
   FAN_STATE = 1,
} NTF_FAN_SUBCMDS;

typedef enum
{
   SLM_STATE = 1,
   SLM_PROGRAM_ID,
   SLM_OFF_EFFECT_STATE,
} NTF_SLM_SUBCMDS;



#endif
