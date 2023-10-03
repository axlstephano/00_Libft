/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:31:55 by axcastil          #+#    #+#             */
/*   Updated: 2023/10/03 16:49:33 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst == src || !len)
		return (dst);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
		while (len--)
				d[len] = s[len];
	return (dst);
}
/*int main()
{
    char    d[] = "hola";
    char    e[10];
    printf("%s\n", ((char *)ft_memmove(e, d, 4)));
    printf("%s", e);
    return 0;
}*/
