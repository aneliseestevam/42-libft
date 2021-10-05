/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 21:15:24 by aestevam          #+#    #+#             */
/*   Updated: 2021/10/05 07:37:44 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(char c)
{
	if (c == 0x20 || (c >= 0x09 && c <= 0x0d))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	signal;
	int	nbr;

	i = 0;
	signal = 1;
	nbr = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signal = -1;
		}
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * signal);
}

int	main(void)
{
	printf("\nTest de ft_atoi :\n");
	printf("0 : %d\n", ft_atoi("0"));
	printf("1 : %d\n", ft_atoi("1"));
	printf("10 : %d\n", ft_atoi("10"));
	printf("596 : %d\n", ft_atoi("596"));
	printf("-83 : %d\n", ft_atoi("-83"));
	printf("-2147483648 : %d\n", ft_atoi("-2147483648"));
	printf("0 : %d\n", ft_atoi("---48"));
	printf("0 : %d\n", ft_atoi("-+596"));
	printf("3 : %d\n", ft_atoi(" \t +3"));
}
