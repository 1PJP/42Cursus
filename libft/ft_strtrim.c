/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:57:31 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/20 20:42:44 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
/*limpia solo los bordes de una cadena, quitando los caracteres que se decidan,
 * los caracteres que se decicen se hace con set
 s1 es la cadena original ejemplo 'cadena abc123abc' y con set le decimos 
 que quitamos, ejemplo 'set abc', solo tiene que mostrar por pantalla '123' 
 que va a estar almacenado es una nueva variable reservada usando malloc*/
 	char	*s2;
	size_t	i;
	size_t	j;
	size_t	si;

	si = ft_strlen(set) - 1;
	if (!s1)
		return (NULL);
	i = ft_strlen(s1) - 1;
	while ((s1[i] == set[si]) && si >= 0)
	{
		i--;
		si--;
	}
	//si = 0;
	j = 0;
	while (s1[j] == set[j])
		{
		j++;
	//	si++;
		}
	s2 = malloc(sizeof(char const) * ((ft_strlen(s1) + 1) - i + j));
	/*en esta parte lo que decimos es que reservamos memoria para la nueva 
	variable, nos reserve memoria de i + j menos la longitud total de la 
	cadena + 1 para el nulo*/
	printf("Hemos llegado al malloc\n");
	if (!s2)
		return (NULL);
	printf("Hemos pasado el malloc\n");

	si = 0;
	while (s1[j] && j <= i)
	{
		s2[si] = s1[j];
		si++;
		j++;
	}
	s2[si] = '\0';
	return (s2);
}
int	main(void)
{
	char	s[] = "abcholamundoabc";
	char	set[] = "abc";
	char	*func;

	printf("%s\n%s\n", s, set);
	func = ft_strtrim(s, set);
	printf("%s\n", func);
	free(func);
	return(0);
}
