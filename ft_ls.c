/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtetwa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 11:51:50 by smtetwa           #+#    #+#             */
/*   Updated: 2018/08/22 11:55:57 by smtetwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_rev_list(t_dir **head_ref)
{
	t_dir	*prev;
	t_dir	*current;
	t_dir	*next;

	current = *head_ref;
	prev = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;
}

void	big_r(t_dir *list, t_env *e)
{
	t_dir *temp;

	temp = list;
	while (temp != NULL)
	{
		if (temp->is_dir == 1 && temp->dir[0] != '.')
			do_ls(temp->full_path, e);
		temp = temp->next;
	}
}

void	ft_print_ls(t_dir *list, t_env *e, char *path)
{
	t_dir	*temp;

	if (e->t == 1)
		sort_list(&list, compare_time, 0);
	if (e->r == 1)
		ft_rev_list(&list);
	if (e->rr == 1)
		ft_putstr(ft_strjoin(path, ":\n"));
	if (e->l == 1)
		print_l(list);
	else
	{
		temp = list;
		while (temp != NULL)
		{
			ft_putstr(temp->dir);
			temp = temp->next;
			if (temp != NULL)
				ft_putchar('\n');
		}
	}
	ft_putchar('\n');
	if (e->rr == 1)
		big_r(list, e);
}

int		ft_file_check(t_env *e)
{
	if ((e->dirp = opendir(".")) != NULL)
	{
		while ((e->dp = readdir(e->dirp)) != NULL)
		{
			lstat(e->dp->d_name, &e->sb);
			if (S_ISREG(e->sb.st_mode) &&
				ft_strcmp(e->dp->d_name, e->list->dir) == 0)
			{
				ft_putendl(e->dp->d_name);
				return (1);
			}
			else if (!ft_strcmp(e->dp->d_name, e->list->dir))
			{
				ft_putstr("ft_ls: ");
				ft_putstr(e->list->dir);
				ft_putendl(": Permission denied");
				return (-1);
			}
		}
		ft_putstr("ft_ls: ");
		ft_putstr(e->list->dir);
		ft_putendl(": No such file or directory");
		return (-1);
	}
	return (0);
}
