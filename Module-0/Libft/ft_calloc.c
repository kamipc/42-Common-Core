/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-31 16:57:47 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-31 16:57:47 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	temp = (unsigned char *) malloc (nmemb * sizeof(size) + 1);
	ft_bzero(temp, nmemb);
	return (temp);
}
