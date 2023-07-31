#include "stack.h"

void	rotate(stack_t *stk)
{
	int	temp;
	int	i;

	if (stk->num <= 1)
		return ;
	i = stk->num - 1;
	temp = stk->data[i];
	while (i > 0)
	{
		stk->data[i] = stk->data[i - 1];
		i--;
	}
	stk->data[i] = temp;
}