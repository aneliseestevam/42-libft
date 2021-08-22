/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:35:09 by aestevam          #+#    #+#             */
/*   Updated: 2021/08/21 20:21:51 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	main(void)
{
	printf("Test ft_isdigit\n");
	printf("%d (Correct: 0)\n", ft_isdigit(' '));
	printf("%d (Correct: 0)\n", ft_isdigit('a'));
	printf("%d (Correct: 0)\n", ft_isdigit('B'));
	printf("%d (Correct: 0)\n", ft_isdigit(4));
	printf("%d (Correct: 1)\n", ft_isdigit('4'));
	printf("%d (Correct: 1)\n\n", ft_isdigit('0'));

	printf("Test isdigit\n");
	printf("%d (Correct: 0)\n", isdigit(' '));
	printf("%d (Correct: 0)\n", isdigit('a'));
	printf("%d (Correct: 0)\n", isdigit('B'));
	printf("%d (Correct: 0)\n", isdigit(4));
	printf("%d (Correct: 1)\n", isdigit('4'));
	printf("%d (Correct: 1)\n", isdigit('0'));
}
