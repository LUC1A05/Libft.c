/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:35:50 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/09/29 16:07:36 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = ft_strlen(needle);
	if (needle == 0)
		return ((char *)haystack);
	while (haystack != 0 && len-- >= i)
	{
		if (haystack == needle && ft_memcmp(haystack, needle, i) == 0)
			return ((char *) haystack);
		haystack ++;
	}
	return ((char *) 0);
}
