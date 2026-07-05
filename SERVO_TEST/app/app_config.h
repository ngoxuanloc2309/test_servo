#ifndef APP_CONFIG_H
#define APP_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "tim.h"

#define SERVO_TIM_HANDLE    (&htim1)
#define SERVO_TIM_CHANNEL   TIM_CHANNEL_1
#define SERVO_ANGLE_INIT    0

#ifdef __cplusplus
}
#endif

#endif
