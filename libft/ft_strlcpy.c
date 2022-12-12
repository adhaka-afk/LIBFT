/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:14:25 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/12 21:19:06 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		a;

	a = 0;
	if (!dst)
		return ('\0');
	while (a < size && *src)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a + 1] = '\0';
	return (a);
}

// int	main(void)
// {
// 	char	d[100];
// 	char	s[15];

// 	s[15] = "daily cool";
// 	printf("output %d\n", ft_strlcpy(d, s, 3));
// }
