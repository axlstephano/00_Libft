/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_axcastil_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:47:32 by axcastil          #+#    #+#             */
/*   Updated: 2023/10/25 18:20:42 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//*****LIBC FUNTIONS*****

void	is_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....    IS FUNTIONS     .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	int c = '2';
	
	printf("\nCARACTER: %c\n", c);
	printf("\n\n\"isalpha\"\n");
	printf("************************************************************\n");
	printf("expected:%d\n", isalpha(c));
	printf("libft:%d\n", ft_isalpha(c));
	printf("************************************************************\n");

	printf("\n\n\"isdigit\"\n");
	printf("************************************************************\n");
	printf("expected:%d\n", isdigit(c));
	printf("libft:%d\n", ft_isdigit(c));
	printf("************************************************************\n");

	printf("\n\n\"isalnum\"\n");
	printf("************************************************************\n");
	printf("expected:%d\n", isalnum(c));
	printf("libft:%d\n", ft_isalnum(c));
	printf("************************************************************\n");

	printf("\n\n\"isascii\"\n");
	printf("************************************************************\n");
	printf("expected:%d\n", isascii(c));
	printf("libft:%d\n", ft_isascii(c));
	printf("************************************************************\n");

	printf("\n\n\"isprint\"\n");
	printf("************************************************************\n");
	printf("expected:%d\n", isprint(c));
	printf("libft:%d\n", ft_isprint(c));
	printf("************************************************************\n");
	
}

void	strlen_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      STRLEN        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");


	char *str = "42student\0code";
	printf("\nSTRING: %s\n", str);
	printf("************************************************************\n");
	
	printf("expected:\n\t%d\n", (int)strlen(str));
	
	printf("libft:\n\t%d\n", (int)ft_strlen(str));
	
	printf("************************************************************\n");
	
}

void	memset_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      MEMSET        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");


	char	str[] = "42studentcode";
	char	str2[] = "42studentcode";
	char	str3[] = "42studentcode";
	char	c = 'x';
	size_t	n = 5;

	memset(str2, c, n);
	ft_memset(str3, c, n);
	
	printf("\nSTRING: %s\n", str);
	printf("MEMSET SIZE: %zu\n", n);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("%s\n", str2);

	printf("libft:\n\t");
	printf("%s\n", str3);	

	printf("************************************************************\n");
	
}

void	bzero_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      BZERO         .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");


	char	str[] = "42studentcode";
	char	str2[] = "42studentcode";
	char	str3[] = "42studentcode";
	char	c = 'x';
	size_t	n = 2;

	bzero(str2, n);
	ft_bzero(str3, n);
	
	printf("\nSTRING: %s\n", str);
	printf("BZERO SIZE: %zu\n", n);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("%s\n", str2);

	printf("libft:\n\t");
	printf("%s\n", str3);	

	printf("************************************************************\n");
	//VERIFICAR CARACTERES DESPUES DE \0
	//printf("\n%c\n\n", str2[5]);
}

void	memcpy_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      MEMCPY        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");


	char	src[] = "42";
	char	dst[] = "studentcode";
	char	dst2[] = "studentcode";
	char	dst3[] = "studentcode";
	size_t	n = 2;

	memcpy(dst2, src, n);
	ft_memcpy(dst3, src, n);
	
	printf("\nSRC: %s\n", src);
	printf("DST: %s\n", dst);
	printf("MEMCPY SIZE: %zu\n", n);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("%s\n", dst2);

	printf("libft:\n\t");
	printf("%s\n", dst3);	

	printf("************************************************************\n");
	
}

void	memmove_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      MEMMOVE       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");


	char	src[] = "42";
	char	dst[] = "studentcode";
	char	dst2[] = "studentcode";
	char	dst3[] = "studentcode";
	size_t	n = 2;

	memmove(dst2, src, n);
	ft_memmove(dst3, src, n);
	
	printf("\nSRC: %s\n", src);
	printf("DST: %s\n", dst);
	printf("MEMMOVE SIZE: %zu\n", n);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("%s\n", dst2);

	printf("libft:\n\t");
	printf("%s\n", dst3);	

	printf("************************************************************\n");
	
}

void	strlcpy_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      STRLCPY       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");


	char	src[] = "code";
	char	dst[] = "brave";
	char	dst2[] = "brave";
	char	dst3[] = "brave";
	size_t	n = 5;

	size_t	j = strlcpy(dst2, src, n);
	size_t	i = ft_strlcpy(dst3, src, n);
	
	printf("\nSRC: %s\n", src);
	printf("DST: %s\n", dst);
	printf("STRLCPY SIZE: %zu\n", n);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("memcpy return value: %zu\n", j);
	printf("\tdst string: %s\n", dst2);

	printf("libft:\n\t");
	printf("memcpy return value: %zu\n", i);
	printf("\tdst string: %s\n", dst3);

	printf("************************************************************\n");

}

void	strlcat_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      STRLCAT       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");


	char	src[] = "bad";
	char	dst[] = "breaking ";
	char	dst2[20] = "breaking ";
	char	dst3[20] = "breaking ";
	size_t	n = 13;

	size_t	j = strlcat(dst2, src, n);
	size_t	i = ft_strlcat(dst3, src, n);
	
	printf("\nSRC: %s\n", src);
	printf("DST: %s\n", dst);
	printf("CONCATENATION SIZE: %zu\n", n);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("strlcat return value: %zu\n", j);
	printf("\tdst string: %s\n", dst2);

	printf("libft:\n\t");
	printf("strlcat return value: %zu\n", i);
	printf("\tdst string: %s\n", dst3);

	printf("************************************************************\n");

}

void	toupper_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....     TOUPPER        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	int c = 'd';
	
	printf("\nCARACTER: %c\n", c);
	printf("************************************************************\n");
	printf("expected:\n\t%c\n", toupper(c));
	printf("libft:\n\t%c\n", ft_toupper(c));
	printf("************************************************************\n");

}

void	tolower_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....     TOLOWER        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	int c = 'A';
	
	printf("\nCARACTER: %c\n", c);
	printf("************************************************************\n");
	printf("expected:\n\t%c\n", tolower(c));
	printf("libft:\n\t%c\n", ft_tolower(c));
	printf("************************************************************\n");

}

void	strchr_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      STRCHR        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "42studentcode";
	char	letter = 't';

	char	*j = strchr(str, letter);
	char	*i = ft_strchr(str, letter);
	
	printf("\nSTR: %s\n", str);
	printf("LETTER: %c\n", letter);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	if (!j)
		printf("\t*character not found*\n");
	else
		printf("character found in position %ld\n", j-str);
		printf("\tstrchr return: %s\n", j);
	printf("libft:\n\t");
	if (!i)
		printf("\t*character not found*\n");
	else
		printf("character found in position %ld\n", i-str);
		printf("\tstrchr return: %s\n", i);

	printf("************************************************************\n");

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      STRCHR_2      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str2[] = "42studentcode";
	int		letter2 = 1024;

	char	*j2 = strchr(str2, letter2);
	char	*i2 = ft_strchr(str2, letter2);
	
	printf("\nSTR: %s\n", str2);
	printf("LETTER: %c\n", letter2);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	if (!j2)
		printf("\t*character not found*\n");
	else
		printf("character found in position %ld\n", j2-str2);
		printf("\tstrchr return: %s\n", j);
	printf("libft:\n\t");
	if (!i2)
		printf("\t*character not found*\n");
	else
		printf("character found in position %ld\n", i2-str2);
		printf("\tstrchr return: %s\n", i2);

	printf("************************************************************\n");

}

void	strrchr_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      STRRCHR        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "42studentcode";
	char	letter = 't';

	char	*j = strrchr(str, letter);
	char	*i = ft_strrchr(str, letter);
	
	printf("\nSTR: %s\n", str);
	printf("LETTER: %c\n", letter);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	if (!j)
		printf("\t*character not found*\n");
	else
		printf("character found in position %ld\n", j-str);
		printf("\tstrrchr return: %s\n", j);
	printf("libft:\n\t");
	if (!i)
		printf("\t*character not found*\n");
	else
		printf("character found in position %ld\n", i-str);
		printf("\tstrrchr return: %s\n", i);

	printf("************************************************************\n");

}

void	strncmp_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      STRNCMP       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "42studentcode";
	char	str2[] = "42studentcode";
	size_t	n = 10;

	int	j = strncmp(str, str2, n);
	int	i = ft_strncmp(str, str2, n);
	
	printf("\nSTR 1: %s\n", str);
	printf("STR 2: %s\n", str2);
	printf("CMP SIZE: %zu\n", n);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	if (j == 0)
		printf("*the strings are identical*\n");
	else
		printf("\t%d\n", j);

	printf("libft:\n\t");
	if (j == 0)
		printf("*the strings are identical*\n");
	else
		printf("\t%d\n", i);

	printf("************************************************************\n");

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      STRNCMP_2     .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str3[] = "bettercallsaul";
	char	str4[] = "betterca\0lsaul";
	size_t	n2 = 10;

	int	a = strncmp(str3, str4, n2);
	int	b = ft_strncmp(str3, str4, n2);
	
	printf("\nSTR 1: %s\n", str3);
	printf("STR 2: %s\n", str4);
	printf("CMP SIZE: %zu\n", n2);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("\t%d\n", a);

	printf("libft:\n\t");
	printf("\t%d\n", b);

	printf("************************************************************\n");

}

void	memchr_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      MEMCHR        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "42studentcode";
	char	letter = 't';
	int		n = 7;

	char	*j = memchr(str, letter, n);
	char	*i = ft_memchr(str, letter, n);
	
	printf("\nSTR: %s\n", str);
	printf("LETTER: %c\n", letter);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	if (!j)
		printf("\t*character not found*\n");
	else
	{
		printf("character found in position %ld\n", j-str);
		printf("\tstrchr return: %s\n", j);
	}

	printf("libft:\n\t");
	if (!i)
		printf("\t*character not found*\n");
	else
	{
		printf("character found in position %ld\n", i-str);
		printf("\tstrchr return: %s\n", i);
	}

	printf("************************************************************\n");

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      MEMCHR_2      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str2[] = "42studentcode";
	int		letter2 = 1024;
	int		n2 = 20;

	char	*j2 = memchr(str2, letter2, n2);
	char	*i2 = ft_memchr(str2, letter2, n2);
	
	printf("\nSTR: %s\n", str2);
	printf("LETTER: %c\n", letter2);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	if (!j2)
		printf("*character not found*\n");
	else
	{
		printf("character found in position %ld\n", j2-str2);
		printf("\tmemchr return: %s\n", j2);
	}

	printf("libft:\n\t");
	if (!i2)
		printf("*character not found*\n");
	else
	{
		printf("character found in position %ld\n", i2-str2);
		printf("\tmemchr return: %s\n", i2);
	}

	printf("************************************************************\n");

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      MEMCHR_3      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str3[] = "42studentcode";

	char	*j3 = memchr(str3, 0, 0);
	char	*i3 = ft_memchr(str3, 0, 0);
	
	printf("\nSTR: %s\n", str3);
	printf("LETTER: EMPTY\n");
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("\tmemchr return: %s\n", j3);
	
	printf("libft:\n\t");
	printf("\tmemchr return: %s\n", i3);

	printf("************************************************************\n");

}

void	memcmp_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      MEMCMP        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	//char	str[] = "42studentcode";
	//char	str2[] = "42studentcode";
	int	str[] = {1, 2, 3, 4};
	int	str2[] = {1, 2, 3, 4}; 
	size_t	n = sizeof(int) * 4;

	int	j = memcmp(str, str2, n);
	int	i = ft_memcmp(str, str2, n);

	printf("CMP SIZE: %zu\n", n);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	if (j == 0)
		printf("*the strings are identical*\n");
	else
		printf("\t%d\n", j);

	printf("libft:\n\t");
	if (j == 0)
		printf("*the strings are identical*\n");
	else
		printf("\t%d\n", i);

	printf("************************************************************\n");

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      MEMCMP_2      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str3[] = "bettercallsaul";
	char	str4[] = "betterca\0lsaul";
	size_t	n2 = 10;

	int	a = memcmp(str3, str4, n2);
	int	b = ft_memcmp(str3, str4, n2);
	
	printf("CMP SIZE: %zu\n", n2);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("\t%d\n", a);

	printf("libft:\n\t");
	printf("\t%d\n", b);

	printf("************************************************************\n");

}

void	strnstr_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      STRNSTR       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "42studentat tc tcode";
	char	str2[] = "tco";
	size_t	n = 2; 

	char	*j = strnstr(str, str2, n);
	char	*i = ft_strnstr(str, str2, n);
	
	printf("\nSTRING 1: %s\n", str);
	printf("STRING 2: %s\n", str2);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	if (!j)
		printf("*string not found*\n");
	else
	{
		printf("string found in position %ld\n", j-str);
		printf("\tstrnstr return: %s\n", j);
	}
	printf("libft:\n\t");
	if (!i)
		printf("*string not found*\n");
	else
	{
		printf("string found in position %ld\n", i-str);
		printf("\tstrnstr return: %s\n", i);
	}
	
	printf("************************************************************\n");

}

void	atoi_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....        ATOI        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "-2147483648";
	size_t	n = 2; 

	int	j = atoi(str);
	int	i = ft_atoi(str);
	
	printf("\nSTRING: %s\n", str);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("\t%d\n", j);

	printf("libft:\n\t");
	printf("\t%d\n", i);
	
	printf("************************************************************\n");
}

void	calloc_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....        CALLOC      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	*j = calloc(SIZE_MAX, SIZE_MAX);
	char	*i = ft_calloc(SIZE_MAX, SIZE_MAX);
	
	
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("\t%s\n", j);

	printf("libft:\n\t");
	printf("\t%s\n", i);
	
	printf("************************************************************\n");
}

void	strdup_test(void)
{
	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....       STRDUP       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "42madridcode";

	char	*j = strdup(str);
	char	*i = ft_strdup(str);
	
	printf("\nSTRING: %s\n", str);
	printf("************************************************************\n");
	
	printf("expected:\n\t");
	printf("\tnew string: %s\n", j);

	printf("libft:\n\t");
	printf("\tnew string: %s\n", i);
	
	printf("************************************************************\n");

}

//*****ADITIONAL FUNTIONS*****

void	substr_test(void)
{
	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....       SUBSTR       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "42madridnetworkcode";
	
	char	*j = ft_substr(str, 8, 7);
	
	printf("\nSTRING: %s\n", str);
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	printf("\tsub string: %s\n", j);

	printf("************************************************************\n");

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      SUBSTR_2      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");
	
	char	*j2 = ft_substr("", 0, 0);
	
	printf("\nIF STRING IS EMPTY:\n");
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	printf("\tsub string: %s\n", j2);

	printf("************************************************************\n");

}

void	strjoin_test(void)
{
	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....       STRJOIN      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "breaking ";
	char	str2[] = "bad";
	
	char	*j = ft_strjoin(str, str2);
	
	printf("\nSTRING 1: %s", str);
	printf("\nSTRING 2: %s\n", str2);
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	printf("\tnew string: %s\n", j);

	printf("************************************************************\n");

}

void	strtrim_test(void)
{
	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....       STRTRIM      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "azazazmadridspainzaza1023azazazza";
	char	str2[] = "za";
	
	char	*j = ft_strtrim(str, str2);
	
	printf("\nSTRING: %s", str);
	printf("\nCHARACTER TO DELETE: %s\n", str2);
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	printf("\tnew string: %s\n", j);

	printf("************************************************************\n");

}

void	split_test(void)
{
	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....       SPLIT        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "42XstudentXcodeXmadrid";
	char	letter = 'X';
	
	char	**j = ft_split(str,letter);
	int		i = 0;
	
	printf("\nSTRING: %s", str);
	printf("\nCHARACTER: %c\n", letter);
	printf("************************************************************\n");
	
	printf("libft:\n");
	while(j[i])
	{
		printf("\tstring %d: %s\n", i+ 1, j[i]);
		i++;
	}
	printf("************************************************************\n");

}

void	itoa_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....        ITOA        .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	int	nbr = -2147483648;

	char	*j = ft_itoa(nbr);
	
	printf("\nNUMBER: %d\n", nbr);
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	printf("\t%s\n", j);
	
	printf("************************************************************\n");

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....       ITOA_2       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	int	nbr2 = 2421023;

	char	*j2 = ft_itoa(nbr2);

	printf("\nNUMBER: %d\n", nbr2);
	printf("************************************************************\n");

	printf("libft:\n\t");
	printf("\t%s\n", j2);

	printf("************************************************************\n");

}

//·······FUNTION 'F' IS USED TO APPLY IN STRMAPI·········
char	f(unsigned int i, char c)
{
	c = c + i;
	return(c);
}

void	strmapi_test(void)
{
	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....       STRMAPI      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "ABCDEFGHI";
	
	char	*j = ft_strmapi(str, (*f));
	
	printf("\nSTRING: %s\n", str);
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	printf("\tnew string: %s\n", j);

	printf("************************************************************\n");

}

//·······FUNTION 'big' IS USED TO APPLY IN STRMAPI·········
void	big(unsigned int a, char *b)
{
	*b = toupper(*b);
}

void	striteri_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      STRITERI      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "helloworld!";
	
	
	printf("\nSTRING: %s\n", str);
	
	ft_striteri(str, big);
	
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	printf("\tnew string: %s\n", str);

	printf("************************************************************\n");

}

//*****FILE DESCRIPTOR FUNTIONS*****

void	putchar_fd_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....     PUTCHAR_FD     .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	letter = 'x';
	int		fd = 1;
	
	printf("LETTER: %c\n", letter);	
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	ft_putchar_fd('\t', fd);
	ft_putchar_fd(letter, fd);
	printf("\n");

	printf("************************************************************\n");

}

void	putstr_fd_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....     PUTSTR_FD      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "holamundo!";
	int		fd = 1;
	
	printf("STRING: %s\n", str);	
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	ft_putchar_fd('\t', fd);
	ft_putstr_fd(str, fd);
	printf("\n");

	printf("************************************************************\n");

}

void	putendl_fd_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....     PUTENDL_FD     .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	char	str[] = "holamundo!";
	int		fd = 1;
	
	printf("STRING: %s\n", str);	
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	ft_putchar_fd('\t', fd);
	ft_putendl_fd(str, fd);
	printf("\n");

	printf("************************************************************\n");

}

void	putnbr_fd_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....     PUTNBR_FD      .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	int	nbr = -2147483648;
	int	fd = 1;
	
	printf("NUMBER: %d\n", nbr);	
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	ft_putchar_fd('\t', fd);
	ft_putnbr_fd(nbr, fd);
	printf("\n");

	printf("************************************************************\n");

}

//*****BONUS FUNTIONS*****

void	lstnew_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....       LSTNEW       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	t_list	*node = ft_lstnew("42studentcode");
	
	printf("\nNODE: %s\n", "42studentcode");
	
	printf("************************************************************\n");
	
	printf("libft:\n\t");
	printf("\tnew list: %s\n", node->content);

	printf("************************************************************\n");

}

void	lstadd_front_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....    LSTADD_FRONT    .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	t_list	*head = NULL;
	t_list	*node = ft_lstnew("hello");
	ft_lstadd_front (&head, node);
	node = ft_lstnew("madrid");
	ft_lstadd_front (&head, node);
	node = ft_lstnew("españa");
	ft_lstadd_front (&head, node);
	node  = head;
		
	//printf("\nNODE: %s\n", "42studentcode");
	
	printf("************************************************************\n");
	
	printf("libft:\n");
	int i = 1;
	while (node)
	{
		printf("\tnode %d: %s\n", i, node->content);
		i++;
		node = node->next;
	}
	printf("************************************************************\n");

}

void	lstsize_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      LSTSIZE       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	t_list	*head = NULL;
	t_list	*node = ft_lstnew("hello");
	ft_lstadd_front (&head, node);
	node = ft_lstnew("madrid");
	ft_lstadd_front (&head, node);
	node = ft_lstnew("españa");
	ft_lstadd_front (&head, node);
	node  = head;

	int len = ft_lstsize(head);

	int	i = 1;
	while (node)
	{
		printf("lst %d: %s\n", i, node->content);
		i++;
		node = node->next;
	}
	printf("************************************************************\n");
	
	printf("libft:\n");
	printf("\tlst size: %d\n", len);
	
	printf("************************************************************\n");

}

void	lstlast_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....      LSTLAST       .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	t_list	*head = NULL;
	t_list	*node = ft_lstnew("hello");
	ft_lstadd_front (&head, node);
	node = ft_lstnew("madrid");
	ft_lstadd_front (&head, node);
	node = ft_lstnew("españa");
	ft_lstadd_front (&head, node);
	node  = head;

	t_list *last = ft_lstlast(head);

	int	i = 1;
	while (node)
	{
		printf("lst %d: %s\n", i, node->content);
		i++;
		node = node->next;
	}
	printf("************************************************************\n");
	
	printf("libft:\n");
	printf("\tlast lst: %s\n", last->content);
	
	printf("************************************************************\n");

}

void	lstadd_back_test(void)
{

	printf("\t\t..............................\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t.....    LSTADD_BACK     .....\n");
	printf("\t\t.....                    .....\n");
	printf("\t\t..............................\n");

	t_list	*head = NULL;
	t_list	*node = ft_lstnew("hello");
	ft_lstadd_back (&head, node);
	node = ft_lstnew("madrid");
	ft_lstadd_back (&head, node);
	node = ft_lstnew("españa");
	ft_lstadd_back (&head, node);
	node  = head;

	printf("************************************************************\n");
	
	printf("libft:\n");
	int	i = 1;
		while (node)
		{
			printf("\tlst %d: %s\n", i, node->content);
			i++;
			node = node->next;
		}
	
	printf("************************************************************\n");

}

//void	print_data(void *a)
//{
//	*a = 'b';
//}


//void	lstiter_test(void)
//{

//	printf("\t\t..............................\n");
//	printf("\t\t.....                    .....\n");
//	printf("\t\t.....      LSTITER       .....\n");
//	printf("\t\t.....                    .....\n");
//	printf("\t\t..............................\n");

//	t_list *list = (t_list *)malloc(sizeof(t_list));
//    list->content = "Hola";
//    list->next = (t_list *)malloc(sizeof(t_list));
//    list->next->content = "Mundo";
//    list->next->next = NULL;
	
//	printf("\nCONTENT BEFORE FUNTION: %s\n", list->content);
//	printf("************************************************************\n");
	
//	printf("libft:\n");
//	ft_lstiter(list, print_data);
//	printf("\tcontent after funtion: %s\n", list ->content);
//	printf("************************************************************\n");

//}

int main() 
{

	printf("\n\n\n\t\t   *****LIBC FUNTIONS*****\n\n\n");

	is_test();
	strlen_test();
	memset_test();
	bzero_test();
	memcpy_test();
	memmove_test();
	strlcpy_test();
	strlcat_test();
	toupper_test();
	tolower_test();
	strchr_test();
	strrchr_test();
	strncmp_test();
	memchr_test();
	memcmp_test();
	strnstr_test();
	atoi_test();
	calloc_test();
	strdup_test();

	printf("\n\n\n\t\t   *****ADITIONAL FUNTIONS*****\n\n\n");
	
	substr_test();
	strjoin_test();
	strtrim_test();
	split_test();
	itoa_test();
	strmapi_test();
	striteri_test();
	putchar_fd_test();
	putstr_fd_test();
	putendl_fd_test();
	putnbr_fd_test();

	printf("\n\n\n\t\t   *****BONUS FUNTIONS*****\n\n\n");

	lstnew_test();
	lstadd_front_test();
	lstsize_test();
	lstlast_test();
	lstadd_back_test();
	//lstiter_test();
	//lstmap_test();
    return 0;
}
