/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:59:26 by axcastil          #+#    #+#             */
/*   Updated: 2023/10/09 14:52:47 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

static	size_t	wordlen(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (*s && *s != c)
	{
		size++;
		s++;
	}
	return (size);
}

static void	ft_free(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		free(str);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	words;
	size_t	wordsize;
	size_t	start;
	size_t	j;

	words = wordcount(s, c);
	matrix = (char **)malloc((words + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	start = 0;
	j = -1;
	while (++j < words)
	{
		while (s[start] == c)
			start++;
		wordsize = wordlen(s + start, c);
		matrix[j] = ft_substr(s, start, wordsize);
		if (!matrix[j])
			return (ft_free(*matrix), NULL);
		start += wordsize;
	}
	matrix[start] = 0;
	return (matrix);
}
//int	main()
//{
//	char string[] = "hola como2 estas dhd";
//	char sub = ' ';
//	//printf ("%d", (int)words(string, sub));
//	char **matrixx = ft_split(string, sub);
//	int i = 0;
//	while (i < wordcount(string, sub) + 1)
//	{
//		printf("%s\n", matrixx[i]);
//		i++;
//	}
//	return 0;
//}
