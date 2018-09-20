/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtetwa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 12:17:18 by smtetwa           #+#    #+#             */
/*   Updated: 2018/08/23 14:02:31 by smtetwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*new;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(new = (char*)malloc(sizeof(char) * (len1 + len2) + 1)))
		return (NULL);
	while (i < len1 + len2)
	{
		if (i < len1)
			new[i] = s1[i];
		else
			new[i] = s2[i - len1];
		i++;
	}
	new[i] = '\0';
	return (new);
}
