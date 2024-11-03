/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-02 16:57:59 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-11-02 16:57:59 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	checktrim(char const *s1, char const *set, size_t start);
static size_t	checkset(char const c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_set;
	size_t	end_set;
	size_t	s1_len;
	size_t	new_str_len;
	char	*new_str;

	if (s1 == NULL && set == NULL)
	{
		new_str = (char *) malloc (1);
		if (new_str == NULL)
			return (NULL);
		new_str[0] = '\0';
		return (new_str);
	}
	start_set = checktrim(s1, set, 0);
	s1_len = ft_strlen(s1);
	end_set = checktrim(s1, set, s1_len - 1) + 1;
	if (end_set <= start_set)
		end_set = s1_len;
	new_str_len = end_set - start_set;
	new_str = (char *) malloc (new_str_len + 1);
	if (new_str == NULL)
		return (NULL);
	new_str = ft_substr(s1, start_set, new_str_len);
	return (new_str);
}
static	char	*newstr(char const *s1, char const *set)
{
	
}

static	size_t	checktrim(char const *s1, char const *set, size_t start)
{
	if (start == 0)
	{
		while (s1[start] != '\0')
		{
			if (checkset(s1[start], set) == 0)
				return (start);
			start++;
		}
	}
	else if (start > 0)
	{
		while (s1[start] != '\0')
		{
			if (checkset(s1[start], set) == 0)
				return (start);
			start--;
		}
	}
	return (0);
}

static	size_t	checkset(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}