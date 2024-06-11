NAME = so_long
CC = gcc
CFLAGS = -Wall -Werror -Wextra
MLXFLAGS = -L . -framework OpenGL -framework AppKit
CFLAGS = -Wall -Wextra -Werror
RM		= rm -f

SRCS = srcs/main.c \
			srcs/ft_error.c \
			srcs/ft_play.c \
			srcs/ft_keyboard.c \
			srcs/ft_free_game.c \
			srcs/ft_draw_map.c \
			srcs/ft_error_map.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) -I includes/ $(CFLAGS) -c $^ -o $@ 

$(NAME): $(OBJS) $(INCLUDE)
	@printf "\e[32mObjects Compiled✅\e[0m\n"
	@printf "\e[32mCompiling minilibx and printf...⏳\e[0m\n"
	@$(MAKE) -C srcs/libft 2>/dev/null >/dev/null
	@$(MAKE) -C srcs/mlx 2>/dev/null >/dev/null
	@$(CC) $(CFLAGS) srcs/libft/libft.a srcs/mlx/libmlx.a $(MLXFLAGS) $(OBJS) -o $(NAME)
	@printf "\e[32mReady to play 🤖\e[0m\n"

sanitize:
	@printf "\e[32mAdding Sanitize to CFLAGS\e[0m\n"
	$(eval CFLAGS=-fsanitize=address -g3)

sani: sanitize all #this rule changes CFLAGS to include sanitize and then compiles the program as usual

clean:
	@make clean -C srcs/mlx
	@make clean -C srcs/libft
	@rm -f $(OBJS)
	@printf "\e[31m*.o=>🗑️\e[0m\n"


fclean: clean
	make fclean -C srcs/libft
	rm -f $(NAME)
	@printf "\e[31m(so_long && libmlx.a && libftprintf.a)=>🗑️\e[0m\n"


re: fclean all

.PHONY: all clean fclean re