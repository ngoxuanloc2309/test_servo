#ifndef BSP_H
#define BSP_H

#ifdef __cplusplus
extern "C" {
#endif

#include "board.h"
#include "tim.h"
#include "stm32f1xx_hal.h"

void bsp_init(void);
void bsp_delay(uint32_t ms);

#ifdef __cplusplus
}
#endif

#endif // BSP_H