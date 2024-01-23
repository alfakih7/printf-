/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almohame <almohame@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 19:34:01 by almohame          #+#    #+#             */
/*   Updated: 2024/01/08 18:09:58 by almohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(long long n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		n = n * -1;
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	do_itoa(unsigned int tmp, char *str, int len)
{
	while (tmp > 0)
	{
		str[len--] = (tmp % 10) + 48;
		tmp = tmp / 10;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	tmp;
	char			*str;
	size_t			len ;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_len(n);
	if (n < 0)
	{
		tmp = n * -1;
		len++;
	}
	else
		tmp = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = 0;
	len--;
	if (n < 0)
		str[0] = '-';
	do_itoa(tmp, str, len);
	return (str);
}
