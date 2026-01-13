/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:16:48 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/13 16:57:59 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c ;
		i++;
	}
	return (s);
}
/*int	main(void)
{
	char	s[] = "ca va";

	ft_memset(s, 'j', 2);

	printf("%s", s);
	return (0);
}*/
