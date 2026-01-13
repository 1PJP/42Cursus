/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:46:23 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/13 18:36:27 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*des;
	char	*sr;
	size_t	i;

	des = (char *)dest;
	sr = (char *)src;
	
	i = 0;
	if (sr[i] == '\0')
		return (des);
	while (sr[i] && i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (des);
}
int	main(void)
{
	char	dest[] = "ca va";
	char	src[] = "bien";

	ft_memcpy(dest, src, 4);
	printf("%s\n", (char *)ft_memcpy(dest, src, 5));
	printf("%s\n", (char *)memcpy(dest, src, 5));
	return (0);
}
