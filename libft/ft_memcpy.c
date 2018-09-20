/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtetwa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 15:54:58 by smtetwa           #+#    #+#             */
/*   Updated: 2018/08/23 13:56:01 by smtetwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src2;

	i = 0;
	src2 = (const char*)src;
	dest = (char*)dst;
	while (i < n)
	{
		dest[i] = src2[i];
		i++;
	}
	return (dest);
}
