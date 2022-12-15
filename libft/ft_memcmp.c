/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:43 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/15 04:00:51 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	a = 0;
	while (a < n)
	{
		if (str1[a] != str2[a])
		{
			return (str1[a] - str2[a]);
		}
		a++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	x = 0;
// 	int	y = 0;

// 	x = ft_memcmp("abc", "abc", 5);
// 	printf("result %d\n", x);
// 	y = memcmp("abc", "abc", 5);
// 	printf("result2 %d\n", y);
// }
