# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajesus- <dajesus-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 14:40:17 by dajesus-          #+#    #+#              #
#    Updated: 2024/10/28 12:14:05 by dajesus-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

#-------------Colors
CYAN    = \033[0;36m
GREEN   = \033[0;32m
RED     = \033[0;31m
BLUE    = \033[0;34m
RESET   = \033[0m

define HEADER
                     ___====-_  _-====___ 
              __--^^^      //     \\     ^^^--_
             _-^         // (    ) \\         ^-_
            -           //  |\\^^/|  \\           -
          _/           //   (0::0)   \\            \\_
         /            ((     \\//     ))             \\ 
       -               \\    (oo)    //               -
      -                 \\  / \\/ \\  //                 -
     -                   \\/      \\/                   -
   / /|           /\\      (        )      /\\           |\\ \\
   |/ | /\\_/\\_/\\_/  \\_/\\  (   /\\   )  /\\_/  \\_/\\_/\\_/ | \\|
   `  |/  V  V  `    V  \\_(| |  | |)_/  V    '  V  V  \\|  '
      `   `  `       `   / | |  | | \\   '       '  '   '
                       <(  | |  | |  )>             
                      <__\\_| |  | |_\\__>           
                      ^^^^ ^^^  ^^^ ^^^^^
        		    LIBFT
	(dajesus- "https://www.linkedin.com/in/daniel-js/")
endef
export HEADER

INCLUDE = -I .
SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
       ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
       ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c\
       ft_strlen.c ft_strncmp.c ft_strrchr.c ft_toupper.c\
       ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c\
       ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
       ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
       ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
       ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:%.c=%.o)

all: print_banner $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $(OBJS)
	@echo "\r\033[K$(CYAN)LIBFT $(RED)is ready!$(RESET)"

%.o: %.c libft.h
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	@printf "\r$(CYAN)Compiling $(GREEN)$< $(RESET)"

clean:
	@echo "$(RED)Removing all .o $(RESET)"
	@rm -rf $(OBJS)

fclean: clean
	@echo "$(RED)Removing .a$(RESET)"
	@rm -f $(NAME)

re: fclean all

print_banner:
	@clear
	@echo "$(RED)$$HEADER$(RESET)"

.PHONY: all clean fclean re print_banner
