/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:36:19 by tbras             #+#    #+#             */
/*   Updated: 2023/11/23 16:19:20 by tbras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptemp;
	char	*pdest;

	i = 0;
	ptemp = (char *)src;
	pdest = (char *)dest;
	while (i < n)
	{
		pdest[i] = ptemp[i];
		i++;
	}
	return (pdest);
}
