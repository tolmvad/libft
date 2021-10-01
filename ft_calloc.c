/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 22:15:46 by bcaffere          #+#    #+#             */
/*   Updated: 2021/04/30 19:28:24 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t n)
{
	void	*point;

	point = (void *)malloc(c * n);
	if (!point)
		return (NULL);
	ft_bzero(point, c * n);
	return (point);
}
