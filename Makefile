##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

SRC				=	src/usefull/my_getnbr.c\
					src/usefull/my_put_nbr.c\
					src/usefull/my_putstr.c\
					src/usefull/my_str_to_word_array.c\
					src/usefull/my_strcat.c\
					src/usefull/my_strlen.c\
					src/usefull/read_keybord.c\
					src/usefull/str_is_equal.c\
					src/usefull/is_number.c\
					src/usefull/int_to_str.c\
					src/usefull/free_array.c\
					src/usefull/pop_array.c\
					src/usefull/display_array.c\
					src/usefull/my_put_str_nbr.c\
					src/usefull/my_atof.c\
					src/ai.c\
					src/set_speed.c\
					src/set_dir.c


SRC_M			=	src/main.c

SRC_UT			=	tests/*.c

OBJ				=	$(SRC:.c=.o)

OBJ_M			=	$(SRC_M:.c=.o)

INCLUDE			=	-I./include

NAME			=	ai

NAME_UT			=	unit_test

CFLAGS			=	-W -Werror -Wall -Wextra -g -I./include

CFLAGS_UT		=	-lcriterion --coverage

RM				=	rm -rf


all:		$(NAME)

$(NAME):	$(OBJ_M) $(OBJ)
		gcc -o $(NAME) $(OBJ) $(OBJ_M) $(INCLUDE) $(CFLAGS)

tests_run:
		gcc -o $(NAME_UT) $(SRC) $(SRC_UT) $(INCLUDE) $(CFLAGS_UT)
		./$(NAME_UT)

clean:
		$(RM) $(OBJ) $(OBJ_UT) $(OBJ_M)

fclean:		clean fclean_ut
		$(RM) $(NAME)
		$(RM) *.gcda *.gcno

fclean_ut:	clean
		$(RM) $(NAME_UT)
		$(RM) *.gcda *.gcno

re:		fclean all
