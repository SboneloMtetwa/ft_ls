/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtetwa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:53:30 by smtetwa           #+#    #+#             */
/*   Updated: 2018/08/23 13:54:14 by smtetwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_int_len(int n)
{
	int len;

	len = !n;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}
