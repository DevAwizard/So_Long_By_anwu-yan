/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:43:20 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/04/17 13:55:36 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_draw_player(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->player, data->player_y * 64, data->player_x * 64);
}

void	ft_draw_collect_exit(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->array[i])
	{
		j = 0;
		while (data->array[i][j] != '\0')
		{
			if (data->array[i][j] == 'C')
				mlx_put_image_to_window(data->mlx, data->mlx_win, \
				data->coin, j * 64, i * 64);
			else if (data->array[i][j] == 'E')
				mlx_put_image_to_window(data->mlx, data->mlx_win, \
				data->exit, j * 64, i * 64);
			j++;
		}
		i++;
	}
}

void	ft_draw_floor_wall(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->array[i])
	{
		j = 0;
		while (data->array[i][j] != '\0')
		{
			if (data->array[i][j] == '1')
				mlx_put_image_to_window(data->mlx, data->mlx_win, \
				data->wall, j * 64, i * 64);
			else
				mlx_put_image_to_window(data->mlx, data->mlx_win, \
				data->floor, j * 64, i * 64);
			j++;
		}
		i++;
	}
}
