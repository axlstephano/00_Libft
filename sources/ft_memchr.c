/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:31:26 by axcastil          #+#    #+#             */
/*   Updated: 2024/06/16 13:25:00 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

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
    char search = 'm';
    size_t len = strlen(str);
    char *result = memchr(str, search, len);
    printf("se encuentra en la posición: %s\n", result - str);
    return 0;
}*/
