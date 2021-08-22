/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:54:14 by aestevam          #+#    #+#             */
/*   Updated: 2021/08/21 22:41:07 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 0040 && c <= 0176)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("Test ft_isprint\n");
	printf("%d (Correct: 1)\n", ft_isprint(' '));
	printf("%d (Correct: 1)\n", ft_isprint('p'));
	printf("%d (Correct: 0)\n", ft_isprint(2));
	printf("%d (Correct: 1)\n", ft_isprint(126));
	printf("%d (Correct: 0)\n", ft_isprint(127));
}
