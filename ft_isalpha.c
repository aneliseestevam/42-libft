/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:18:58 by aestevam          #+#    #+#             */
/*   Updated: 2021/08/21 20:07:55 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	main(void)
{
	printf("Test ft_isalpha\n");
	printf("%d (Correct: 0)\n", ft_isalpha(' '));
	printf("%d (Correct: 1)\n", ft_isalpha('a'));
	printf("%d (Correct: 1)\n", ft_isalpha('B'));
	printf("%d (Correct: 0)\n", ft_isalpha(4));
	printf("%d (Correct: 0)\n\n", ft_isalpha('4'));

	printf("Test isalpha\n");
	printf("%d (Correct: 0)\n", isalpha(' '));
	printf("%d (Correct: 1)\n", isalpha('a'));
	printf("%d (Correct: 1)\n", isalpha('B'));
	printf("%d (Correct: 0)\n", isalpha(4));
	printf("%d (Correct: 0)\n", isalpha('4'));
}
