/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:43:53 by aestevam          #+#    #+#             */
/*   Updated: 2021/10/09 17:47:22 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoains(long n, char *str, int *i)
{
	if (n >= 10)
	{
		ft_itoains(n / 10, str, i);
		ft_itoains(n % 10, str, i);
	}
	else
		str[(*i)++] = n + '0';
}

static size_t	ft_itoalen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len = len + 1;
	while (n)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (ft_itoalen(n) + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (n == -2147483648)
	{
		str[i++] = '-';
		str[i++] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
	}
	ft_itoains(n, str, &i);
	str[i] = '\0';
	return (str);
}
