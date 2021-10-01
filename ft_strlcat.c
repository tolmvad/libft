/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:35:03 by bcaffere          #+#    #+#             */
/*   Updated: 2021/04/30 22:40:58 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	size;
	size_t	i;
	size_t	len;

	size = 0;
	i = 0;
	len = ft_strlen(src);
	while (dest[i] && n > 0)
	{
		i++;
		size++;
		n--;
	}
	if (n < 1)
		return (size + len);
	while (*src && n > 1)
	{
		dest[i] = *src;
		i++;
		src++;
		n--;
	}
	dest[i] = '\0';
	return (size + len);
}
