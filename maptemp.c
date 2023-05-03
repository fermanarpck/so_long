/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maptemp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <farpacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:44:08 by farpacik          #+#    #+#             */
/*   Updated: 2022/12/15 13:47:50 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	maptemp(t_data *data, int len, char **av)
{
	int		i;
	int		fd;
	char	*s;

	i = 0;
	data->maptmp = malloc(sizeof(char *) * (len + 1));
	data->maptmp[len] = NULL;
	fd = open(av[1], O_RDONLY);
	while (len)
	{
		s = get_next_line(fd);
		data->maptmp[i] = s;
		i++;
		len--;
	}
	i = 0;
}
