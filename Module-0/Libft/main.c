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
#include <bsd/string.h>
#include <ctype.h>

char	f_mapi(unsigned int i, char c)
{
	(void)i;
	if (c >= 65 && c <= 90)
		c += 32;
	else if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
void	f_iteri(unsigned int i,char *c)
{	
	(void)i;
	if (*c >= 65 && *c <= 90)
		*c += 32;
	else if (*c >= 97 && *c <= 122)
		*c -= 32;
}

int	main()
{
	printf("////////// Main Functions ! ///////////\n\n\n");
	printf("isalpha\n");
	printf("%d\n", ft_isalpha('B'));
	printf("%d(orig)\n", isalpha('B'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d(orig)\n\n", isalpha('0'));

	printf("isdigit\n");
	printf("%d\n", ft_isdigit('A'));
	printf("%d(orig)\n", isdigit('A'));
	printf("%i\n", ft_isdigit('2'));
	printf("%i(orig)\n\n", isdigit('2'));

	printf("isalnum\n");
	printf("%d\n", ft_isalnum('A'));
	printf("(orig)%d\n", isalnum('A'));
	printf("%d\n", ft_isalnum('0'));
	printf("(orig)%d\n", isalnum('0'));
	printf("%d\n", ft_isalnum(','));
	printf("(orig)%d\n\n", isalnum(','));

	printf("isprint\n");
	printf("%d\n", ft_isprint('A'));
	printf("(orig)%d\n", isprint('A'));
	printf("%d\n", ft_isprint(','));
	printf("(orig)%d\n", isprint(','));
	printf("%d\n", ft_isprint('\n'));
	printf("(orig)%d\n\n", isprint('\n'));

	printf("isascii\n");
	printf("%d\n", ft_isascii('A'));
	printf("(orig)%d\n", isascii('A'));
	printf("%d\n", ft_isascii('0'));
	printf("(orig)%d\n", isascii('0'));
	printf("%d\n", ft_isascii(' '));
	printf("(orig)%d\n", isascii(' '));
	printf("%d\n", ft_isascii('\n'));
	printf("(orig)%d\n", isascii('\n'));
	printf("%d\n", ft_isascii(128));
	printf("(orig)%d\n", isascii(128));
	printf("%d\n", ft_isascii(-1));
	printf("(orig)%d\n\n", isascii(-1));

	printf("strlen\n");
	printf("ft: %zu\n", ft_strlen(""));
	printf("%lu(orig)\n", strlen(""));
	printf("ft: %zu\n", ft_strlen("Hello World"));
	printf("%lu(orig)\n", strlen("Hello World"));
	printf("ft: %zu\n", ft_strlen(" "));
	printf("%lu(orig)\n\n", strlen(" "));

	printf("toupper\n");
	printf("ft: %d\n", ft_toupper('b'));
	printf("%d(orig)\n", toupper('b'));
	printf("ft: %d\n", ft_toupper('B'));
	printf("%d(orig)\n\n", toupper('B'));

	printf("tolower\n");
	printf("ft:%d\n", ft_tolower('a'));
	printf("%d(orig)\n", tolower('a'));
	printf("ft:%d\n", ft_tolower('A'));
	printf("%d(orig)\n\n", tolower('A'));

	printf("strchr\n");
	printf("ft:%s\n", ft_strchr("hello world", 'l'));
	printf("%s(orig)\n", strchr("hello world", 'l'));
	printf("ft:%s\n", ft_strchr("", '\0'));
	printf("%s(orig)\n", strchr("", '\0'));
	printf("ft:%s\n", ft_strchr("hello world", 'c'));
	printf("%s(orig)\n\n", strchr("hello world", 'c'));

	printf("strrchr\n");
	printf("ft:%s\n", ft_strrchr("hello world", 'l'));
	printf("%s\n", strrchr("hello world", 'l'));
	printf("ft:%s\n", ft_strrchr("", '\0'));
	printf("%s\n", strrchr("", '\0'));
	printf("ft:%s\n", ft_strrchr("hello world", 'c'));
	printf("%s\n\n", strrchr("hello world", 'c'));

	printf("strncmp\n");
	printf("ft: %d\n", ft_strncmp("aaaa", "az", 4));
	printf("%d\n", strncmp("aaaa", "az", 4));
	printf("ft: %d\n", ft_strncmp("","", 2));
	printf("%d\n", strncmp("", "", 2));
	printf("ft: %d\n", ft_strncmp("helo", "hello world", 5));
	printf("%d\n\n", strncmp("helo", "hello world", 5));

	printf("atoi\n");
	printf("ft: %d\n", ft_atoi("-123abc"));
	printf("%d\n", atoi("-123abc"));
	printf("ft: %d\n", ft_atoi("-+-123abc"));
	printf("%d\n\n", atoi("-+-123abc"));

	printf("memset\n");
	char str_memset[50] = "hello world";
	printf("Before: %s\n", str_memset);
	ft_memset(str_memset, '*', 5);
	printf("After: %s\n\n", str_memset);
	
	printf("bzero\n");
	char str_bzero[50] = "hello world";
	printf("Before: %s\n", str_bzero);
	ft_bzero(str_bzero, 5);
	printf("After: %s\n\n", str_bzero);

	printf("memchr\n");
	char str[50] = "hello world";
	printf("Before: %s\n", str);
	char *rslt = ft_memchr(str, 'c', 5);
	printf("After: %s\n\n", rslt);

	printf("memcmp\n");
	printf("4 bytes on 'Hello world' and 'Helo': %d\n", ft_memcmp("Hello world", "Helo", 5));
	printf("4 bytes on 'Hello world' and 'Hello': %d\n", ft_memcmp("Hello world", "Hello", 5));
	printf("4 bytes on 'Hello world' and '': %d\n\n", ft_memcmp("Hello world", "", 5));

	printf("memcpy\n");
	char dest_memcpy[] = "hello world";
	ft_memcpy(dest_memcpy, "hi there", 4);
	printf("'hi there' 4 bytes to 'hello world: %s\n\n", dest_memcpy);

	printf("memmove\n");
	char dest_memmove[] = "hi there its me hello";
	ft_memmove(dest_memmove, "hello world", 11);
	printf("'hello world' 4 bytes to 'hi there its me hello': %s\n\n", dest_memmove);

	printf("strnstr\n");
	printf("'world' in 'hello world': %s\n", ft_strnstr("hello world", "world", 12));
	printf("'' in 'hello world' %s\n", ft_strnstr("hello world", "", 12));
	printf("'wow' in 'hello world': %s\n\n", ft_strnstr("hello world", "wow", 12));

	printf("strlcpy\n");
	char big_str[] = "world";
	size_t strlcpy_len = ft_strlcpy(big_str,"hello world", 5);
	printf(":%s\n\n", big_str);

	printf("strlcat\n");
	char dest_strlcat[6] = "hello ";
	size_t rslt_strlcat = ft_strlcat(dest_strlcat, "world", 6);
	printf(":%s\n\n", dest_strlcat);

	printf("strdup\n");
	printf(":%s\n", ft_strdup("hello world"));
	printf(":%s\n", ft_strdup(""));
	printf(":%s\n", ft_strdup("\n"));

	// printf("calloc\n");
	// char strcalloc[15] = "hello world";
	// ft_calloc(&strcalloc, 15);
	// printf("%s\n\n", strcalloc);

	printf("substr\n");
	char *str_substr = ft_substr("hello hey world", 6, 3);
	printf("%s\n", str_substr);
	
	printf("strjoin\n");
	printf("%s\n", ft_strjoin("hello", " world"));
	printf("%s\n\n", ft_strjoin("", "hey"));

	printf("strtrim\n");
	char *s_trim = "aadadaahello world!dadd";
	char *trim_set = "ad";
	char *rst_trim = ft_strtrim(s_trim, trim_set);
	printf("%s\n\n", rst_trim);

	printf("split\n");
	char **split = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	while (*split)
	{
		printf("%s\n", *split);
		split++;
	}
	int i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}

	printf("\nitoa\n");
	char *itoa_rst = ft_itoa(-2508);
	printf("%s\n", itoa_rst);
	itoa_rst = ft_itoa(200000);
	printf("%s\n", itoa_rst);
	itoa_rst = ft_itoa(0);
	printf("%s\n\n", itoa_rst);

	printf("strmapi\n");
	char *str_mapi = "HELLO world";
	char *smapi;
	smapi = ft_strmapi(str_mapi, *f_mapi);
	printf("%s\n\n", smapi);

	printf("striteri\n");
	char siteri[] = "hello WORLD";
	ft_striteri(siteri, *f_iteri);
	printf("%s\n\n", siteri);

	printf("putchar_fd\n");
	ft_putchar_fd('A',1);
	printf("\n\n");

	printf("putstr_fd\n");
	ft_putstr_fd("hello world", 1);
	printf("\n\n");

	printf("putendl_fd\n");
	ft_putendl_fd("hello world", 1);
	printf("\n");

	printf("putnbr_fd\n");
	ft_putnbr_fd(200, 1);
	printf("\n\n");

	printf("///////// BONUS ////////\n\n\n");
	
	return (0);
}