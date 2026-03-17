/*
 * switch.c
 *
 *  Created on: 17-Mar-2026
 *      Author: jolap
 */

#include "switch.h"
#include "driver/gpio.h"
#include "esp_rom_gpio.h"
#include "hal/gpio_types.h"

void switch_config(unsigned char pin_no)
{
    // Select the GPIO pad
    esp_rom_gpio_pad_select_gpio(pin_no);

    // Set direction as input
    gpio_set_direction(pin_no, GPIO_MODE_INPUT);

    // Enable internal pull-up resistor
    gpio_set_pull_mode(pin_no, GPIO_PULLUP_ONLY);
}
