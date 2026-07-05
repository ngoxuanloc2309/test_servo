#include "bsp.h"
#include "app_config.h"
#include "angle_control.h"

void app_init(void)
{
    bsp_init();
    servo_set_angle_init();
    bsp_delay(1000);
}

void app_poll(void)
{
    static int angle = SERVO_ANGLE_INIT;
    static int direction = 1;

    angle += direction * 10;
    if (angle >= SERVO_ANGLE_MAX) {
        angle = SERVO_ANGLE_MAX;
        direction = -1;
    } else if (angle <= SERVO_ANGLE_MIN) {
        angle = SERVO_ANGLE_MIN;
        direction = 1;
    }

    servo_set_angle(angle);
    bsp_delay(1000);
}