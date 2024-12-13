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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
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