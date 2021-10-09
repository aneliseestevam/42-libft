/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:46:02 by aestevam          #+#    #+#             */
/*   Updated: 2021/10/09 13:48:16 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*dst;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dst = (char *)malloc ((len1 + len2 + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, len1 + 1);
	ft_strlcat(dst, s2, (len1 + len2 + 1));
	return (dst);
}
