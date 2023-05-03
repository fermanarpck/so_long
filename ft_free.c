/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <farpacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:43:37 by farpacik          #+#    #+#             */
/*   Updated: 2022/12/15 13:48:08 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_free(t_data *data)
{
	ft_freeimg(data);
	ft_map_free(data);
	return (0);
}

void	ft_freeimg(t_data *data)
{
	if (data->coin)
		mlx_destroy_image(data->mlx, data->coin);
	if (data->player)
		mlx_destroy_image(data->mlx, data->player);
	if (data->exit_door)
		mlx_destroy_image(data->mlx, data->exit_door);
	if (data->wall)
		mlx_destroy_image(data->mlx, data->wall);
	if (data->background)
		mlx_destroy_image(data->mlx, data->background);
}
