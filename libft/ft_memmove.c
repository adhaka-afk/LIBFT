/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:52 by adhaka            #+#    #+#             */
/*   Updated: 2022/11/16 14:54:32 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t n)
{
	char	*newdest;
	char	*newsrc;
	int		i;

	i = ft_strlen(src);
	newsrc = (char *)src;
	newdest = (char *)dest;
	while (i > n && newsrc[i] != '\0')
	{
		newdest[i] = newsrc[i];
		i--;
	}
}

int	main(void)
{
	char source[] = "daily   1212313";
	char destination[] = "123";
	printf("dest before %s\n", destination);

	ft_memcpy(destination, source, sizeof(source));
	printf ("the result %s\n", destination);
}
