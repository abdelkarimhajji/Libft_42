/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:16:56 by ahajji            #+#    #+#             */
/*   Updated: 2022/10/17 22:49:39 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	count;
	char	*p;

	if (!s1)
		return (0);
	j = 0;
	count = 0;
	p = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!p)
		return (0);
	while (count < ft_strlen(s1))
	{
		p[count] = s1[count];
		count++;
	}
	while (count < ft_strlen(s1) + ft_strlen(s2))
		p[count++] = s2[j++];
	p[count] = '\0';
	return (p);
}
