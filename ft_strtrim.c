/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:46:43 by tbras             #+#    #+#             */
/*   Updated: 2023/11/17 17:47:28 by tbras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_detect(char const *s1, char const *set)
{
	size_t	i; 
	size_t	j;

	i = 0; 
	while (s1[i])
	{	
		j = 0; 
		while(set[j])
		{
			if (set[j] == s1[i])
				return (1); 
			j++; 
		}
		i++; 
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i; 
	size_t	j; 
	char	*ps; 

	i = 0; 
	
	
}
