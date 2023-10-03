/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:39:56 by axcastil          #+#    #+#             */
/*   Updated: 2023/09/29 16:55:47 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	if (!b)
		return (NULL);
	while (len--)
		*ptr++ = (unsigned char)c;
	return (b);
}
/*#include <stdio.h>
#include <string.h>
int main ()
{
    char b[] = "123456789";
    ft_memset(b, 'A', strlen(b));
    printf("%s", b);
    return 0;
}*/
