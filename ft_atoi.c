/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-rio <ldel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:08:48 by ldel-rio          #+#    #+#             */
/*   Updated: 2023/09/29 16:15:45 by ldel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	ret;
	int	j;

	i = 0;
	ret = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			i++;
			j++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			ret = ret * 10 + (str[i] - '0');
			i++;
		}
		if (j % 2 == 1)
			ret *= -1;
		return (ret);
	}
	return ('0');
}
