/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:45:49 by tbras             #+#    #+#             */
/*   Updated: 2023/11/22 18:41:30 by tbras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ps;

	i = 0;
	ps = (char *)s;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return (&ps[i]);
		i++;
	}	
	if (c == 0)
		return (&ps[i]);
	return (NULL);
}
