/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:20:42 by aestevam          #+#    #+#             */
/*   Updated: 2021/10/05 07:28:46 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main (void)
// {
//   char str[5] = "Curso";
//   int tamanho;

//   tamanho = ft_strlen(str);

//   printf("O tamanho da string %s vale %d\n", str, tamanho);

//   return 0;
// }
