/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:41:37 by adhaka            #+#    #+#             */
/*   Updated: 2022/11/12 16:32:39 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_memcpy(void *dest, void *src, size_t n)
{
	char	*newsrc;
	char	*newdest;
	int		i;

	newsrc = (char *)src;
	newdest = (char *)dest;
	while (i < n)
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
