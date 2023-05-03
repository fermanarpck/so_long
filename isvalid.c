/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <farpacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:43:59 by farpacik          #+#    #+#             */
/*   Updated: 2022/12/15 13:48:07 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	reccontrols(t_data *data)
{
	reccontrol1(data);
	reccontrol2(data);
	reccontrol3(data);
	reccontrol4(data);
}

int	isvalid(t_data *data, int len, char **av)
{
	data->exitdoorcount = data->exitt;
	maptemp(data, len, av);
	reccontrols(data);
	if (data->tempcollect <= 0 && data->exitt <= 0)
		return (1);
	else
	{
		ft_printf("kollektıbıl veya egzıta ulaşamıuorum -_-");
		exit(1);
	}
	return (0);
}
