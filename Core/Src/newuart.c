#include "newuart.h"
#include "string.h"
#include "gettemperature_ci.h"
#include "cli_command.h"
#define MAX_DATA_UART 100
extern UART_HandleTypeDef huart1;
char uart_buff[MAX_DATA_UART];
static uint8_t uart_len=0;
uint8_t uart_flag = 0;
void receive_data(uint8_t data_rx)
{
	if(data_rx == '\n')//nhan xong
	{
		uart_buff[uart_len++]='\0';
		uart_flag = 1;
	}
    else //van dang nhan
    {
    	uart_buff[uart_len++]=data_rx;
    }


}
void uart_handle()
{
	if(uart_flag)
	{
		cli_command_excute(uart_buff, uart_len);
		
		 // for(uint8_t i=0;i<arg_num;i++)
		 // {
		 // 	 HAL_UART_Transmit(&huart1,argv[i],strlen((char*)argv[i]),100);
		 // 	 HAL_UART_Transmit(&huart1,(uint8_t *)"\n",1,100);
		 	
		 // }
		
		uart_len = 0;
		uart_flag =0;
	}
}

void uart_init()
{

}

