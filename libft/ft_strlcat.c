/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:47:49 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/19 12:28:43 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;

	len_d = 0;
	while (dst[len_d] && len_d < size)
		len_d++;
	len_s = 0;
	while (src[len_s])
		len_s++;
	if (len_d == size)
		return (size + len_s);
	i = 0;
	while (src[i] && (len_d + i + 1) < size)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	d[] = "priviet";
	char	s[] = "spasiva";
	size_t	n = 12;

	printf("%s\n%s\n", d, s);
	ft_strlcat(d, s, n);
	printf("%s\n", d);
	return (0);
}*/
