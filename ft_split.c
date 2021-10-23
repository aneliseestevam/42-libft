/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:45:33 by aestevam          #+#    #+#             */
/*   Updated: 2021/10/09 17:50:37 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	size;
	size_t	words;

	i = 0;
	words = 0;
	size = 0;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (size > 0)
			{
				words++;
				size = 0;
			}
		}
		else
			size++;
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (words);
}

static char	**ft_wordalloc(char const *s, char c, char	**split, size_t	slen)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = 0;
	while (i < slen + 1 && slen > 0)
	{
		if ((s[i] == c || s[i] == '\0'))
		{
			if (size > 0)
			{
				split[j] = (char *)ft_calloc(sizeof(char), size + 1);
				if (split[j] != (NULL))
					ft_strlcpy(split[j], &s[i - size], size + 1);
				size = 0;
				j++;
			}
		}
		else
			size++;
		i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;
	size_t	slen;

	slen = ft_strlen(s);
	words = ft_wordcount(s, c);
	split = (char **)ft_calloc(sizeof(char *), words + 1);
	if (!split)
		return (NULL);
	split = ft_wordalloc(s, c, split, slen);
	split[words] = 0;
	return (split);
}
