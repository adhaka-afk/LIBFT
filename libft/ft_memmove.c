/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:52 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/02 20:29:53 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t n)
{
	char	*newdest;
	char	*newsrc;
	int		i;
	int		a;

	a = 0;
	i = ft_strlen(src);
	newsrc = (char *)src;
	newdest = (char *)dest;
	if (newdest < newsrc)
	{
		while (a < n && newsrc[a] != '\0' && newdest[a] != '\0')
		{
			newdest[a] = newsrc[a];
			a++;
		}
	}
	else if (newdest > newsrc)
	{
		while (newsrc[i - 1] != '\0')
		{
			newdest[i] = newsrc[i];
			i--;
		}
	}
}

int	main(void)
{
	char	source[] = "daily   1212313";
	char	destination[] = "123sdfdfafadfasfafadfadf";

	memmove(destination, source, 5);
	printf("dest before %s\n", destination);
	ft_memmove(destination, source, 5);
	printf ("dest after1 %s\n", destination);
}
