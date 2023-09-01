
#include "spi_driver.h"
#include "LED.h"
#define DUMMY_DATA 0xff
int main(void)
{
	int x;
	LED_vInit('A',0);
	LED_vInit('A',1);
	SPI_SlaveInit();
    while(1)
    {
		x=SPI_SlaveReceivechar(DUMMY_DATA);
		if (x=='1')
		{
			LED_vToggle('A',0);
		}
		else if(x=='2')
		{
			LED_vToggle('A',1);
		}
    }
}