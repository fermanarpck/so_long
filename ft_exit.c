/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <farpacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:43:32 by farpacik          #+#    #+#             */
/*   Updated: 2022/12/15 13:48:09 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	happy_end(t_data *data)
{
	ft_printf("Game Finish Your Move Count -> %d <-", ++data->move_count);
	ft_exit(data);
}

void	ft_exit(t_data *data)
{
	if (data)
		ft_free(data);
	ft_printf("ERROR\n");
	exit(1);
}
