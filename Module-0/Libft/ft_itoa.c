/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-03 18:46:41 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-11-03 18:46:41 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	check_n_len(long int n);
static char		*n_to_str(long int n, char *str);

char	*ft_itoa(int n)
{
	char	*n_str;
	size_t	str_len;

	str_len = check_n_len(n);
	n_str = (char *) malloc (str_len * sizeof(char *) + 1);
	if (n_str == NULL)
		return (NULL);
	n_str = n_to_str(n, n_str);
	return (n_str);
}
static char		*n_to_str(long int n, char *str)
{
	
	if (n < 0)
	{
		str[0] = '-';
		str++;
		n *= -1;
	}
	if (n > 9)
	{
		n_to_str(n / 10, str);
		n_to_str(n % 10, str);
	}
	else if (n >= 0 && n <= 9)
	{
		*str = n + '\0';
		str++;
	}
	*str = '\0';
	return (&str[0]);
}

static size_t	check_n_len(long int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}