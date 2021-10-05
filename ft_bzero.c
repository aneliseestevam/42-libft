/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 23:10:37 by aestevam          #+#    #+#             */
/*   Updated: 2021/09/28 21:16:51 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *ft_memset(void *dest, int c, size_t count) {
// 	char *str;

// 	str = (char *)dest;
// 	while (count > 0)
// 	{
// 		str[count-1] = c;
// 		count--;
// 	}
// 	return (dest);
// }

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char s[100] = "aaaaa";
// 	char sbis[100] = "aaaaa";

// 	printf("Test de ft_bzero :\n");
// 	strcpy(sbis, s);
// 	bzero(s, 3);
// 	ft_bzero(sbis, 3);
// 	int		i;
// 	i = 0;
// 	while (i < 5 && s[i] == sbis[i])
// 		i++;
// 	if (i == 5)
// 		printf("OK\n");
// }
