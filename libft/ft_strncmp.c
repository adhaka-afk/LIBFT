/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:01:38 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/13 16:46:20 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			a;
	int				count;
	unsigned char	*ns1;
	unsigned char	*ns2;

	a = 0;
	count = 0;
	ns1 = (unsigned char *)s1;
	ns2 = (unsigned char *)s2;
	if (!s1 && !s2)
		return (count);
	while (a < n && ((ns1[a] != '\0') || (ns2[a] != '\0')))
	{
		if (ns1[a] != ns2[a])
			count = ns1[a] - ns2[a];
		a++;
	}
	return (count);
}
