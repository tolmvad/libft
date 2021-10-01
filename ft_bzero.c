/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:09:46 by bcaffere          #+#    #+#             */
/*   Updated: 2021/04/23 23:01:10 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t len)
{
	t_uch	*uc_dest;

	uc_dest = (t_uch *)dest;
	while (len > 0)
	{
		*uc_dest = '\0';
		uc_dest++;
		len--;
	}
	return ;
}
