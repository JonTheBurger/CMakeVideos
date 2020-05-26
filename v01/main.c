#include <stdio.h>
#include "sensor.h"

int main(void)
{
  Uart_t uart;
  Uart_Init(&uart);
  int t = Sensor_ReadTemperatureC(&uart);
  printf("Temperature: %d C\n", t);
  return 0;
}

