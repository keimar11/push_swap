#include "stack.h"

int	push(stack_t *stk, data_t push_data)
{
	if (stk->num < STACK_SIZE)
	{
		stk->data[stk->num] = push_data;
		stk->num++;
		return (SUCCESS);
	}
	else
		return (FAILURE);
}
