#include "bsp.h"
#include "app_config.h"

void bsp_init(void){
    HAL_TIM_PWM_Start(SERVO_TIM_HANDLE, SERVO_TIM_CHANNEL);
}

void bsp_delay(uint32_t ms){
    HAL_Delay(ms);
}