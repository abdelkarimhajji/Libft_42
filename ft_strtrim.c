/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:31:06 by ahajji            #+#    #+#             */
/*   Updated: 2022/10/17 22:46:14 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	if (!s1)
		return (0);
	j = ft_strlen(s1) - 1;
	while (s1[i] && check(s1[i], set))
		i++;
	while (s1[i] && j >= i && check(s1[j], set))
		j--;
	p = malloc((j - i) + 2);
	if (!p)
		return (0);
	while (i <= j)
		p[k++] = s1[i++];
	p[k] = '\0';
	return (p);
}
