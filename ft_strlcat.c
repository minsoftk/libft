/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 00:43:15 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/30 00:43:16 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t i;
	size_t destlen;
	size_t srclen;
	size_t temp_i;

	i = 0;
	temp_i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	while (dest[i])
		i++;
	while (src[temp_i] && i + temp_i + 1 < destsize)
	{
		dest[i + temp_i] = src[temp_i];
		temp_i++;
	}
	if (i < destsize)
		dest[i + temp_i] = '\0';
	return (i + srclen);
}
