#include "stack.h"

void	reverse_rotate(stack_t *stk)
{
	int	temp;
	int	i;

	if (stk->num <= 1)
		return ;
	i = 0;
	temp = stk->data[i];
	while (i < stk->num - 1)
	{
		stk->data[i] = stk->data[i + 1];
		i++;
	}
	stk->data[i] = temp;
}