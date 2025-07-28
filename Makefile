
NAME 		= 	push_swap
CC 			= 	cc
CFLAGS 		= 	-g3 -Wall -Wextra -Werror
LIB_DIR = ./librairie
SRC_DIR = ./src
SWAP_DIR = ./swap
PRINT_DIR = ./ftprint


PRINT = ft_printf.c ft_putchar.c ft_puthexamaj.c ft_puthexamin.c ft_putnbr.c ft_putpointer.c ft_putstr.c  ft_putunbr.c ft_strlen.c 

# Fichiers sources utils
SRC= onetofivesort.c fivetocentsort.c push_swap.c  conversion.c utils.c

# Fichiers sources librairie
LIB = ft_memcpy.c ft_strdup.c ft_strjoin.c ft_split.c ft_atoi.c ft_isdigit.c ft_error.c

# Fichiers sources swap
SWAP = ft_papb.c ft_rarbrr.c ft_rrarrbrrr.c  ft_sasbss.c
# Ajout des chemins aux fichiers sources

SRCS = $(addprefix $(SWAP_DIR)/, $(SWAP)) \
       $(addprefix $(SRC_DIR)/, $(SRC)) \
	   $(addprefix $(LIB_DIR)/, $(LIB))  \
	   $(addprefix $(PRINT_DIR)/, $(PRINT)) 

# Fichiers objets
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re