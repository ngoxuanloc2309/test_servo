#include "app_config.h"
#include "angle_control.h"

static int clamp_int(int value, int min, int max)
{
    if (value < min) return min;
    if (value > max) return max;
    return value;
}

void servo_set_angle(int angle)
{
    angle = clamp_int(angle, SERVO_ANGLE_MIN, SERVO_ANGLE_MAX);

    uint32_t pulse_us = SERVO_PULSE_MIN_US +
        (uint32_t)(angle - SERVO_ANGLE_MIN) *
        (SERVO_PULSE_MAX_US - SERVO_PULSE_MIN_US) /
        (SERVO_ANGLE_MAX - SERVO_ANGLE_MIN);

    __HAL_TIM_SET_COMPARE(SERVO_TIM_HANDLE, SERVO_TIM_CHANNEL, pulse_us);
}

void servo_set_angle_init(void)
{
    servo_set_angle(SERVO_ANGLE_INIT);
}