/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almohame <almohame@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:26:44 by almohame          #+#    #+#             */
/*   Updated: 2024/01/08 19:32:09 by almohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len == 0 && haystack == NULL)
		return (0);
	if (!*needle)
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (ft_strncmp(&haystack[j], needle, i) != 0)
	{
		if (!haystack[j] || j >= (len - i))
			return (NULL);
		++j;
	}
	if (i > len)
		return (NULL);
	return ((char *)(&haystack[j]));
}
