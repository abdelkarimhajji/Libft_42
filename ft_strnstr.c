/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:04:10 by ahajji            #+#    #+#             */
/*   Updated: 2022/10/18 12:35:40 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!s1 && !len)
		return (0);
	if (s2[i] == '\0' || s1 == s2)
		return ((char *)&s1[i]);
	while (i < len && s1[i])
	{
		j = i;
		k = 0;
		while (s1[j] == s2[k] && j < len && s2[k])
		{
			j++;
			k++;
		}	
		if (s2[k] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
