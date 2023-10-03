/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:31:26 by axcastil          #+#    #+#             */
/*   Updated: 2023/09/29 19:25:09 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	if (!s)
		return (NULL);
	str = (unsigned char *)s;
	if (n > 0)
	{
		while (n--)
		{
			if (*str == (unsigned char) c)
				return ((void *)str);
			str++;
		}
	}
	return (NULL);
}
/*int main()
{
    const char *str = "Hola, mundo!";
    char target = 'm';
    size_t len = strlen(str);
    const char *result = memchr(str, target, len);
    printf("se encuentra en la posición %s .\n", result);
    return 0;
}*/
