#ifndef __PIN_CONFIGURATION_H
#define __PIN_CONFIGURATION_H

#include "main.h"
#include "stm32h7xx_hal.h"

#define LCD_SPI4_SCK_Pin            GPIO_PIN_2
#define LCD_SPI4_SCK_GPIO_Port      GPIOE
#define LCD_BACKLIGHT_EN_Pin        GPIO_PIN_5
#define LCD_BACKLIGHT_EN_GPIO_Port  GPIOE
#define LCD_SPI4_MOSI_Pin           GPIO_PIN_6
#define LCD_SPI4_MOSI_GPIO_Port     GPIOE
#define AMP_SHUTDOWN_Pin            GPIO_PIN_13
#define AMP_SHUTDOWN_GPIO_Port      GPIOC
#define USER_LEFT2_Pin              GPIO_PIN_14
#define USER_LEFT2_GPIO_Port        GPIOC
#define USER_RIGHT2_Pin             GPIO_PIN_15
#define USER_RIGHT2_GPIO_Port       GPIOC
#define JOYSTICK_Y_Pin              GPIO_PIN_0
#define JOYSTICK_Y_GPIO_Port        GPIOC
#define USER_LEFT1_Pin              GPIO_PIN_1
#define USER_LEFT1_GPIO_Port        GPIOC
#define USER_RIGHT1_Pin             GPIO_PIN_2
#define USER_RIGHT1_GPIO_Port       GPIOC
#define BATTERY_SENSE_Pin           GPIO_PIN_3
#define BATTERY_SENSE_GPIO_Port     GPIOC
#define LCD_CS_Pin                  GPIO_PIN_0
#define LCD_CS_GPIO_Port            GPIOA
#define LCD_RESET_Pin               GPIO_PIN_2
#define LCD_RESET_GPIO_Port         GPIOA
#define SD_SPI1_MOSI_Pin            GPIO_PIN_7
#define SD_SPI1_MOSI_GPIO_Port      GPIOA
#define JOYSTICK_X_Pin              GPIO_PIN_4
#define JOYSTICK_X_GPIO_Port        GPIOC
#define JOYSTICK_BUTTON_Pin         GPIO_PIN_5
#define JOYSTICK_BUTTON_GPIO_Port   GPIOC
#define USB_SWAP_Pin                GPIO_PIN_8
#define USB_SWAP_GPIO_Port          GPIOD
#define DPAD_UP_Pin                 GPIO_PIN_9
#define DPAD_UP_GPIO_Port           GPIOD
#define DPAD_LEFT_Pin               GPIO_PIN_10
#define DPAD_LEFT_GPIO_Port         GPIOD
#define SD_DETECT_Pin               GPIO_PIN_11
#define SD_DETECT_GPIO_Port         GPIOD
#define DPAD_DOWN_Pin               GPIO_PIN_14
#define DPAD_DOWN_GPIO_Port         GPIOD
#define DPAD_RIGHT_Pin              GPIO_PIN_15
#define DPAD_RIGHT_GPIO_Port        GPIOD
#define LED_RED_Pin                 GPIO_PIN_8
#define LED_RED_GPIO_Port           GPIOC
#define LED_GREEN_Pin               GPIO_PIN_9
#define LED_GREEN_GPIO_Port         GPIOC
#define USB_DFU_DM_Pin              GPIO_PIN_11
#define USB_DFU_DM_Port             GPIOA
#define USB_DFU_DP_Pin              GPIO_PIN_12
#define USB_DFU_DP_GPIO_Port        GPIOA
#define SD_SPI1_CS_Pin              GPIO_PIN_15
#define SD_SPI1_CS_GPIO_Port        GPIOA
#define EXTENSION_GPIO_Pin          GPIO_PIN_10
#define EXTENSION_GPIO_GPIO_Port    GPIOC
#define BUTTON_X_Pin                GPIO_PIN_0
#define BUTTON_X_GPIO_Port          GPIOD
#define BUTTON_Y_Pin                GPIO_PIN_1
#define BUTTON_Y_GPIO_Port          GPIOD
#define BUTTON_A_Pin                GPIO_PIN_2
#define BUTTON_A_GPIO_Port          GPIOD
#define BUTTON_B_Pin                GPIO_PIN_4
#define BUTTON_B_GPIO_Port          GPIOD
#define BUTTON_MENU_Pin             GPIO_PIN_5
#define BUTTON_MENU_GPIO_Port       GPIOD
#define BUTTON_HOME_Pin             GPIO_PIN_7
#define BUTTON_HOME_GPIO_Port       GPIOD
#define SD_SPI1_SCK_Pin             GPIO_PIN_3
#define SD_SPI1_SCK_GPIO_Port       GPIOB
#define SD_SPI1_MISO_Pin            GPIO_PIN_4
#define SD_SPI1_MISO_GPIO_Port      GPIOB
#define LED_BLUE_Pin                GPIO_PIN_5
#define LED_BLUE_GPIO_Port          GPIOB
#define VIBE_EN_Pin                 GPIO_PIN_6
#define VIBE_EN_GPIO_Port           GPIOB

namespace gpio {

  // initialises all of the pins of the MCU into the correct 
  // configuration for 32blit    
  void init();

}

#endif 