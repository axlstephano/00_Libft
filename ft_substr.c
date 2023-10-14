/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:09:32 by axcastil          #+#    #+#             */
/*   Updated: 2023/10/13 18:23:31 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!*s || ft_strlen(s) <= start)
		return (ft_strdup("\0"));
	if (ft_strlen(s + start) <= len)
		len = ft_strlen(s + start);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

/*int main()
{
    char *str = "cuarentaydos";
    char *sub = ft_substr(str,2, 7);
    printf("%s", sub);
    return 0;
}*/
	//char	*substring;
	//size_t	i;
	//size_t	j;

	//if (!s)
	//	return (NULL);
	//substring = (char *)malloc(len + 1);
	//if (!substring)
	//	return (NULL);
	//i = 0;
	//j = start;
	//while (j < ft_strlen(s) && i < len)
	//{
	//	substring[i] = s[j];
	//	i++;
	//	j++;
	//}
	//substring[i] = '\0';
	//return (substring);