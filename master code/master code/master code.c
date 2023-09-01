#include "USART.h"
#include "spi_driver.h"

int main(void)
{
	unsigned char x;
	UART_vInit(9600);
	SPI_MasterInit();
    while(1)
    {
        x=UART_u8ReceiveData();
		SPI_MasterTransmitchar(x);
    }
}