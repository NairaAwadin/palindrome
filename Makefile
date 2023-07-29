##
## EPITECH PROJECT, 2023
## B-SYN-200-PAR-2-1-palindrome-naira.awadin
## File description:
## Makefile
##

SRC	=	palindrome.c	\
		my_flag_n.c	\
		my_flag_p.c	\
		errors_handle.c	\
		generate_palindrome.c	\
		generate_palindrome_p.c	\
		get_base.c	\
		get_imax_imin.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g

NAME	=	palindrome

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -Wall -Wextra

clean:
		rm -f $(OBJ)

fclean:	clean
		-rm -f $(NAME)

re:	fclean all
