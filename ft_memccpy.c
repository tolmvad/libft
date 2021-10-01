/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 23:03:04 by bcaffere          #+#    #+#             */
/*   Updated: 2021/04/23 23:18:25 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	t_uch	*u_dest;
	t_uch	*u_src;

	u_dest = (t_uch *)dest;
	u_src = (t_uch *)src;
	while (n > 0)
	{
		*u_dest = *u_src;
		u_dest++;
		if (*u_src == (t_uch)c)
			return (u_dest);
		u_src++;
		n--;
	}
	return (NULL);
}
