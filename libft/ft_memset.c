/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:58:03 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/02 17:18:34 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			a;

	a = 0;
	s = (unsigned char *)b;
	while (a < len)
	{
		s[a] = (unsigned char)c;
		a++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	s[14] = "2a2222a2a222";

// 	printf("before1 %s \n", s);
// 	memset(s, '3', 7);
// 	ft_memset(s, '3', 7);
// 	printf("before 2test %s\n", s);
// 	printf("after test %s\n", s);
// }
