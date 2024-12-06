/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-06 11:13:10 by user              #+#    #+#             */
/*   Updated: 2024-12-06 11:13:10 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

static int	print_args(va_list args, char c);

int	ft_printf(const char *mand, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, mand);
	i = 0;
	len = 0;
	while (mand)
	{
		if (mand[i] == '%')
		{
			i++;
			len += print_args(args, mand[i]);
		}
		else
		{

		}
	}
}

static int	print_args(va_list args, char c)
{
	if (c == 'c')
		return (printf_char(va_arg(args, char)));
	else if (c == '%')
		return (printf_char('%'));
	else if (c == 's')
		return (printf_str(va_arg(args, char *)));
	else if (c == i || c == d)
		return (printf_digits(va_arg(args, int)));
	else if (c == u)
		return (printf_uns(va_arg(args, unsigned int)));
	else if ()
}
