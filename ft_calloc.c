/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:36:13 by tbras             #+#    #+#             */
/*   Updated: 2023/11/22 17:38:04 by tbras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*pall;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	i = nmemb * size;
	pall = malloc(i);
	if (!pall)
		return (NULL);
	ft_bzero(pall, i);
	return (pall);
}
