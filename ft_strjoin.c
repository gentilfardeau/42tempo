/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:45:29 by tbras             #+#    #+#             */
/*   Updated: 2023/11/17 17:48:18 by tbras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	ttl;
	char	*ps;

	j = i = 0; 
	ttl = ft_strlen(s1) + ft_strlen(s2); 
	ps = malloc(sizeof(char) * ttl);
	if (!ps)
		return (NULL); 
	while(i + j< ttl)
	{
		ps[i] = s1[i];
		if (i >= ft_strlen(s1))
		{
			while(s2[j])
			{
				ps[i + j] = s2[j];
				j++;
			}
		}	
		i++;
	}
	return (ps);
}
