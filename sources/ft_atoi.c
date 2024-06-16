/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:36:17 by axcastil          #+#    #+#             */
/*   Updated: 2024/06/16 13:25:00 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{	
	int	sign;
	int	sol;

	sign = 1;
	sol = 0;
	while ((*str == 32)
		|| (*str >= 9 && *str <= 13))
		str ++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sol = sol * 10 + (*str - 48);
		str++;
	}
	return (sign * sol);
}

/*int main(void)
{
    char str[] = "   +-+-1234ajhdfh35";
    printf("%d\n", ft_atoi(str));
    return (0);
}*/