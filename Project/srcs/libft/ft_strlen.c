/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:42:49 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/04/17 13:11:34 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *string)
{
	size_t	index;

	if (!string)
		return (-1);
	index = 0;
	while (string[index] != '\0')
		index++;
	return (index);
}

/* int main(void)
{
	char s[] = "Hola guapa";
	printf("Esta la longitud de la palabra =%zu\n", ft_strlen(s));

	return (0);
} */