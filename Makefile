CC        = gcc
LIBC    = ar rcs
CFLAGS    = -Wall -Wextra -Werror
RM        = rm -f

NAME    = libft.a
SRCS	= ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strlen.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c\
		ft_striteri.c \
		ft_strmapi.c \
		ft_itoa.c 
OBJS    = $(SRCS:.c=.o)

.c.o:
	@$(CC) $(CFLAGS) -c $< -I ./ -o $@
    
$(NAME): $(OBJS)
	@$(LIBC) $(NAME) $(OBJS)

$(OBJS): %.o: %.c
	gcc $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all .c.o clean fclean re