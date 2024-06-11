/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_play.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:43:39 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/04/18 15:15:43 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_playing(t_data *data)
{
	ft_draw_floor_wall(data);
	ft_draw_collect_exit(data);
	ft_draw_player(data);
	return (0);
}

void	ft_image(t_data *data)
{
	int	res;

	res = 64;
	data->player = mlx_xpm_file_to_image(data->mlx, "xpm/P.xpm", &res, &res);
	if (!data->player)
		ft_end(data);
	data->wall = mlx_xpm_file_to_image(data->mlx, "xpm/Wall.xpm", &res, &res);
	if (!data->wall)
		ft_end(data);
	data->floor = mlx_xpm_file_to_image(data->mlx, "xpm/Floor.xpm", &res, &res);
	if (!data->floor)
		ft_end(data);
	data->coin = mlx_xpm_file_to_image(data->mlx, "xpm/C.xpm", &res, &res);
	if (!data->coin)
		ft_end(data);
	data->exit = mlx_xpm_file_to_image(data->mlx, "xpm/Exit.xpm", &res, &res);
	if (!data->exit)
		ft_end(data);
}

void	ft_play(t_data *data)
{
	int	x;
	int	y;

	data->step_count = 0;
	x = data->width;
	y = data->height;
	data->mlx = mlx_init();
	data->mlx_win = mlx_new_window(data->mlx, x * 64, y * 64, "- Anita game-");
	data->img = mlx_new_image(data->mlx, x * 64, y * 64);
	ft_image(data);
	mlx_loop_hook(data->mlx, ft_playing, data);
	mlx_key_hook(data->mlx_win, ft_key_hook, data);
	mlx_hook(data->mlx_win, 17, 0, ft_end, data);
	mlx_loop(data->mlx);
}
