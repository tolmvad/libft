/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:02:56 by bcaffere          #+#    #+#             */
/*   Updated: 2021/05/05 17:38:03 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number(long x, int sign)
{
	if (sign < 0 && x <= 2147483648)
		return (sign * x);
	if (sign > 0 && x <= 2147483647)
		return (sign * x);
	return (0);
}

int	ft_atoi(const char *s)
{
	int		sign;
	long	x;

	x = 0;
	sign = 1;
	while ((*s > 8 && *s < 14) || *s == 32)
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -sign;
		s++;
	}
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			x = x * 10 + *s - '0';
			s++;
		}
		else
			return (number(x, sign));
	}
	return (number(x, sign));
}
