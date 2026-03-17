#include "main.h"
#include "driver/gpio.h"
#include "led_driver.h"
#include "switch.h"

#define BLINK_GPIO GPIO_NUM_2
#define SWITCH_GPIO GPIO_NUM_4

void app_main(void)
{
    // Configure LED and switch
    led_config(BLINK_GPIO, 0);      // LED off initially
    switch_config(SWITCH_GPIO);     // Configure switch pin (input with pull-up)

    while (1) {
        int switch_state = gpio_get_level(SWITCH_GPIO); // read switch

        if (switch_state == 0) { // pressed (assuming active low)
            printf("LED ON\n");
            led_on(BLINK_GPIO);
        } else {
            printf("LED OFF\n");
            led_off(BLINK_GPIO);
        }

        vTaskDelay(pdMS_TO_TICKS(100)); // prevent busy loop
    }
}