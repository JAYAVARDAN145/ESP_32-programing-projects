#include"main.h"
#include"led_driver.h"
#define BLINK_GPIO GPIO_NUM_2

void app_main(void)
{
   led_config(BLINK_GPIO, 0);
    while (1) {
		printf("Led off\n");
        led_of(BLINK_GPIO);
        vTaskDelay(2000 / portTICK_PERIOD_MS);
		printf("Led On\n");
       	led_on(BLINK_GPIO);
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}