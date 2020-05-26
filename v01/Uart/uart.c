#include <stdlib.h>
#include <time.h>
#include "uart.h"

void Uart_Init(Uart_t* self)
{
  srand(time(NULL));
  *self = rand();
}

void Uart_Read(Uart_t* self, void* out, size_t size)
{
  unsigned char* buffer = (unsigned char*)out;
  for (size_t i = 0; i < size; ++i)
  {
    buffer[i] = rand();
  }
}

