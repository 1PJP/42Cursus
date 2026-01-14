/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:21:16 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/14 19:06:42 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (src[j])
		j++;
	if (j >  0)
	{
		i = 0;
		while (i < (size - 1) && src[i])
		{
			dst[j] = src[i];
		i++;
		}
	}
	dst[j] = '\0';
	return (size);
}
int	main(void)
{
	char	des[] = "";
	char	ss[] = "spasiva";
	int	len = 8;
	char	func;
	
	printf("%s\n", ss);
	func = ft_strlcpy(des, ss, len);
	printf("%c\n", func);
	printf("%d\n", func);
	return (0);
}
