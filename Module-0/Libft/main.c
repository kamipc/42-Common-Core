/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 15:36:09 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-22 15:36:09 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main()
{
	printf("Is alpha?%d\n", ft_isalpha('B'));
	printf("Is alpha?%d(orig)\n", isalpha('B'));
	printf("Is alpha?%d\n", ft_isalpha('0'));
	printf("Is alpha?%d(orig)\n\n", isalpha('0'));

	printf("Is numeric?%d\n", ft_isdigit('A'));
	printf("Is numeric?%d(orig)\n", isdigit('A'));
	printf("Is numeric?%i\n", ft_isdigit('2'));
	printf("Is numeric?%i(orig)\n\n", isdigit('2'));

	printf("Is alphanumeric?%d\n", ft_isalnum('A'));
	printf("Is alphanumeric?(orig)%d\n", isalnum('A'));
	printf("Is alphanumeric?%d\n", ft_isalnum('0'));
	printf("Is alphanumeric?(orig)%d\n", isalnum('0'));
	printf("Is alphanumeric?%d\n", ft_isalnum(','));
	printf("Is alphanumeric?(orig)%d\n\n", isalnum(','));

	printf("Is printable?%d\n", ft_isprint('A'));
	printf("Is printable?(orig)%d\n", isprint('A'));
	printf("Is printable?%d\n", ft_isprint(','));
	printf("Is printable?(orig)%d\n", isprint(','));
	printf("Is printable?%d\n", ft_isprint('\n'));
	printf("Is printable?(orig)%d\n\n", isprint('\n'));

	printf("Is ASCII?%d\n", ft_isascii('A'));
	printf("Is ASCII?(orig)%d\n", isascii('A'));
	printf("Is ASCII?%d\n", ft_isascii('0'));
	printf("Is ASCII?(orig)%d\n", isascii('0'));
	printf("Is ASCII?%d\n", ft_isascii(' '));
	printf("Is ASCII?(orig)%d\n", isascii(' '));
	printf("Is ASCII?%d\n", ft_isascii('\n'));
	printf("Is ASCII?(orig)%d\n", isascii('\n'));
	printf("Is ASCII?%d\n", ft_isascii(128));
	printf("Is ASCII?(orig)%d\n", isascii(128));
	printf("Is ASCII?%d\n", ft_isascii(-1));
	printf("Is ASCII?(orig)%d\n\n", isascii(-1));

	printf("String lenght is %zu\n", ft_strlen(""));
	printf("String lenght is %lu(orig)\n", strlen(""));
	printf("String lenght is %zu\n", ft_strlen("Hello World"));
	printf("String lenght is %lu(orig)\n", strlen("Hello World"));
	printf("String lenght is %zu\n", ft_strlen(" "));
	printf("String lenght is %lu(orig)\n\n", strlen(" "));

	printf("To uppercase: %d\n", ft_toupper('b'));
	printf("To uppercase: %d(orig)\n", toupper('b'));
	printf("To uppercase: %d\n", ft_toupper('B'));
	printf("To uppercase: %d(orig)\n\n", toupper('B'));

	printf("To lowercase: %d\n", ft_tolower('a'));
	printf("To lowercase: %d(orig)\n", tolower('a'));
	printf("To lowercase: %d\n", ft_tolower('A'));
	printf("To lowercase: %d(orig)\n\n", tolower('A'));

	printf("String after finding char: %s\n", ft_strchr("hello world", 'l'));
	printf("String after finding char: %s(orig)\n", strchr("hello world", 'l'));
	printf("String after finding char: %s\n", ft_strchr("", 'l'));
	printf("String after finding char: %s(orig)\n", strchr("", 'l'));
	printf("String after finding char: %s\n", ft_strchr("hello world", 'c'));
	printf("String after finding char: %s(orig)\n\n", strchr("hello world", 'c'));


	return (0);
}