/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:01:42 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/15 08:35:13 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	a;
	char	*s1n;
	char	*s2n;

	a = 0;
	s1n = (char *)s1;
	s2n = (char *)s2;
	if (!s2n)
		return (s1n);
	while (a < len)
	{
		if ((s2n[a] == s1n[a]) && (s1n[a] != '\0'))
		{
				a++;
		}
		return (s1n);
	}
	return (NULL);
}
