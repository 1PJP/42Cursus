/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:54:31 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/17 19:13:45 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	len_reserv;
	void			*save_memory;

	len_reserv = nmemb * size;
	save_memory = malloc(len_reserv);
	if (!save_memory)
		return (NULL);
	ft_bzero(save_memory, len_reserv);
	return (save_memory);
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
	return (0);
}*/