
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
MANSRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c 

BOSSRC = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstmap.c ft_lstiter.c ft_lstsize.c ft_lstlast.c ft_lstclear.c ft_lstdelone.c ft_lstsize.c

SOURCES = $(MANSRC:.c=.o)
BONUS   = $(BOSSRC:.c=.o)

%.o: %.c
	@echo "compiling --> \033[1;32m$?\033[0m " 
	@$(CC) $(CFLAGS) -c $?

all: $(NAME)

$(NAME): $(SOURCES)
	@echo "archiving *.o to libft.a"
	@$(AR) rcs $@ $?


bonus: $(BONUS) $(SOURCES)
	@echo "compiling the mandatory and bonus parts"
	@$(AR) rcs $(NAME) $?

clean:
	@echo "deleting only *.o"
	@rm -f $(SOURCES) $(BONUS)

fclean: clean
	@echo "deleting libft and *.o"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
