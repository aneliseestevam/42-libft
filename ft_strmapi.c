/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:46:30 by aestevam          #+#    #+#             */
/*   Updated: 2021/10/09 13:39:55 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	i;
	char			*mapi;

	size = ft_strlen(s);
	i = 0;
	mapi = malloc(size + 1);
	if (!mapi)
		return (NULL);
	while (i < size)
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[size] = '\0';
	return (mapi);
}
