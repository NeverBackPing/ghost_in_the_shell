######################## 🛠️ ##############################

CC = cc
CFLAGS = -Wall -Werror -Wextra -lreadline -lncurses -g

######################## 🛠️ ##############################

RM = rm -rf

######################## 🤖 #############################

NAME = minishell

######################## 📁 #############################

LIBFT = libft.a
LIBFT_DIR = srcs/dependency/libc

LIBC = $(LIBFT_DIR)/ft_isalpha.c $(LIBFT_DIR)/ft_isdigit.c $(LIBFT_DIR)/ft_isalnum.c $(LIBFT_DIR)/ft_isascii.c $(LIBFT_DIR)/ft_isprint.c $(LIBFT_DIR)/ft_strlen.c\
	$(LIBFT_DIR)/ft_memset.c $(LIBFT_DIR)/ft_bzero.c $(LIBFT_DIR)/ft_memcpy.c $(LIBFT_DIR)/ft_memmove.c $(LIBFT_DIR)/ft_strlcat.c $(LIBFT_DIR)/ft_strlcpy.c\
	$(LIBFT_DIR)/ft_strchr.c $(LIBFT_DIR)/ft_strrchr.c $(LIBFT_DIR)/ft_strncmp.c $(LIBFT_DIR)/ft_memchr.c $(LIBFT_DIR)/ft_strnstr.c $(LIBFT_DIR)/ft_toupper.c\
	$(LIBFT_DIR)/ft_memcmp.c $(LIBFT_DIR)/ft_tolower.c $(LIBFT_DIR)/ft_atoi.c $(LIBFT_DIR)/ft_calloc.c $(LIBFT_DIR)/ft_strdup.c\
	$(LIBFT_DIR)/ft_substr.c $(LIBFT_DIR)/ft_strjoin.c $(LIBFT_DIR)/ft_strtrim.c $(LIBFT_DIR)/ft_itoa.c $(LIBFT_DIR)/ft_strmapi.c $(LIBFT_DIR)/ft_striteri.c\
	$(LIBFT_DIR)/ft_putchar_fd.c $(LIBFT_DIR)/ft_putstr_fd.c $(LIBFT_DIR)/ft_putendl_fd.c $(LIBFT_DIR)/ft_putnbr_fd.c $(LIBFT_DIR)/ft_split.c\
	$(LIBFT_DIR)/ft_lstnew_bonus.c $(LIBFT_DIR)/ft_lstadd_front_bonus.c $(LIBFT_DIR)/ft_lstsize_bonus.c $(LIBFT_DIR)/ft_lstlast_bonus.c\
	$(LIBFT_DIR)/ft_lstadd_back_bonus.c $(LIBFT_DIR)/ft_lstdelone_bonus.c $(LIBFT_DIR)/ft_lstclear_bonus.c $(LIBFT_DIR)/ft_isspace.c\
	$(LIBFT_DIR)/ft_lstiter_bonus.c $(LIBFT_DIR)/ft_lstmap_bonus.c $(LIBFT_DIR)/ft_atol.c $(LIBFT_DIR)/ft_signe.c $(LIBFT_DIR)/ft_isdigitsigne.c\
	$(LIBFT_DIR)/ft_strtok.c $(LIBFT_DIR)/ft_strcat.c $(LIBFT_DIR)/ft_strcmp.c

LIBFT_OBJS = $(LIBC:.c=.o)

######################## 📁 #############################

SRC = srcs/main.c

SRCS = ${SRC} ${LIBC}

OBJS = $(SRCS:.c=.o)

######################## 🧠 #############################

INCLUDES = -Iincludes

######################## 🎨 #############################

BLUE	=	\033[0;34m
GREEN	=	\033[0;32m
RED		=	\033[31m
RESET	=	\033[0m
YELLOW	=	\033[0;33m

define HEADER

 ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░ ░▒▓███████▓▒░▒▓████████▓▒░
░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░         ░▒▓█▓▒░
░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░         ░▒▓█▓▒░
░▒▓█▓▒▒▓███▓▒░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░   ░▒▓█▓▒░
░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░  ░▒▓█▓▒░
░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░  ░▒▓█▓▒░
 ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░░▒▓███████▓▒░   ░▒▓█▓▒░


░▒▓█▓▒░▒▓███████▓▒░       ░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░
░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░         ░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░
░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░         ░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░
░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░         ░▒▓█▓▒░   ░▒▓████████▓▒░▒▓██████▓▒░
░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░         ░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░
░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░         ░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░
░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░         ░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░


 ░▒▓███████▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓█▓▒░      ░▒▓█▓▒░
░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░
░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░
 ░▒▓██████▓▒░░▒▓████████▓▒░▒▓██████▓▒░ ░▒▓█▓▒░      ░▒▓█▓▒░
       ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░
       ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░
░▒▓███████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓████████▓▒░▒▓████████▓▒░


endef
export HEADER

######################## 🗃️ #############################

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) $(INC) -c $< -o $@
	@echo "Compilation $< in $@"


######################## 🎶🎹 ############################

all: $(NAME) header

header:
	@echo "$(BLUE)$$HEADER$(RESET)"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
	@echo "Compiled ✅"
	@echo "The program $(NAME) is created ✅"

clean:
	@$(RM) $(OBJS) $(LIBFT_OBJS) $(PRINTF_OBJS)
	@echo ".o files are destroyed ✅"

fclean: clean
	@$(RM) $(NAME)
	@echo "Everything is clean ✅"

re: fclean all

.PHONY: all clean fclean header re
