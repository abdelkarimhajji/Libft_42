/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:55:18 by ahajji            #+#    #+#             */
/*   Updated: 2022/10/17 22:45:50 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (len == 0 || start >= ft_strlen(s))
	{
		p = malloc(1);
		p[0] = '\0';
		return (p);
	}
	p = malloc(len + 1);
	if (!p)
		return (0);
	while (s[start] && j < len)
		p[j++] = s[start++];
	p[j] = '\0';
	return (p);
}
