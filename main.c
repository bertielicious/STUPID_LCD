#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "constants.h"
#include "configPins.h"
#include <stdio.h>
#include <stdint.h>
#include "pulse.h"
/*
define which ESP32 pins will interface with 1602 LCD
#define D7 21 //left led
#define D6 4
#define D5 22
#define D4 16
#define RS 17
#define E 18*/


void app_main(void)
{
    configPins();
    gpio_set_level(E, LO);
    vTaskDelay(120/portTICK_PERIOD_MS);
    //clear RS
    gpio_set_level(RS, LO); //0
    gpio_set_level(D7, LO);
    gpio_set_level(D6, LO);
    gpio_set_level(D5, HI);
    gpio_set_level(D4, LO);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);
    

    gpio_set_level(RS, LO); //1
    gpio_set_level(D7, LO);
    gpio_set_level(D6, LO);
    gpio_set_level(D5, LO);
    gpio_set_level(D4, LO);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);

    gpio_set_level(RS, LO); //2
    gpio_set_level(D7, LO);
    gpio_set_level(D6, LO);
    gpio_set_level(D5, LO);
    gpio_set_level(D4, HI);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);

    gpio_set_level(RS, LO); //3
    gpio_set_level(D7, LO);
    gpio_set_level(D6, LO);
    gpio_set_level(D5, LO);
    gpio_set_level(D4, LO);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);

    gpio_set_level(RS, LO); //4
    gpio_set_level(D7, LO);
    gpio_set_level(D6, LO);
    gpio_set_level(D5, HI);
    gpio_set_level(D4, LO);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);

    gpio_set_level(RS, LO); //5
    gpio_set_level(D7, LO);
    gpio_set_level(D6, LO);
    gpio_set_level(D5, LO);
    gpio_set_level(D4, LO);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);

    gpio_set_level(RS, LO); //6
    gpio_set_level(D7, HI);
    gpio_set_level(D6, HI);
    gpio_set_level(D5, LO);
    gpio_set_level(D4, LO);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);

    gpio_set_level(RS, HI); //7
    gpio_set_level(D7, LO);
    gpio_set_level(D6, HI);
    gpio_set_level(D5, LO);
    gpio_set_level(D4, LO);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);

    gpio_set_level(RS, HI); //8
    gpio_set_level(D7, HI);
    gpio_set_level(D6, LO);
    gpio_set_level(D5, LO);
    gpio_set_level(D4, LO);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);

    gpio_set_level(RS, HI); //9
    gpio_set_level(D7, LO);
    gpio_set_level(D6, HI);
    gpio_set_level(D5, LO);
    gpio_set_level(D4, LO);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);

    gpio_set_level(RS, HI); //10
    gpio_set_level(D7, HI);
    gpio_set_level(D6, LO);
    gpio_set_level(D5, LO);
    gpio_set_level(D4, HI);
    pulse();
    vTaskDelay(50/portTICK_PERIOD_MS);
    
    
    while(1)
    {
        
       
      //  vTaskDelay(250/portTICK_PERIOD_MS);
    }
}