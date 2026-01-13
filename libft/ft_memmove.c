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
	char		*des;
	const char	*sr;
	char		temp;
	size_t	i;

	des = (char *)dest;
	sr = (char *)src;
	i = 0;
	while (src[i] && i < n)
	{
		sr[i] = temp[i];
		i++;
	}
	i = 0;
	while (temp[i] && i < n)
	{
		temp[i] = des[i];
		i++;
	}
	return (des);
}
