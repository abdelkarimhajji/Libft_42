/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:58:25 by ahajji            #+#    #+#             */
/*   Updated: 2022/10/17 22:51:56 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*b2;

	i = 0;
	b2 = (char *)b;
	while (i < len)
	{
		b2[i] = (unsigned char )c;
		i++;
	}
	return (b);
}
