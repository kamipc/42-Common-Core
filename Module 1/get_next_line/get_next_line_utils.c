/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 14:29:07 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-12-13 14:29:07 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"


char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	dest = (char *)malloc (s_len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	f_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	f_len = s1_len + s2_len;
	str = (char *)malloc(s1_len + s2_len + 1);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, s1_len);
	ft_memcpy(&str[s1_len], s2, s2_len);
	str[f_len] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	cc = (char) c;
	i = 0;
	if (!s && cc != '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *) s + i);
		i++;
	}
	if (cc == '\0')
		return ((char *) s + i);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	r_len;

	if (s == NULL)
		return (NULL);
	r_len = ft_strlen(s);
	if (start >= r_len)
	{
		sub = (char *) malloc(1);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	r_len = r_len - start;
	if (len < r_len)
		r_len = len;
	sub = (char *)malloc(r_len + 1);
	if (sub == NULL)
		return (NULL);
	ft_memcpy(sub, &s[start], r_len);
	sub[r_len] = '\0';
	return (sub);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *) dest;
	s = (char *) src;
	if (d == NULL && s == NULL)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
