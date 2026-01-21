/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:52:52 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/21 19:15:52 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	**ft_split(char const *s, char c)
{
/*esta funcion lo que hace es dividir toda una cadena de string y hacer 
un array para cada palabra del string, ejemplo hola que tal, tiene que hacer un
array con el carac ter delimitador que, ser el char c, digamos que el cacracter
es , o  espaio, pues cuanndo encusntre el espacio o la co,a lo va adividi
en un nuevo array */
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
/*aqui generamos bucles anidados y condiciomes, en el primer while decimos que 
si la palabra existe va a esstratr en la primera condicion del if, y decimos que 
si la posicion i de la extring existe y es diferenrte al delimitador va a sumar la
palabra, el otro while es para que avance letra por letra para comprovar si es o
no  un delimitador, si es diferente avanza la posicion de i osea de la string
si no lo es se sabe y va a sumar la primera palabra del primer while */
	str = malloc(sizeof(char const *) * (word + 1));
	if(!str)
		return (NULL);
/*aqui generamos un malloc de cada palabra mas 1 para el nulo y lo blindamos 
pos si la memoria falla */
	j = 0;
	
}