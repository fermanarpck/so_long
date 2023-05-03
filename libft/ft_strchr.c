/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <farpacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:50:12 by farpacik          #+#    #+#             */
/*   Updated: 2022/12/15 13:50:12 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (char) c != *s)
		s++;
	if ((char) c == *s)
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	const char	dizi[] = "ömeraciz";
	char	*res;
	res = ft_strchr(dizi, 'r');
	printf("%s", res);
}
*/
/*stringin belirtilen karakterden sonrasını ekrana bastrırır.*/
