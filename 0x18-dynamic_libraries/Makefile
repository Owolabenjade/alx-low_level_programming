CC	=	gcc
CFLAGS	=	-Wall -Werror -Wextra -pedantic -std=gnu89
SRC	=	_putchar.c _islower.c _isalpha.c _abs.c _isupper.c _isdigit.c _strlen.c _puts.c _strcpy.c _atoi.c _strcat.c _strncat.c _strncpy.c _strcmp.c _memset.c _memcpy.c _strchr.c _strspn.c _strpbrk.c _strstr.c
OBJ	=	$(SRC:.c=.o)
	NAME	=	libdynamic.so

all: $(NAME)

$(NAME): $(OBJ)
	    $(CC) -shared -o $(NAME) $(OBJ)

%.o: %.c
	    $(CC) $(CFLAGS) -fPIC -c $< -o $@

clean:
	    rm -f $(OBJ)

fclean: clean
	    rm -f $(NAME)

re: fclean all
