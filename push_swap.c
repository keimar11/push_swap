/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitakah <keitakah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:52:35 by keitakah          #+#    #+#             */
/*   Updated: 2023/08/07 17:44:15 by keitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

typedef struct circle_s {
	int 			num;
	int				value;
	struct circle_s	*pre;
	struct circle_s	*pos;
} circle_t;

void	push_a(circle_t *ccl, int vl)
{
	int			i;
	circle_t	*p;
	circle_t	*q;

	if (ccl->num == 0)
	{
		ccl->value = vl;
		ccl->pre = &ccl;
		ccl->pos = &ccl;
	}
	else
	{
		i = 0;
		p = ccl;
		while (i++ < ccl->num)
			p = p->pos;
		q = (circle_t*)malloc(sizeof(circle_t));
		q = (circle_t){.num++, .value = vl, .pre = p, .next = ccl};
		p->pos = q;
		ccl->pre = q;
	}
	ccl->num++;
}

void	make_circle_a(int argc, char **argv)
{
	int	i;
	int	j;
	static circle_t	*a;

	a = (circle_t*)malloc(sizeof(circle_t));
		a->num = 0;
	i = 1;
	while (i < argc)
	{
		push_a(a ,ft_atoi_ps(&argv[i]));
		i++;
	}
}

void	sort(circle_t *a)
{
	int	x;
	int	y;
	int	z;

	x = a->value;
	y = a->pos->value;
	z = a->pre->value;
	if (a->num < 3)
	{
		if (x >= y && x >= z && y >= z)
			;
		else if (x <= y && x >= z && y >= z)
			swap(a);
		else if (x >= y)
	}
}


int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	make_circle_a(argc, argv);
	sort(a);
	return (1);
}
