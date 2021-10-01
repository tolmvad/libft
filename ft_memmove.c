/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:50:55 by bcaffere          #+#    #+#             */
/*   Updated: 2021/05/01 20:20:30 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	t_uch	*u_dest;
	t_uch	*u_src;

	if (dest == src || len == 0)
		return (dest);
	u_dest = (t_uch *)dest;
	u_src = (t_uch *)src;
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
		while (len--)
			u_dest[len] = u_src[len];
	return (dest);
}
