#include "dht11.h"
float DHT11_Gettemp(uint8_t channel)
{
	float temp = 50.5;
	if(channel ==0)
	{
		temp = 20.5;
	}
	else if(channel ==1)
	{
		temp = 25.5;
	}
	return temp;
}