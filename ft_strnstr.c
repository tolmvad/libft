/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:02:30 by bcaffere          #+#    #+#             */
/*   Updated: 2021/04/24 21:57:11 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = ft_strlen(find);
	if (i == 0)
		return (str);
	while (*str && n > 0 && n >= i)
	{
		if (ft_strncmp(str, find, i) == 0)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
