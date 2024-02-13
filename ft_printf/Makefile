# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 03:02:11 by vodebunm          #+#    #+#              #
#    Updated: 2024/02/13 03:26:27 by vodebunm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name
NAME = ftprintflib.a

# List of source files
SRCS = ft_characater_printf.c ft_conversion_specifier.c ft_hexaconvert_pointer.c ft_hexaconvert_printf.c \
		ft_hexaconvert_up_printf.c ft_int_dec_number_print.c ft_pointer_printf.c ft_printf.c ft_str_printf.c \
			
OBJS = $(SRCS:.c=.o)

#List of Bonus file

CFLAGS = -Wall -Wextra -Werror

RM 		= rm -f

# All Rules
# Rule to make the library
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

# Rule to clean everything
fclean: 
	$(MAKE) clean
	rm -f $(NAME)

# Rule to recompile
re: fclean all

# Phony targets
.PHONY: all clean fclean re bonus