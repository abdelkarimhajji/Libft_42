/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:22:49 by ahajji            #+#    #+#             */
/*   Updated: 2022/10/17 22:51:47 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*sr;
	char		*ds;

	sr = (const char *)src;
	ds = (char *)dst;
	if (!dst && !src)
		return (0);
	if (src < dst)
	{
		while (len--)
			ds[len] = sr[len];
	}
	else
		ds = ft_memcpy(ds, sr, len);
	return (dst);
}
