/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:36:42 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/04/17 15:43:07 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx.h"
# include "libft.h"

# define WALL '1'
# define SPACE '0'
# define COLLECTIBLE 'C'
# define EXIT 'E'
# define PLAYER 'P'

typedef struct s_data
{
	char		**array;
	char		**array_playable;
	char		*string;
	int			collectible_count;
	int			exit_count;
	int			player_count;
	int			index;
	int			column;
	int			row;
	int			change;
	int			player_x;
	int			player_y;
	int			step_count;
	int			fd;
	int			count_length_string;
	int			length_argument1;
	size_t		index1;
	size_t		width;
	size_t		height;
	void		*mlx;
	void		*mlx_win;
	void		*img;
	void		*player;
	void		*wall;
	void		*floor;
	void		*coin;
	void		*exit;

}	t_data;

int		ft_error(t_data *data);
int		ft_printf(char const *string, ...);
void	ft_play(t_data *data);
int		ft_key_hook(int keycode, t_data *data);
int		ft_end(t_data *data);
void	ft_free(t_data *data);
int		ft_check_characters_map(char const *string);
int		ft_check_count_characters(t_data *data);
int		ft_check_square(t_data *data);
int		ft_count_lines(char **array);
int		ft_check_wall_map(t_data *data);
void	ft_draw_player(t_data *data);
void	ft_draw_collect_exit(t_data *data);
void	ft_draw_floor_wall(t_data *data);

int		ft_printf(char const *string, ...);

#endif