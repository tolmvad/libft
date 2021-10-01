/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:56:56 by bcaffere          #+#    #+#             */
/*   Updated: 2021/04/23 23:01:02 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	t_uch	*uc_dest;

	uc_dest = (t_uch *)dest;
	while (len > 0)
	{
		*uc_dest = c;
		uc_dest++;
		len--;
	}
	return (dest);
}
