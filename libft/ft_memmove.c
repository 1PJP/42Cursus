/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:21:37 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/16 22:36:33 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
		ft_memcpy(dest, src, n);
	return (dest);
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	d[] = "holalla";
	char	f[] = "holalla";
	int	i = 5;

	printf("%s\n", d);
	printf("%s\n", (char *)ft_memmove(d, d + 2, i));
	memmove(f, f + 2, i);
	printf("%s\n", f);
	return (0);
}*/
