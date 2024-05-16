CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBRARY = libft.a
SRC = ft_atoi.c \
    ft_isalpha.c \
    ft_isdigit.c \
    ft_isalnum.c \
    ft_isascii.c \
	ft_isprint.c \
    ft_strlen.c \
    ft_memset.c \
    ft_bzero.c \
    ft_memcpy.c \
    ft_memmove.c \
	ft_calloc.c \
	ft_memcmp.c \
	ft_memchr.c \
    ft_strlcpy.c \
    ft_strlcat.c \
    ft_toupper.c \
    ft_tolower.c \
    ft_strchr.c \
    ft_strrchr.c \
    ft_strncmp.c \
    ft_strnstr.c \
    ft_strdup.c \
    ft_substr.c \
    ft_strjoin.c \
    ft_strtrim.c \
    ft_split.c \
    ft_itoa.c \
    ft_putchar_fd.c \
    ft_putendl_fd.c \
    ft_putstr_fd.c \
    ft_putnbr_fd.c \
    ft_striteri.c \
    ft_strmapi.c

SRC_B = ft_lstnew.c \
    ft_lstsize.c \
    ft_lstlast.c \
    ft_lstadd_front.c \
    ft_lstadd_back.c \
    ft_lstdelone.c \
    ft_lstclear.c \
    ft_lstiter.c \
    ft_lstmap.c

OBJ = $(SRC:.c=.o)
OBJS = $(SRC_B:.c=.o)

$(LIBRARY): $(OBJ)
	ar rcs $(LIBRARY) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

bonus: $(LIBRARY) $(OBJS)
	ar rcs $(LIBRARY) $(OBJ) $(OBJS)

.PHONY: all bonus clean fclean re

all: $(LIBRARY)

clean:
	rm -f *.o

re: fclean all

fclean: clean
	rm -f $(LIBRARY)
