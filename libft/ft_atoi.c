/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:23 by adhaka            #+#    #+#             */
/*   Updated: 2022/11/30 18:13:08 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include<stdlib.h>

int	ft_atoi(const char *str)
{
	int	a;
	int	sign;
	int	res;

	sign = 1;
	a = 0;
	res = 0;
	if (str[0] == '-')
	{
		sign = -1;
		a++;
	}
	else if (str[0] == '+')
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

// 	str = "++2ab123";
// 	printf("converted string value is %d\n", ft_atoi(str));
// 	printf("converted string value is %d\n", atoi(str));
// }
