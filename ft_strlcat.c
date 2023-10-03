/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:37:25 by axcastil          #+#    #+#             */
/*   Updated: 2023/10/01 19:53:54 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = strlen(dst);
	i = j;
	while (src[j - i] && j + 1 < dstsize)
	{	
		dst[j] = src[j - i];
		j++;
	}
	if (j < dstsize)
		dst[j] = '\0';
	return (i + strlen(src));
}

/*int main()
{
	char	s1[20] = "hola, ";
	char	s2[] = "mundo";
	ft_strlcat(s1, s2, sizeof(s1));
	printf("%lu", strlen(s1));
	return 0;
}*/
