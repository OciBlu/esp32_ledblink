#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"


void app_main(void)
{
    //Setup
    //clearing the previous configurations
    gpio_reset_pin(GPIO_NUM_2);
    gpio_set_direction(GPIO_NUM_2 , GPIO_MODE_OUTPUT);

    //Loop
    while (1){
        printf("Led ON\n");
        gpio_set_level(GPIO_NUM_2, 1);
        vTaskDelay(pdMS_TO_TICKS(1000));

        printf("Led OFF\n");
        gpio_set_level(GPIO_NUM_2, 0);
        vTaskDelay(pdMS_TO_TICKS(1000));

    }

}
