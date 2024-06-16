/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:06:49 by axcastil          #+#    #+#             */
/*   Updated: 2024/06/16 13:25:00 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}

/*int main()
{
	char *str = "cuarenta";
	ft_putstr_fd(str, 1);
	return 0;
}*/
