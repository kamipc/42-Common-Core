/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 13:59:32 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-22 13:59:32 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cvtd_c;

	cvtd_c = (char) c;
	i = 0;
	if (!s && cvtd_c != '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == cvtd_c)
			return ((char *) s + i);
		i++;
	}
	if (cvtd_c == '\0')
		return ((char *) s + i);
	return (NULL);
}