/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:24:40 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/19 17:56:40 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int star, size_t len)
/*star es el indice de "s" desde donde empieza la subacadena , eso quiere 
decir que "s" ya tiene una cadena, len es la maxima logitud de la subcadena, el 
valor a retornar es la subcadena, pero si falla la reserva de memorra es 'NULL'
vamos a declarar una variable donde vamos a guardar la subcadena que es 'memory'
mas 2 indices 1 para la cadena original 's' y otro para la sub cadena 'memory'*/
{
	char	*memory;
	size_t	i;
	size_t	i_sub;

	if (!s)
		return (NULL);
/*si no existe la cadena original se retorna NULL*/
	memory = malloc(len + 1);
	if (!memory)
		return (NULL);
/*reservamos memoria para la subcadena y de sumamos 1 para que cuente el '\0',
 * si la memoria falla se retorna NULL*/
	i = 0;
	i_sub = 0;
	while (s[i])
		i++;
/*aqui hacemos un ft_strlen para saber la longitud de la cadena original */
	while (i_sub <= len && s[star])
	{
		memory[i_sub] = s[star];
		star++;
		i_sub ++;
/*que pasa en este while, decimos que, si el indice de la subcadena es menor al
 * len de la cadena y ademas la cadena con el indice de la subcadena existe, 
 * pues le daremos el valor a la memoria asiganada por eso memory primera 
 * posicion va ser igial igual a la cadena prinera posision de la subcadena,
 * y mandanos a iterar*/
	}
	return (memory);
/*el retorno sera la sub cadena que esta almacenada en 'memory'*/
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
