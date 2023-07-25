/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitakah <keitakah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:50:46 by keitakah          #+#    #+#             */
/*   Updated: 2023/07/25 18:20:55 by keitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	err(void)
{
	printf("Error\n");
	exit(1);
}

static char	*overflow(long int n, const char c)
{
	long int	jdg1;
	long int	jdg2;

	jdg1 = LONG_MAX / 10;
	jdg2 = LONG_MAX % 10;
	if (n > jdg1)
		return (NULL);
	if (n == jdg1 && c - 48 > jdg2)
		return (NULL);
	return ("safe");
}

static char	*underflow(long int n, const char c)
{
	long int	jdg1;
	long int	jdg2;

	jdg1 = LONG_MIN / 10;
	jdg2 = LONG_MIN % 10;
	if (n < jdg1)
		return (NULL);
	if (n == jdg1 / 10 && (c - 48) * (-1) < jdg2)
		return (NULL);
	return ("safe");
}

void	ft_atoi_ps(const char *str)
{
	int			m;
	long int	nb;

	m = 1;
	nb = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			m *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (m > 0 && overflow(nb, *str) == NULL)
			err();
		if (m < 0 && underflow(-1 * nb, *(str + 1)) == NULL)
			err();
		nb = nb * 10 + (*str++ - '0');
	}
	if (*str != '\n')
		err();
	return (m * nb);
}
