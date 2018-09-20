/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtetwa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 08:14:25 by smtetwa           #+#    #+#             */
/*   Updated: 2018/08/23 14:50:49 by smtetwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void		*ft_memcpy(void *dst, const void *src, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
size_t		ft_strlen(const char *s);
void		ft_putchar(char c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);
char		*ft_itoa(int n);
char		*ft_strjoin(char const *s1, char const *s2);
int			ft_int_len(int n);
char		*ft_strnew(size_t size);
void		*ft_memcpy(void *dst, const void *src, size_t n);

#endif
