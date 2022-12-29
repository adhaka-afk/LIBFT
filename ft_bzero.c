/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:27 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/02 17:06:26 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <strings.h>
// #include <stdlib.h>
//  why bus error why am i able to write in the pointer value or
// why cant i write in the pointer value
//  refer ft-memcpy

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			a;

	a = 0;
	c = (unsigned char *)s;
	while (a < n)
	{
		c[a] = '\0';
		a++;
	}
}

// int	main(void)
// {
// 	char	s[6]= "12123";
// 	int	n;

// 	n = 3;

	// //s = "12123";
	// //s = malloc(n);
	// ft_bzero(s, n);
	// //bzero(s, n);
	// // int i = 0;
	// // while (i < n)
	// // {
	// // 	if (s[i] != '\0')
	// // 		printf ("char: %c\n", s[i]);
	// // 	else
	// // 		printf ("char: number %i is null\n", i);
	// // 	i++;
	// // }

// 	// return (0);
// 	printf("converted string is %s\n", s);
// }
