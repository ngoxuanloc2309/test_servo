#ifndef APP_CONFIG_H
#define APP_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "tim.h"

#define SERVO_TIM_HANDLE      (&htim1)
#define SERVO_TIM_CHANNEL     TIM_CHANNEL_1
#define SERVO_ANGLE_INIT      0

#define SERVO_ANGLE_MIN       0     // degree
#define SERVO_ANGLE_MAX       270   // degree (follow datasheet DS3235-270)
#define SERVO_PULSE_MIN_US    500   // µs
#define SERVO_PULSE_MAX_US    2500  // µs

#ifdef __cplusplus
}
#endif

#endif
