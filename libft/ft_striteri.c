/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <farpacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:50:47 by farpacik          #+#    #+#             */
/*   Updated: 2022/12/15 13:50:48 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, s + i);
		i++;
	}
}
/*
void	f(unsigned int i, char *dizi)
{
	*dizi -= 32;
}
#include <stdio.h>

int	main()
{
	char	dizi[] = "omer";
	ft_striteri(dizi, &f);
	printf("%s", dizi);
}
*/
