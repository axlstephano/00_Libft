/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:09:32 by axcastil          #+#    #+#             */
/*   Updated: 2023/10/03 17:12:46 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen (s + start);
	substring = malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}
/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	sub = NULL;
	sub = (char *)malloc(len + 1);
	if (!s || !sub)
		return (NULL);
	i = 0;
	j = start;
	while (i < len && j < ft_strlen(s))
	{
		sub[i] = s[j];
		i++;
		j++;
	}
	sub[i] = '\0';
	return (sub);
}*/

/*int main()
{
    char *str = "cuarentaydos";
    char *sub = ft_substr(str,2, 7);
    printf("%s", sub);
    return 0;
}*/
