/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:14:25 by adhaka            #+#    #+#             */
/*   Updated: 2022/11/21 20:25:44 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	a;

	a = 0;
	if (dst == NULL)
		return ('\0');
	while (a <= size)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
}

int	main(void)
{
	char	d[100];
	char	s[15];

	s[15] = "daily cool";
	printf("output %d\n", ft_strlcpy(d, s, 3));
}
