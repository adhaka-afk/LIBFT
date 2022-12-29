/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:01:42 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/24 09:13:43 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	a;
	char	*h;
	char	*n;

	h = (char *)hay;
	n = (char *)needle;
	if (!(*n) || n == NULL)
		return (h);
	while (*h && len)
	{
		a = 0;
		while ((n[a] == h[a]) && a < len)
		{
			if (!(n[a + 1]))
				return (h);
			a++;
		}
		h++;
		len--;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char	*str;

// 	if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30)))
// 		printf("NULL");
// 	else
// 		printf("%s\n", str);
// }
