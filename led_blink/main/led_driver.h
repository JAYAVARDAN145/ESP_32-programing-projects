/*
 * led_driver.h
 *
 *  Created on: 17-Mar-2026
 *      Author: jolap
 */

#ifndef MAIN_LED_DRIVER_H_
#define MAIN_LED_DRIVER_H_
#include"main.h"
#include "driver/gpio.h"
#include "hal/gpio_types.h"

void led_config(uint8_t pin_no,uint8_t mode);
void led_on(uint8_t gpio_no);
void led_of(uint8_t gpio_no);




#endif /* MAIN_LED_DRIVER_H_ */
