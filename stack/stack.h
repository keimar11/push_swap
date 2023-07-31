#ifndef STACK_H
# define STACK_H

# include <stdio.h>

# define STACK_SIZE 100
# define SUCCESS 1
# define FAILURE 0

typedef int data_t;

typedef struct {
	int num;
	data_t data[STACK_SIZE];
} stack_t;

int		pop(stack_t *stk, data_t *pop_data);
int		push(stack_t *stk, data_t push_data);
void	rotate(stack_t *stk);
void	reverse_rotate(stack_t *stk);
void	stackPrint(stack_t *stk);

#endif