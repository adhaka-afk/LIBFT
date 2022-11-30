/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:37 by adhaka            #+#    #+#             */
/*   Updated: 2022/11/23 20:37:55 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				a;
	unsigned char	*temp;

	temp = (unsigned char *) s;
	a = 0;
	while (a < n && *temp != '\0')
	{
		if (*temp == (unsigned char)c)
			return (temp);
		temp++;
		a++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "daily dose of interneb";
// 	printf ("the string %s\n", ft_memchr(str, 'z', 3300));
// }
