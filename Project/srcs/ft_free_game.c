/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:01:13 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/04/16 22:26:21 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free(t_data *data)
{
	free(data->string);
	if (data->array && data->array_playable != NULL)
	{
		data->index = 0;
		while (data->array[data->index] != NULL)
		{
			free(data->array[data->index]);
			free(data->array_playable[data->index]);
			data->index++;
		}
		free(data->array);
		free(data->array_playable);
	}
}

int	ft_end(t_data *data)
{
	mlx_destroy_window(data->mlx, data->mlx_win);
	ft_free(data);
	exit(EXIT_SUCCESS);
}
