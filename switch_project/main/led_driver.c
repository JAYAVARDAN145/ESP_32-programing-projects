/*
 * led_deriver.c
 *
 *  Created on: 17-Mar-2026
 *      Author: jolap
 */



#include"main.h"
void led_config(uint8_t pin_no,uint8_t mode)
{
	esp_rom_gpio_pad_select_gpio(pin_no);
	if(mode == 0)//output
	gpio_set_direction(pin_no,GPIO_MODE_OUTPUT);
	else if(mode == 1)
	gpio_set_direction(pin_no, GPIO_MODE_INPUT);	
}
void led_on(uint8_t gpio_no)
{
	gpio_set_level(gpio_no, 1);
}
void led_off(uint8_t gpio_no)
{
    gpio_set_level(gpio_no, 0);
}