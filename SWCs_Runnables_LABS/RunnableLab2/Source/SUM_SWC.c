#include "RTE_SUM_SWC.h"

Std_ReturnTypes Sum_1ms(void)
{
	Std_ReturnTypes status = E_NOT_OK;
	unsigned short param1,param2;
	unsigned int result;
	status = RTE_Read_RP_SUM_input_param1(&param1);
	status = RTE_Read_RP_SUM_input_param2(&param2);
	SumResult = param1 + param2;
	status = RTE_Write_PP_SUM_input_param1(SumResult);
	return status;
}
