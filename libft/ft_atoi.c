/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:23 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/29 23:27:46 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	sign;
	int	res;

	sign = 1;
	a = 0;
	res = 0;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	if (str[a] == '-')
	{
		sign = -1;
		a++;
	}
	else if (str[a] == '+')
		a++;
	while (str[a] != '\0')
	{
		if (!('0' <= str[a] && str[a] <= '9'))
			break ;
		res = res * 10 + (str[a] - '0');
		a++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "5889784455caggag!";
// 	printf("converted string value is %d\n", ft_atoi(str));
// 	printf("converted string value is %d\n", atoi(str));
// }
