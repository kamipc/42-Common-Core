/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-11 15:22:58 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-12-11 15:22:58 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	printf_ptr(void *ptr)
{
	int				len;
	unsigned long	p;

	len = 0;
	if (!ptr)
		return (0);
	else
	{
		p = (unsigned long) ptr;
		len += printf_str("0x");
		len += printf_hex(p, 'x');
	}
	return (len);
}