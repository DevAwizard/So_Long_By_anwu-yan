/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keyboard.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:59:11 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/04/16 21:21:00 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move(t_data *data, int x, int y)
{
	data->player_x = x;
	data->player_y = y;
	data->step_count++;
	if (data->array[x][y] == COLLECTIBLE)
	{
		data->collectible_count = data->collectible_count - 1;
		data->array[x][y] = SPACE;
	}
	else if (data->collectible_count == 0 && data->array[x][y] == EXIT)
		exit(EXIT_SUCCESS);
	ft_printf("Step Count: %d\n", data->step_count);
}

int	ft_key_hook(int keycode, t_data *data)
{
	if (keycode == 53)
		ft_end(data);
	if (keycode == 13 || keycode == 126)
	{
		if (data->array_playable[data->player_x - 1][data->player_y] != '1')
			ft_move(data, data->player_x - 1, data->player_y);
	}
	if (keycode == 1 || keycode == 125)
	{
		if (data->array_playable[data->player_x + 1][data->player_y] != '1')
			ft_move(data, data->player_x + 1, data->player_y);
	}
	if (keycode == 0 || keycode == 123)
	{
		if (data->array_playable[data->player_x][data->player_y - 1] != '1')
			ft_move(data, data->player_x, data->player_y - 1);
	}
	if (keycode == 2 || keycode == 124)
	{
		if (data->array_playable[data->player_x][data->player_y + 1] != '1')
			ft_move(data, data->player_x, data->player_y + 1);
	}
	return (0);
}
