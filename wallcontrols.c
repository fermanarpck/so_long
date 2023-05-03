/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wallcontrols.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <farpacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:44:37 by farpacik          #+#    #+#             */
/*   Updated: 2022/12/15 13:47:58 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	wallcontrol3(t_data *data)
{
	int	len;
	int	leny;

	leny = data->leny;
	len = ft_strlen(data->maps[leny - 2]);
	leny--;
	while (leny)
	{
		if (data->maps[leny][len - 2] == '1' && data->maps[leny][0] == '1')
			leny--;
		else
		{
			ft_printf("ERROR\n");
			exit(1);
		}
	}
}

void	wallcontrol(t_data *data)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (data->maps[i][c] != '\0')
	{
		if (data->maps[i][c] == '1' || data->maps[i][c] == '\n')
			c++;
		else
		{
			ft_printf("ERROR");
			exit(1);
		}
	}
}

void	wallcontrol2(t_data *data)
{
	int	c;

	c = 0;
	while (data->maps[data->leny - 1][c] != '\0')
	{
		if (data->maps[data->leny - 1][c] == '1')
			c++;
		else
		{
			ft_printf("ERROR");
			exit(1);
		}
	}
}
