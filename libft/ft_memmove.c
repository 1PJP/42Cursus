/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:21:37 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/13 19:56:23 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*des;
	const unsigned char	*sr;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	des = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (des);
}
/*int	main(void)
{
	char	d[] = "bonjour";

	ft_memmove(d + 2, d, 7);
	printf("%s\n", (char *)ft_memmove(d + 2, d, 7));
	return (0);
}*/
