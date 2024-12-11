/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_uns.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-06 12:53:11 by user              #+#    #+#             */
/*   Updated: 2024-12-06 12:53:11 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

static void	prt_nbr(unsigned int n);

int	printf_uns(unsigned int n)
{
	size_t	count;

	prt_nbr(n);
	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	prt_nbr(unsigned int n)
{
	if (n > 9)
	{
		prt_nbr(n / 10);
		prt_nbr(n % 10);
	}
	else
		ft_putchar_fd(n + '0', 1);
}
