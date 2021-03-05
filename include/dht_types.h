#ifndef _DHT_TYPES_H_
#define _DHT_TYPES_H_

/* ============================= */
/**
 * @file edht_types.h
 *
 * @brief Common enum types related to DHT driver module.
 *
 * @author Jacek Skowronek
 * @date 05/03/2021
 */
/* ============================= */


typedef enum DHT_SENSOR_TYPE
{
   DHT_TYPE_DHT11,
   DHT_TYPE_DHT22
} DHT_SENSOR_TYPE;

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



#endif
