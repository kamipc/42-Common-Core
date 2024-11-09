/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-09 14:12:35 by user              #+#    #+#             */
/*   Updated: 2024-11-09 14:12:35 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	checksplit(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	found_c;
	char	*str1;
	char	*str2;

	split = (char **) malloc (16 * sizeof(char *) + 1);
	if (split == NULL)
		return (NULL);
	found_c = checksplit(s, c);
	str1 = ft_substr(s, 0, found_c);
	str2 = ft_substr(s, found_c, ft_strlen(s));
	split[0] = &str1[0];
	split[1] = &str2[0];
	split[2] = '\0';
	return (split);
}

static size_t	checksplit(char const *s, char c)
{
	size_t	i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}
