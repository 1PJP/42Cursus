/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:52:52 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/21 23:18:09 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	**ft_split(char const *s, char c)
{
	char	**str;
	int	word;
	int	i;
	int	j;

	if(!s)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{	word++;
			while (s[i] != c)
				i++;
		}
		else 
			i++;
	}
	str = malloc(sizeof(char const *) * (word + 1));
	if(!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
//sera que aqui toca hacer lo mismo de arriba y en el bucle cuando llegue 
//al delimitador generar un malloc ? preguntar manana esto, la insertidumbre 
//me consume.
	}
}