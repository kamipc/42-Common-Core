/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-29 11:25:23 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-29 11:25:23 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*s;
	size_t	src_len;

	i = 0;
	s = (char *) src;
	src_len = ft_strlen(s);
	while (s[i] != '\0' && i < size)
	{
		if (i == (size - 1))
		{
			dst[i] = '\0';
			break ;
		}
		dst[i] = s[i];
		i++;
	}
	return (src_len);
}
