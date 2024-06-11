/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:32:22 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/04/16 21:40:42 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_characters_map(char const *string)
{
	int	index;

	index = 0;
	if (!string)
		return (-1);
	if (string[0] == '\n')
		return (write(1, "Error\nLinefeed found", 21), 1);
	while (string && string[index] != '\0')
	{
		if (string[index] != WALL && string[index] != SPACE && \
		string[index] != PLAYER && string[index] != EXIT && \
		string[index] != COLLECTIBLE && string[index] != '\n')
		{
			write(2, "Error\nInvalid character\n", 25);
			return (1);
		}
		if (string[index] == '\n' && string[index + 1] == '\n')
			return (write(1, "Error\nToo many linefeeds\n", 26), 1);
		index++;
	}
	return (0);
}

int	ft_check_count_characters(t_data *data)
{
	data->collectible_count = 0;
	data->exit_count = 0;
	data->player_count = 0;
	data->index = 0;
	if (!data->string)
		return (-1);
	while (data->string[data->index] != '\0')
	{
		if (data->string[data->index] == COLLECTIBLE)
			data->collectible_count++;
		else if (data->string[data->index] == EXIT)
			data->exit_count++;
		else if (data->string[data->index] == PLAYER)
			data->player_count++;
		data->index++;
	}
	if (data->collectible_count < 1)
		return (write(2, "Error\nNot enough collectibles\n", 31), 1);
	if (data->exit_count != 1)
		return (write(2, "Error\nInvalid exit count\n", 26), 1);
	if (data->player_count != 1)
		return (write(2, "Error\nInvalid player count\n", 28), 1);
	return (0);
}

int	ft_check_square(t_data *data)
{
	data->width = ft_strlen(data->array[0]);
	data->index = 1;
	while (data->array[data->index] != NULL)
	{
		if (ft_strlen(data->array[data->index]) != data->width)
			return (write(2, "Error\nInvalid length map\n", 26), 1);
		data->index++;
	}
	return (0);
}

int	ft_count_lines(char **array)
{
	int	rows;

	rows = 0;
	while (array[rows] != NULL)
		rows++;
	return (rows);
}

int	ft_check_wall_map(t_data *data)
{
	data->index1 = 0;
	data->height = ft_count_lines(data->array);
	while (data->array[0][data->index1] != '\0')
	{
		if (data->array[0][data->index1++] != WALL)
			return (write(2, "Error\nInvalid wall map\n", 24), 1);
	}
	data->index1 = 0;
	while (data->array[data->height - 1][data->index1] != '\0')
	{
		if (data->array[data->height - 1][data->index1++] != WALL)
			return (write(2, "Erro\nInvalid wall map\n", 23), 1);
	}
	data->index1 = 0;
	while (data->index1 < data->height)
	{
		if (data->array[data->index1][0] != WALL)
			return (write(2, "Error\nInvalid wall map\n", 24), 1);
		if (data->array[data->index1][data->width -1] != WALL)
			return (write(2, "Error\nInvalid wall map\n", 24), 1);
		data->index1++;
	}
	return (0);
}
