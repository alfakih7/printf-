/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almohame <almohame@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:31:40 by almohame          #+#    #+#             */
/*   Updated: 2024/01/08 18:23:37 by almohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	long long			result;

	result = 0;
	sign = 1;
	while (*str != '\0' && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == '-' || *str == '+')
		if (*(str++) == '-')
			sign *= -1;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		if (result > LLONG_MAX / 10 || (result == LLONG_MAX / 10
				&& (*str - '0') > LLONG_MAX % 10))
		{
			if (sign == -1)
				return (0);
			else
				return (-1);
		}
		result = result * 10 + (*(str++) - '0');
	}
	return (result * sign);
}
