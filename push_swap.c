/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitakah <keitakah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:52:35 by keitakah          #+#    #+#             */
/*   Updated: 2023/07/25 18:21:21 by keitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

static void	convert_int_arr(int amt, char **arr)
{
	int	*int_arr;
	int	cnt;

	int_arr = (int *)malloc(sizeof(int) * amt);
	cnt = 0;
	while (cnt < amt)
	{
		int_arr[cnt] = ft_atoi_ps(arr[cnt]);
		cnt++;
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
	printf("Based array;\n");
	while (n < argc)
	{
		printf("%s \n", argv[n]);
		n++;
	}
	convert_int_arr(argc, argv);
	return (1);
}
