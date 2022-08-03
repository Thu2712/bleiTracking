#include "gettemperature_ci.h"

#include "response_ci.h"
#include "dht11.h"

#include "stdlib.h"

//extern UART_HandleTypeDef huart1;
void gettemperature(char **argv, uint8_t arg_num)
{
//	float a = 23.7;
//	float c = a+2;
//	char b[20] = "hello kit";

	if(arg_num <2)
	{
		//HAL_UART_Transmit(&huart1,"don't enough",12,100);
		response_print("don't enough agr %d", arg_num);
		return;
	}
	else if(arg_num > 2)
	{
		response_print("too enough agr %d", arg_num);
		return;
	}
	    uint8_t channel = atoi(argv[1]);
	    response_print("temperature = %g", DHT11_Gettemp(channel));
	    return;

   // for(uint8_t i=0;i<arg_num;i++)
		 // {
		 // 	 HAL_UART_Transmit(&huart1,argv[i],strlen((char*)argv[i]),100);
		 // 	 HAL_UART_Transmit(&huart1,(uint8_t *)"\n",1,100);
		 	
		 // }

}
