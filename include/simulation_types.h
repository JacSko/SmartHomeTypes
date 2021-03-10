#ifndef _SIMULATION_TYPES_H_
#define _SIMULATION_TYPES_H_

/* ============================= */
/**
 * @file simulation_types.h
 *
 * @brief Common enum types related to simulation module.
 *
 * @author Jacek Skowronek
 * @date 10/03/2021
 */
/* ============================= */

typedef enum
{
   I2C_STATE_SET = 1,       /**< Sets current state of I2C board - in raw format, e.g. 0xFFFF */
   I2C_STATE_NTF = 2,       /**< Event sent to test framework to notify that new data was written to I2C device */
   DHT_STATE_SET = 3,       /**< Sets current state of DHT sensor */
   I2C_INT_TRIGGER = 4,     /**< Event to simulate I2C interrupt */
   DHT_RESP_TYPE_SET = 5,   /**< Sets the device response type (NO_RESPONSE, CHECKSUM_ERROR, etc) */
   HW_STUB_EV_ENUM_COUNT,
} HW_STUB_EVENT_ID;



#endif
