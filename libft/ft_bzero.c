/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:30:41 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/13 13:21:39 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n != 0)
	{
		ptr[n - 1] = '\0';
		n--;
	}
}
int	main(void)
{
	char	p[] = "bonjour";
	int	i = 0;

	ft_bzero(p, 4);
	while (i < 7)
	{
		printf("%c", p[i]);
		i++;
	}
	return (0);
}
