/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:41:37 by adhaka            #+#    #+#             */
/*   Updated: 2022/11/16 14:25:26 by adhaka           ###   ########.fr       */
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
// 	char source[] = "daily   1212313";
// 	char destination[] = "123";
// 	printf("dest before %s\n", destination);

// 	ft_memcpy(destination, source, sizeof(source));
// 	printf ("the result %s\n", destination);
// }
