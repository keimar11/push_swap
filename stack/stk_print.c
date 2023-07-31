#include "stack.h"

void stackPrint(stack_t *stk)
{
	int	i;

	printf("stack: ");
	for (i = 0;i < stk->num; i++) printf("%3d", stk->data[i]);
	printf("\n");
}