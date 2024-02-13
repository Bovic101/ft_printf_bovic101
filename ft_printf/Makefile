# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 03:02:11 by vodebunm          #+#    #+#              #
#    Updated: 2024/02/13 03:58:03 by vodebunm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name
NAME = ftprintflib.a
CC = gcc
# List of source files
SRCS = ft_characater_printf.c ft_conversion_specifier.c ft_hexaconvert_pointer.c ft_hexaconvert_printf.c \
		ft_hexaconvert_up_printf.c ft_int_dec_number_print.c ft_pointer_printf.c ft_printf.c ft_str_printf.c \

OBJ_DEST = mv *.o srcs
OBJS = $(SRCS:.c=.o)

#List of Bonus file

CFLAGS = -Wall -Wextra -Werror

RM 		= rm -f

# All Rules
# Rule to make the library
all: $(NAME)
$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(CFLAGS) $(SRCS)
	$(OBJ_DEST)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS) 

# Rule to clean everything
fclean: 
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

# Rule to recompile
re: fclean all

# Phony targets
.PHONY: all clean fclean re