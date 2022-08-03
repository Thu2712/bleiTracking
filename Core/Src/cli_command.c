#include "cli_command.h"
#include "string.h"
#include "response_ci.h"
#include "gettemperature_ci.h"

void cli_command_excute(char * uart_buff, uint8_t len)
{
    char *argv[10];
		uint8_t arg_num =0;
		 // uint8_t buff[] ="data echo\n";

	  //   HAL_UART_Transmit(&huart1,buff,strlen((char *)buff),100);
		 // // HAL_UART_Transmit(&huart1,uart_buff,uart_len,100);
		 char * pch;
		 pch = strtok (uart_buff," ");
		 while(pch != NULL)
		 {
		 	// HAL_UART_Transmit(&huart1,(uint8_t *)pch,strlen(pch),100);
		 	// HAL_UART_Transmit(&huart1,(uint8_t *)"\n",1,100);
		 	
         //strcpy((char *)argv[arg_num++],pch);
         argv[arg_num]= pch;
		 	pch = strtok (NULL, " ");
		 	arg_num++;

		 }
		 if(strcmp(argv[0],"gettemp")==0)
		 {

			 gettemperature(argv,arg_num);
		 }
		 else if(strcmp(argv[0],"settempMax")==0)
         {

         }
         else if(strcmp(argv[0],"settempMin")==0)
         {

         }
}
