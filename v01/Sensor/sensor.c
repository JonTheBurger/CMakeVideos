#include "logger.h"
#include "sensor.h"

int Sensor_ReadTemperatureC(Uart_t* uart)
{
  int temperature = 0;
  Uart_Read(uart, &temperature, sizeof(temperature));
  Log("T Read");
  return temperature;
}

