/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:52 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/12 16:13:57 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*newdst;
	char	*newsrc;
	size_t	a;

	a = 0;
	newsrc = (char *)src;
	newdst = (char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
		while (len-- > 0)
			newdst[len] = newsrc[len];
	else
	{
		while (a < len)
		{
			newdst[a] = newsrc[a];
			a++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	abc[] = "abcde";
// 	char	dest[1] = "\0";

// ft_memmove(dest, abc, 2);
// // memmove(dest, abc, 2);
// printf("the dest %s\n", dest);

// }
