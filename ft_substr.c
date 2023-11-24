/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:44:49 by tbras             #+#    #+#             */
/*   Updated: 2023/11/24 14:59:57 by tbras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i; 
	size_t	j; 
	char	*ps; 

	ps = malloc(sizeof(char) * len + 1);	
	if (!ps || start == ft_strlen(s)) 
		return (NULL); 
	i = 0; 
	j = 0;
	while (s[i] && i < len) 
	{
		if (!start || i == (size_t)start)
		{
			while (j < len && s[i + j])
			{
				ps[j] = s[i+j]; 
				j++; 
			}
		}
		i++;	
	}	
	ps[j] = '\0';	
	return (ps); 
}
