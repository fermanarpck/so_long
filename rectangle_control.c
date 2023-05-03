/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle_control.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <farpacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:44:28 by farpacik          #+#    #+#             */
/*   Updated: 2022/12/15 13:48:13 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	rectangle_control(t_data *data)
{
	int	len;
	int	len_cont;
	int	leny;

	leny = data->leny;
	len = ft_strlen(data->maps[--leny]) + 1;
	while (--leny >= 0)
	{
		len_cont = ft_strlen(data->maps[leny]);
		if (len != len_cont)
		{
			ft_printf("Error\n");
			exit (1);
		}
	}
}

void	ft_map_free(t_data *data)
{
	int	i;

	i = 0;
	while (data->maps[i])
	{
		free(data->maps[i]);
		i++;
	}
	free(data->maps);
}

int	button(t_data *data)
{
	ft_exit(data);
	return (0);
}
