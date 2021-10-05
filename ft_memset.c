/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:44:05 by aestevam          #+#    #+#             */
/*   Updated: 2021/10/05 07:24:16 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <memory.h>
// #include <string.h>

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)dst;
	while (n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (dst);
}

// int	main(void)
// {
// 	printf("Test de ft_memset :\n");
// 	char s[100] = "aaaaa";
// 	char sbis[100] = "aaaaa";
// 	if (!strcmp(memset(s, 'z', 3), ft_memset(sbis, 'z', 3)))
// 	{
// 		printf("OK\n");
// 		printf("%s\n", sbis);
// 	}
// 	else
// 	{
// 		printf("Failed : expected '%s', got '%s'.\n", s, sbis);
// 	}
// }
