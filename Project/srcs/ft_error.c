/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:55:55 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/04/19 17:57:52 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_special_characters(t_data *data)
{
	data->change = 0;
	data->row = 0;
	while (data->array_playable[data->row] != NULL)
	{
		data->column = 0;
		while (data->array_playable[data->row][data->column] != '\0')
		{
			if (data->array_playable[data->row][data->column] == EXIT \
				|| data->array_playable[data->row][data->column] == COLLECTIBLE)
				return (write(1, "Error\nInvalid map\n", 19), 1);
			data->column++;
		}
		data->row++;
	}
	return (0);
}

void	ft_change_hyphen(t_data *data)
{
	if (data->array_playable[data->row - 1][data->column] != WALL && \
		data->array_playable[data->row - 1][data->column] != '-')
	{
		data->array_playable[data->row - 1][data->column] = '-';
		data->change = 1;
	}
	if (data->array_playable[data->row + 1][data->column] != WALL && \
		data->array_playable[data->row + 1][data->column] != '-')
	{
		data->array_playable[data->row + 1][data->column] = '-';
		data->change = 1;
	}
	if (data->array_playable[data->row][data->column - 1] != WALL && \
		data->array_playable[data->row][data->column - 1] != '-')
	{
		data->array_playable[data->row][data->column - 1] = '-';
		data->change = 1;
	}
	if (data->array_playable[data->row][data->column + 1] != WALL && \
		data->array_playable[data->row][data->column + 1] != '-')
	{
		data->array_playable[data->row][data->column + 1] = '-';
		data->change = 1;
	}
}

int	ft_find_hyphen(t_data *data)
{
	data->change = 0;
	data->row = 0;
	while (data->array_playable[data->row] != NULL)
	{
		data->column = 0;
		while (data->array_playable[data->row][data->column] != '\0')
		{
			if (data->array_playable[data->row][data->column] == '-')
				ft_change_hyphen(data);
			data->column++;
		}
		data->row++;
	}
	return (0);
}

int	ft_check_player_playable(t_data *data)
{
	data->row = 0;
	while (data->array_playable[data->row] != NULL)
	{
		data->column = 0;
		while (data->array_playable[data->row][data->column] != '\0')
		{
			if (data->array_playable[data->row][data->column] == PLAYER)
			{
				data->player_x = data->row;
				data->player_y = data->column;
				data->array_playable[data->row][data->column] = '-';
				break ;
			}
			data->column++;
		}
		data->row++;
	}
	data->change = 1;
	while (data->change == 1)
		ft_find_hyphen(data);
	if (ft_check_special_characters(data) != 0)
		return (1);
	return (0);
}

int	ft_error(t_data *data)
{
	if (ft_check_characters_map(data->string) == 1)
		return (1);
	if (ft_check_count_characters(data) == 1)
		return (1);
	if (ft_check_square(data) == 1)
		return (1);
	if (ft_check_wall_map(data) == 1)
		return (1);
	if (ft_check_player_playable(data) == 1)
		return (1);
	return (0);
}
