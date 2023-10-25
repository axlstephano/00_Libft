/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tester.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:07:30 by calbar-c          #+#    #+#             */
/*   Updated: 2023/10/24 00:20:09 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>



void	ischar_test(void)
{
	int c = '4';

	int	original = isalpha(c);
	int	ft = ft_isalpha(c);
	printf("\n\t****** CHAR ******\n");
	printf("\n\tISALPHA\n");
	printf("Expected: %d\n", original);
	printf("FT_user_: %d\n\n", ft);

	printf("\n\tISDIGIT\n");
	printf("Expected: %d\n", isdigit('c'));
	printf("FT_user_: %d\n\n", ft_isdigit('c'));

	printf("\n\tISALNUM\n");
	printf("Expected: %d\n", isalnum('6'));
	printf("FT_user_: %d\n\n", ft_isalnum('6'));

	printf("\n\tISASCII\n");
	printf("Expected: %d\n", isascii(126));
	printf("FT_user_: %d\n\n", ft_isascii(126));

	printf("\n\tISPRINT\n");
	printf("Expected: %d\n", isprint(126));
	printf("FT_user_: %d\n\n", ft_isprint(126));

	printf("\n\tTOUPPER\n");
	printf("Expected: %d\n", toupper('a'));
	printf("FT_user_: %d\n\n", ft_toupper('a'));

	printf("\n\tTOLOWER\n");
	printf("Expected: %d\n", tolower('C'));
	printf("FT_user_: %d\n\n", ft_tolower('C'));
}

void	strlen_test(void)
{
	printf("\n\t****** STR ******\n");
	const char *s = "Hello World\0Hello";

	size_t	original = strlen(s);
	size_t	ft = ft_strlen(s);
	printf("\tSTRLEN\n");
	printf("Expected: %zu\n", original);
	printf("FT_user_: %zu\n\n", ft);
}

void	strchr_test(void)
{
	const char *s = "Hello World";
	int c = '\0';

	char *r_original = strchr(s, c);
	char *r_ft = ft_strchr(s, c);
	printf("\tSTRCHR\n");
	if (!r_original)
		printf("Expected: Character not found\n");
	else
		printf("Expected: %s\n", r_original);
	if (!r_ft)
		printf("FT_user_: Character not found\n");
	else
		printf("FT_user_: %s\n", r_ft);

	char *rr_original = strrchr(s,c);
	char *rr_ft = ft_strrchr(s, c);
	printf("\n");
	printf("\tSTRRCHR\n");
	if (!rr_original)
		printf("Expected: Character not found\n");
	else
		printf("Expected: %s\n", rr_original);
	if (!rr_ft)
		printf("FT_user_: Character not found\n");
	else
		printf("FT_user_: %s\n\n", rr_original);
}

void	strchr_test2(void)
{
	const char *s = "teste";
	int c = 1024;

	char *r_original = strchr(s, c);
	char *r_ft = ft_strchr(s, c);
	printf("\tSTRCHR 2\n");
		printf("Expected: %p\n", r_original);
		printf("FT_user_: %p\n\n", r_ft);
}

void	strncmp_test(void)
{
	char *s1 = "Hola\0Mundo!";
	char *s2 = "Hola Mundo!";
	size_t n = 5;

	int ftcmp = ft_strncmp(s1, s2, n);
	int cmp = strncmp(s1, s2, n);
	printf("\tSTRNCMP\n");
	printf("Expected: %d\n", cmp);
	printf("FT_user_: %d\n\n", ftcmp);
}

void	strnstr_test(void)
{
	char *haystack = "Hola mu munmumunmundo!";
	char *needle = "mundo";
	size_t n = 21;
	
	char *strn = strnstr(haystack, needle, n);
	char *ftstrn = ft_strnstr(haystack, needle, n);
	
	printf("\tSTRNSTR\n");
	if (!strn)
	 	printf("Expected: Needle not found\n");
	else
	 	printf("Expected: %s\n", strn);
	if (!ftstrn)
		printf("FT_user_: Needle not found");
	else
		printf("FT_user_: %s\n\n", ftstrn);
}

void	strlcpy_test(void)
{
	char dst[20];
	char *src = "";
	
	char dst_f[20];
	char *src_f = "";
	
	size_t lcpy = strlcpy(dst, src, sizeof(dst));
	size_t ftlcpy = ft_strlcpy(dst_f, src_f, sizeof(dst_f));

	printf("\tSTRLCPY\n");
	printf("Expected: %zu characters tried to be copied\n", lcpy);
	printf("FT_user_: %zu characters tried to be copied\n\n", ftlcpy);
	printf("Expected: %s\n", dst);
	printf("FT_user_: %s\n\n", dst_f);
}

void	strlcat_test(void)
{
	char dst[10] = "Hola ";
	char *src = "mundo!";
	
	char dst_f[10] = "Hola ";
	char *src_f = "mundo!";
	
	size_t lcat = strlcat(dst, src, sizeof(dst));
	size_t ftlcat = ft_strlcat(dst_f, src_f, sizeof(dst_f));

	printf("\tSTRLCAT\n");
	printf("Expected: %zu characters tried to be copied\n", lcat);
	printf("FT_user_: %zu characters tried to be copied\n\n", ftlcat);
	printf("Expected: %s\n", dst);
	printf("FT_user_: %s\n\n", dst_f);
}

void	atoi_test(void)
{
	const char *s = "-2147483648";
	int og = atoi(s);
	int sol = ft_atoi(s);

	printf("\tATOI\n");
	printf("Expected: %d\n", og);
	printf("FT_user_: %d\n\n", sol);
}

void	memset_test(void)
{
	char s[] = "Hola Mundo!";
	char c = 'Z';
	size_t n = 3;

	char str[] = "Hola Mundo!";
	char ch = 'Z';
	size_t len = 3;

	memset(s, c, n);
	ft_memset(str, ch, len);

	printf("\n\t****** MEM ******\n");
	printf("\tMEMSET\n");
	printf("Expected: %s\n", s);
	printf("FT_user_: %s\n\n", str);
}

void	memchr_test(void)
{
	char s[] = "Hello World!";
	char *chr = memchr(s, 0, 0);
	char fts[] = "Hello World!";
	char *ftchr = ft_memchr(fts, 0, 0);

	printf("Expected: %s\n", chr);
	printf("FT_user_: %s\n", ftchr);
}

void	memcmp_test(void)
{
	char s1[] = "Hola\0Mundo!";
	char s2[] = "Hola\0Mundo";
	size_t n = 5;

	int ftmcmp = ft_memcmp(s1, s2, n);
	int mcmp = memcmp(s1, s2, n);
	printf("\n\tMEMCMP\n");
	printf("Expected: %d\n", mcmp);
	printf("FT_user_: %d\n\n", ftmcmp);
}

void	bzero_test(void)
{
	char s[] = "Hola Mundo!";
	size_t n = 3;

	char str[] = "Hola Mundo!";
	size_t len = 3;

	bzero(s,  n);
	ft_bzero(str, len);

	printf("\tBZERO\n");
	printf("Expected: %s\n", s);
	printf("FT_user_: %s\n\n", str);
}

void	mem_cpy_move_test(void)
{
	char dst[] = "Hola mundo!";
	char src[] = "42!";

	char ftdst[] = "Hola mundo!";
	char ftsrc[] = "42!";

	size_t n = 3;

	memcpy(dst, src, n);
	ft_memcpy(ftdst, ftsrc, n);
	printf("\tMEMCPY\n");
	printf("Expected: %s\n", dst);
	printf("FT_user_: %s\n\n", ftdst);

	char mdst[] = "Hola mundo!";
	char msrc[] = "42!";

	char ftmdst[] = "Hola mundo!";
	char ftmsrc[] = "42!";

	size_t n2 = 3;

	memmove(mdst, msrc, n2);
	ft_memmove(ftmdst, ftmsrc, n2);
	printf("\tMEMMOVE\n");
	printf("Expected: %s\n", mdst);
	printf("FT_user_: %s\n\n", ftmdst);
}

void	calloc_test(void)
{
	printf("\n\t****** MALLOC ******\n\n");
	printf("\tCALLOC\n");
	printf("Expected: %s\n", calloc(SIZE_MAX, SIZE_MAX));
	printf("FT_user_: %s\n\n", ft_calloc(SIZE_MAX, SIZE_MAX));
}

void	strdup_test(void)
{
	printf("\tSTRDUP\n");
	printf("Expected: %s\n", strdup("Hola mundo!"));
	printf("FT_user_: %s\n\n", ft_strdup("Hola mundo!"));
}

void	substr_test(void)
{
	printf("\n\t****** ADICIONALES ******\n");
	printf("\tSUBSTR\n");
	printf("Expected: world\n");
	printf("FT_user_: %s\n\n", ft_substr("Hello world!", 6, 5));
	printf("\tSUBSTR_2\n");
	printf("%s\n\n", ft_substr("", 0, 0));
}

void	itoa_test(void)
{
	printf("\tITOA\n");
	printf("Expected: -2147483648\n");
	printf("FT_user_: %s\n\n", ft_itoa(-2147483648));
}

void	strjoin_test(void)
{
	printf("\tSTRJOIN\n");
	printf("Expected: Hello world!\n");
	printf("FT_user_: %s\n\n", ft_strjoin("Hello ", "world!"));
}

void	strtrim_test(void)
{
	printf("\tSTRTRIM\n");
	printf("Expected: Hello   world!\n");
	printf("FT_user_: %s\n\n", ft_strtrim("   Hello   world!   ", " "));
}

char	f(unsigned int i, char c)
{
	c = c + i;
	return (c);
}
void	mapi_test()
{
	char const *s = "01234";
	char *sol = ft_strmapi(s, (*f));

	printf("\tSTRMAPI\n");
	printf("%s\n\n", sol);
}

void low_case(unsigned int i, char *c)
{
	*c = tolower(*c);
}
void iteri_test()
{
	char str[] = "HELLO WORLD!";
	ft_striteri(str, low_case);
	printf("\tSTRITERI\n");
	printf("%s\n\n", str);
}

void	putnbr_test(void)
{
	printf("\tPUTNBR\n");
	ft_putnbr_fd(123245366, 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\n', 1);
}

void	putchar_test(void)
{
	printf("\tPUTCHAR\n");
	ft_putchar_fd('C', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\n', 1);
}

void	putstr_test(void)
{
	printf("\tPUTSTR\n");
	ft_putstr_fd("Hello World!", 1); //putendl
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\n', 1);
}

void	lstnew_test(void)
{
	t_list *node;
	node = ft_lstnew("Hola mundo!");
	printf("\n\t****** BONUS ******\n");
	printf("\n\tLSTNEW\n");
	printf("%s\n", node->content);
}

void	lstadd_front_test(void)
{
	t_list *node;
	t_list *head;

	head = NULL;
	node = ft_lstnew("Hola mundo");
	ft_lstadd_front(&head, node);
	node = ft_lstnew("Adios mundo");
	ft_lstadd_front(&head, node);
	node = head;
	printf("\n\tLSTADDFRONT\n");
	while (node)
	{
		printf("%s\n", node->content);
		node = node->next;
	}
}

void	lstadd_back_test(void)
{
	t_list *node;
	t_list *head;

	head = NULL;
	node = ft_lstnew("Hola mundo");
	ft_lstadd_back(&head, node);
	node = ft_lstnew("Adios mundo");
	ft_lstadd_back(&head, node);
	node = head;
	printf("\n\tLSTADDBACK\n");
	while (node)
	{
		printf("%s\n", node->content);
		node = node->next;
	}
}

void	lstsize_test(void)
{
	t_list *node;
	t_list *head;

	head = NULL;
	node = ft_lstnew("Hola mundo");
	ft_lstadd_back(&head, node);
	node = ft_lstnew("Adios mundo");
	ft_lstadd_back(&head, node);
	node = ft_lstnew("Hola 42");
	ft_lstadd_back(&head, node);
	node = head;
	printf("\n\tLSTSIZE\n");
	printf("Expected: 3\n");
	printf("FT_user_: %d\n\n", ft_lstsize(head));
}

void	lstlast_test(void)
{
	t_list *node;
	t_list *head;

	head = NULL;
	node = ft_lstnew("Hola mundo");
	ft_lstadd_back(&head, node);
	node = ft_lstnew("Adios mundo");
	ft_lstadd_back(&head, node);
	node = ft_lstnew("Hola 42");
	ft_lstadd_back(&head, node);
	node = head;
	node = ft_lstlast(head);
	printf("\n\tLSTLAST\n");
	printf("Expected: Hola 42\n");
	printf("FT_user_: %s\n\n", node->content);
}

//                      *****************************************
//             **************************************************************
//       ********************************   MAIN   ********************************
//             **************************************************************
//                      *****************************************

/*int main() // SPECIFIC
{
	return (0);
}*/

int	main() // ALL
{
	printf("\t#--------------------#\n");
	printf("\t#                    #\n");
	printf("\t#       WELCOME      #\n");
	printf("\t#  to the calbar-c's #\n");
	printf("\t#    LIBFT TESTER    #\n");
	printf("\t#                    #\n");
	printf("\t#--------------------#\n");
	// ****** CHAR ******
	ischar_test();

	//  ****** STR ******
	//	*** strlen ***
	strlen_test();
	// *** strchr, strrchr ***
	strchr_test();
	strchr_test2();
	// *** strncmp ***
	strncmp_test();
	// *** strnstr ***
	strnstr_test();
	// *** strlcpy ***
	strlcpy_test();
	// *** strlcat ***
	strlcat_test();
	// *** atoi ***
	atoi_test();

	//  ****** MEM ******	
	// *** memset ***
	memset_test();
	// *** bzero ***
	bzero_test();
	// *** memcpy, memmove ***
	mem_cpy_move_test();
	// *** memchr **
	memchr_test();
	// *** memcmp ***
	memcmp_test();

	//  ****** MALLOC ******
	// *** calloc ***
	calloc_test();
	// *** strdup ***
	strdup_test();

	//  ****** ADICIONALES ******
	// *** substr ***
	substr_test();
	// *** ft_split ***
	//split_test();
	// *** itoa ***
	itoa_test();
	// *** strjoin ***
	strjoin_test();
	// *** strtrim ***
	strtrim_test();
	// *** strmapi ***
	mapi_test();
	// *** striteri ***
	iteri_test();

	// *** putchar_fd, putstr_fd, putendl_fd, putnbr_fb ***
	putchar_test();
	putnbr_test();
	putstr_test();

	// ****** BONUS ******
	lstnew_test();
	lstadd_front_test();
	lstadd_back_test();
	lstsize_test();
	lstlast_test();

	return (0);
}

//  *** SPLIT
/*int main(int argc, char **argv)
{
	argc = 2;
	char c = 0;
	char **sol;
	size_t i;

	i = 0;
	if (argc < 2)
		return 1;
	sol = ft_split(argv[1], c);
	if (!sol)
		return 1;
	printf("\tFT_SPLIT\n");
	printf("[\"%s\"", sol[i]);
	i++;
	while (sol[i])
	{
		printf(", \"%s\"", sol[i]);
		i++;
	}
	printf("]\n\n");
}*/

// Created: 2023/09/29 17:07:30 by calbar-c 42madrid
