/**
  ******************************************************************************
  * File Name          : STM32TouchController.cpp
  ******************************************************************************
  * This file is generated by TouchGFX Generator 4.18.1.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* USER CODE BEGIN STM32TouchController */

#include <STM32TouchController.hpp>
#include <stm32h735g_discovery_ts.h>
#include <TouchGFXHAL.hpp>
#include <cmsis_os.h>

void STM32TouchController::init()
{
    TS_Init_t hTS;

    hTS.Orientation = TS_SWAP_XY;
    hTS.Accuracy = 0;
    hTS.Width = touchgfx::HAL::FRAME_BUFFER_WIDTH;
    hTS.Height = touchgfx::HAL::FRAME_BUFFER_HEIGHT;
    BSP_TS_Init(0, &hTS);
}

bool STM32TouchController::sampleTouch(int32_t& x, int32_t& y)
{
    TS_State_t TS_State = { 0 };

    /* This should never fail !! */
    if (BSP_TS_GetState(0, &TS_State) != BSP_ERROR_NONE)
    {
        configASSERT(0);
    }

    if (TS_State.TouchDetected)
    {
        x = TS_State.TouchX;
        y = TS_State.TouchY;

        return true;
    }

    return false;
}

/* USER CODE END STM32TouchController */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
