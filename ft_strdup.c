/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaffere <bcaffere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 22:06:30 by bcaffere          #+#    #+#             */
/*   Updated: 2021/04/24 22:11:26 by bcaffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cp;
	size_t	len;

	len = ft_strlen(src) + 1;
	cp = (char *)malloc(sizeof(char) * len);
	if (!cp)
		return (NULL);
	ft_memcpy(cp, src, len);
	return (cp);
}
