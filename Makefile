# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smtetwa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/23 15:13:00 by smtetwa           #+#    #+#              #
#    Updated: 2018/08/24 10:11:08 by smtetwa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRC = main.c ft_ls.c  list.c file_check.c

FLAGS = gcc -Wall -Werror -Wextra -o

all : $(NAME)

$(NAME):
	@echo "$(NAME)...successfully created"
	@make -C libft/
	@$(FLAGS) $(NAME) $(SRC) -L libft/ -lft -I libft/includes -I includes

clean:
	@echo "Basic Cleaning...Success!! :)"
	@rm -rf $(NAME)

fclean:
	@echo "Full Clean...Success!! :)"
	@make fclean -C libft/
	@rm -f $(NAME)

re : fclean all

norm:
	@norminette $(SRC) includes/ft_ls.h
