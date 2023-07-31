#include "stack.h"

int	pop(stack_t *stk, data_t *pop_data)
{
	if (stk->num > 0)
	{
		stk->num--;
		*pop_data = stk->data[stk->num];
		return (SUCCESS);
	}
	else
		return (FAILURE);
}