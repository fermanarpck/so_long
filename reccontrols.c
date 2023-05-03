/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reccontrols.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <farpacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:44:21 by farpacik          #+#    #+#             */
/*   Updated: 2022/12/15 13:47:39 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	reccontrol1(t_data *data)
{
	if (data->maptmp[data->temp_y][data->temp_x + 1] != '.' && \
			data->maptmp[data->temp_y][data->temp_x + 1] != '1')
	{
		data->maptmp[data->temp_y][data->temp_x] = '.';
		data->temp_x++;
		if (data->maptmp[data->temp_y][data->temp_x] == 'C')
			data->tempcollect--;
		if (data->maptmp[data->temp_y][data->temp_x] == 'E')
		{
			if (data->tempcollect != 0)
			{
				data->temp_x--;
				data->exitt--;
				return ;
			}
			data->exitt--;
		}
		reccontrols(data);
		data->temp_x--;
	}
}

void	reccontrol2(t_data *data)
{
	if (data->maptmp[data->temp_y + 1][data->temp_x] != '.' && \
		data->maptmp[data->temp_y + 1][data->temp_x] != '1')
	{
		data->maptmp[data->temp_y][data->temp_x] = '.';
		data->temp_y++;
		if (data->maptmp[data->temp_y][data->temp_x] == 'C')
			data->tempcollect--;
		if (data->maptmp[data->temp_y][data->temp_x] == 'E')
		{
			if (data->tempcollect != 0)
			{
				data->temp_y--;
				data->exitt--;
				return ;
			}
			data->exitt--;
		}
		reccontrols(data);
		data->temp_y--;
	}
}

void	reccontrol3(t_data *data)
{
	if (data->maptmp[data->temp_y][data->temp_x - 1] != '.' && \
		data->maptmp[data->temp_y][data->temp_x - 1] != '1')
	{
		data->maptmp[data->temp_y][data->temp_x] = '.';
		data->temp_x--;
		if (data->maptmp[data->temp_y][data->temp_x] == 'C')
			data->tempcollect--;
		if (data->maptmp[data->temp_y][data->temp_x] == 'E')
		{
			if (data->tempcollect != 0)
			{
				data->temp_x++;
				data->exitt--;
				return ;
			}
			data->exitt--;
		}
		reccontrols(data);
		data->temp_x++;
	}
}

void	reccontrol4(t_data *data)
{
	if (data->maptmp[data->temp_y - 1][data->temp_x] != '.' && \
		data->maptmp[data->temp_y - 1][data->temp_x] != '1')
	{
		data->maptmp[data->temp_y][data->temp_x] = '.';
		data->temp_y--;
		if (data->maptmp[data->temp_y][data->temp_x] == 'C')
			data->tempcollect--;
		if (data->maptmp[data->temp_y][data->temp_x] == 'E')
		{
			if (data->tempcollect != 0)
			{
				data->temp_y++;
				data->exitt--;
				return ;
			}
			data->exitt--;
		}
		reccontrols(data);
		data->temp_y++;
	}
}
