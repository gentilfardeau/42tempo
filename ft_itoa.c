/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:49:28 by tbras             #+#    #+#             */
/*   Updated: 2023/11/24 17:56:05 by tbras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_preview(int	n)
{
	int	i;
	
	i =1;
	while (n >= 1)
	{
		n /= 10;
		i++;
	}	
	while (n <= -1)
	{
		n *= 10; 
		i++; 
	}	
	if (n < 0)
		i++;
	return (i); 
}	

char	*ft_itoa(int n)
{
	char	*ps;
	unsigned int	rest;
	int	i;

	i = ft_preview(n); 
	ps = malloc (sizeof(char) * i);
	if (!ps)
		return (NULL); 
	rest = n;
	if(rest < 0)
	{
		ps[0] = '-';
		rest *= -1;
	} 
	while (rest >= 1)
	{
		ps[i] = rest % 10 + '0';
		rest = rest / 10;
		i--; 
	}
	return (ps); 	
}
