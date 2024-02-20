/* 

*/

#include <stdio.h>

#include "driver/gpio.h"


#define Interruptor GPIO_NUM_5
#define Led GPIO_NUM_23

void conf_intr()
{
  gpio_num_t pin = Interruptor;
  gpio_int_type_t tipo_interrupcion = GPIO_INTR_POSEDGE;

  esp_err_t resultado = gpio_set_intr_type(pin,tipo_interrupcion);

  if(resultado != ESP_OK)
  {
    printf("Erros en la interrupcion");
  }

  else
  {
    printf("OKAY");
  }

  
}
