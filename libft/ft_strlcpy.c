/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:14:25 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/26 16:27:42 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		a;

	a = 0;
	if (!size)
		return (ft_strlen(src));
	while ((a < size - 1) && (src[a] != '\0'))
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	d[100];
// 	char	s[15];

// 	s[15] = "daily cool";
// 	printf("output %d\n", ft_strlcpy(d, s, 3));
// }
