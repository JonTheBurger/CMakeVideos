#include <stddef.h>

typedef int Uart_t;

void Uart_Init(Uart_t* self);
void Uart_Read(Uart_t* self, void* out, size_t size);

