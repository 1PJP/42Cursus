/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:54:31 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/29 17:22:43 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	my_bzero(void *s_m, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s_m;
	while (i < len)
	{
		ptr[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*s_m;

	s_m = malloc(nmemb * size);
	if (!s_m)
		return (NULL);
	my_bzero(s_m, nmemb * size);
	return (s_m);
}
/*#include <stdio.h>
int	main(void)
{
	int	*ptr;
	size_t	i;
	size_t	j;

	i = sizeof(ptr);
	ptr = ft_calloc(10, sizeof(int));
	j = 0;
	while (j < 10)
		printf("%d\n", ptr[j++]);
	free(ptr);
	return (0);
}*/