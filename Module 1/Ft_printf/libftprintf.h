/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-06 11:49:02 by user              #+#    #+#             */
/*   Updated: 2024-12-06 11:49:02 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFTPRINTF.H
# define LIBFTPRINTF.H
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *mand, ...);
int	printf_char (char c);
int	printf_str(char * str);
int	printf_digits(int n);
int	printf_uns(unsigned int n);

#endif