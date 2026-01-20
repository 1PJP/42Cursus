/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:24:40 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/20 13:50:11 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int star, size_t len)
{
	size_t	i;
	size_t	i_sub;
	char	*memory;

	if (!s)
		return (NULL);
	memory = malloc(len + 1);
	if (!memory)
		return (NULL);
	i = 0;
	i_sub = 0;
	while (s[i])
		i++;
	while (i_sub <= len && s[star])
	{
		memory[i_sub] = s[star];
		star++;
		i_sub ++;
	}
	memory[i_sub] = '\0';
	return (memory);
}
/*# include <stdio.h>
# include <string.h>
int	main(void)
{
	char	chain[] = "priviet";
	int	subch = 3;
	int	n = sizeof(chain);
	char	*func;

	printf("%s\n", chain);
	func = ft_substr(chain, subch, n);
	printf("%s\n", func);
	free(func);
	return (0);
}*/