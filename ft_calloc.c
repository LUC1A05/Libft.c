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

#include "libft.h"

void  *calloc(size_t count, size_t size)
{
  char  *s;

  if (!(s = malloc(count * size)))
    return (NULL);
  ft_bzero (s, count * len)
  return (s);
}
