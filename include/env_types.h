#ifndef _ENV_TYPES_H_
#define _ENV_TYPES_H_

/* ============================= */
/**
 * @file env_types.h
 *
 * @brief Common enum types related to Environment measurement module.
 *
 * @author Jacek Skowronek
 * @date 23/01/2021
 */
/* ============================= */

/** Represents HW device - DHT sensor */
typedef enum DHT_SENSOR_ID
{
   DHT_SENSOR1,
   DHT_SENSOR2,
   DHT_SENSOR3,
   DHT_SENSOR4,
   DHT_SENSOR5,
   DHT_SENSOR6,
   DHT_ENUM_MAX
} DHT_SENSOR_ID;


typedef enum ENV_EVENT
{
   ENV_EV_NEW_DATA,     /**< New data event */
   ENV_EV_ERROR,        /**< Sensor error event */
} ENV_EVENT;
typedef enum ENV_ITEM_ID
{
   ENV_UNKNOWN_ITEM,
   ENV_OUTSIDE,
   ENV_WARDROBE,
   ENV_BEDROOM,
   ENV_BATHROOM,
   ENV_KITCHEN,
   ENV_STAIRS,
} ENV_ITEM_ID;


#endif
