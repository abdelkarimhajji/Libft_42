/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:37:34 by ahajji            #+#    #+#             */
/*   Updated: 2022/10/17 22:49:10 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	y;
	size_t	x;

	if (!size)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (i > size)
		return (j + size);
	x = i;
	y = 0;
	while (src[y] && i < size - 1)
	{
		dst[i] = src[y];
		y++;
		i++;
	}
	dst[i] = '\0';
	return (x + j);
}
