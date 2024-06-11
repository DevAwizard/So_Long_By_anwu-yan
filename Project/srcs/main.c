/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:36:17 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/04/19 17:59:44 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <fcntl.h>
#include <stdio.h>

int	ft_check_ber(char *string)
{
	int	index;

	index = ft_strlen(string);
	if (string[index - 4] == '.' && string[index - 3] == 'b' && \
	string[index - 2] == 'e' && string[index - 1] == 'r')
		return (1);
	return (0);
}

size_t	ft_count_fd(int fd)
{
	int		read_bytes;
	char	buffer[1];
	int		total_read;

	total_read = 0;
	while (1)
	{
		read_bytes = read(fd, buffer, 1);
		total_read += read_bytes;
		if (read_bytes == 0)
			break ;
	}
	return (total_read);
}

int	main(int argument_counter, char **argument_vector)
{
	t_data	data;

	if (argument_counter != 2)
		return (write (1, "Error\nIncorrect number of arguments\n", 37), -1);
	data.length_argument1 = ft_strlen(argument_vector[1]);
	if (data.length_argument1 < 5)
		return (write (1, "Error\nUnvalid file\n", 20), -1);
	if (ft_check_ber(argument_vector[1]) == 0)
		return (ft_printf("Error\nInvalid file\n"), 1);
	data.fd = open (argument_vector[1], O_RDONLY);
	if (data.fd == -1)
		return (write (2, "Error\nUnvalid file\n", 20), -1);
	data.count_length_string = ft_count_fd(data.fd);
	data.string = malloc(sizeof(char) * (data.count_length_string) + 1);
	close(data.fd);
	data.fd = open (argument_vector[1], O_RDONLY);
	read(data.fd, data.string, data.count_length_string);
	data.string[data.count_length_string] = '\0';
	data.array = ft_split(data.string, '\n');
	data.array_playable = ft_split(data.string, '\n');
	if (ft_error(&data) == 0)
		ft_play(&data);
	else
		ft_free(&data);
	return (0);
}
