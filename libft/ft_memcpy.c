/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:41:37 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/12 15:44:35 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*newsrc;
	char	*newdst;
	size_t	i;

	i = 0;
	newsrc = (char *)src;
	newdst = (char *)dst;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		newdst[i] = newsrc[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char source[30] = "daily   1212313";
// 	char destination[45] = "123";
// 	printf("dest before %s\n", destination);

// 	ft_memcpy(destination, source, 2);
// 	printf ("dest after %s\n", destination);
// }
