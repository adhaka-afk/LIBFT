/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:41:37 by adhaka            #+#    #+#             */
/*   Updated: 2022/11/23 20:37:35 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_memcpy(void *dest, void *src, size_t n)
{
	char	*newsrc;
	char	*newdest;
	int		i;

	i = 0;
	newsrc = (char *)src;
	newdest = (char *)dest;
	while (i < n && newsrc[i] != '\0')
	{
		newdest[i] = newsrc[i];
		i++;
	}
}

// int	main(void)
// {
// 	char source[30] = "daily   1212313";
// 	char destination[45] = "123";
// 	printf("dest before %s\n", destination);

// 	ft_memcpy(destination, source, 2);
// 	printf ("dest after %s\n", destination);
// }
