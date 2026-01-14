/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:47:49 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/14 19:22:01 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	(char *dst, const char *src, size_t size)
{
	unsigned char	d;
	unsigned char	s;
	int		i;

	d = 0;
	while (dst[d])
		d++;
	s = 0;
	while (src[s])
		s++;
	if (size < d)
	{
		
	}
}
