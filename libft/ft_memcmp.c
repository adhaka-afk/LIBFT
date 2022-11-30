/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:43 by adhaka            #+#    #+#             */
/*   Updated: 2022/11/23 17:37:24 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				a;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	a = 0;
	if (*str1 == '\0' && *str2 != '\0')
		return (-1);
	else if (*str1 != '\0' && *str2 == '\0')
		return (1);
	else if (*str1 == '\0' && *str2 == '\0')
		return (0);
	while (a < n && *str1 != '\0' && *str2 != '\0')
	{
		if (*str1 == *str2)
			return (0);
		else if (*str1 < *str2)
			return (-1);
		else if (*str1 > *str2)
			return (1);
		a++;
		str1++;
		str2++;
	}
}
