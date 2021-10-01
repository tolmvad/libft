/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:11:56 by bcaffere          #+#    #+#             */
/*   Updated: 2021/05/03 20:08:21 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_to_mlc(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	n_sign(char *s, int n)
{
	if (n < 0)
	{
		s[0] = '-';
		return (-1);
	}
	else if (n == 0)
		s[0] = '0';
	return (1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	i = len_to_mlc(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	sign = n_sign(str, n);
	str[i] = '\0';
	while (n)
	{
		i--;
		str[i] = sign * (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
