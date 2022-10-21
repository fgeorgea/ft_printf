# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 16:21:11 by fgeorgea          #+#    #+#              #
#    Updated: 2022/10/21 19:51:41 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libftprintf.a

SRCS		=	ft_printf.c \
				ft_printf_utils.c \
				ft_printnbr.c \
				ft_strlen.c \
				ft_nbrlen.c \

OBJS		 = 	$(SRCS:.c=.o)

CFLAGS		 =	-Wall -Wextra -Werror

CC			 =	@gcc

RM			 =	@rm -f

DEF_COLOR	=	\033[0;39m
RED			=	\033[0;91m
GREEN		=	\033[0;92m
BLUE		=	\033[0;94m

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@echo "$(GREEN)# Created $(NAME) OK ! #$(DEF_COLOR)"

clean: 
	$(RM) $(OBJS)
	@echo "$(RED)# Removed objects #$(DEF_COLOR)"

fclean: 	clean
	$(RM) $(NAME)
	@echo "$(RED)# Removed $(NAME) #$(DEF_COLOR)"

re: 		fclean all

norm:
	@echo "$(BLUE)Check norme$(DEF_COLOR)"
	@norminette -R CheckDefine

.PHONY: 	all re clean fclean
