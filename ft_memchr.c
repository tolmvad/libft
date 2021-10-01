/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:41:00 by bcaffere          #+#    #+#             */
/*   Updated: 2021/04/24 16:50:52 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_uch	*u_s;

	u_s = (t_uch *)s;
	while (n > 0)
	{
		if (*u_s == (t_uch)c)
			return (u_s);
		u_s++;
		n--;
	}
	return (NULL);
}
