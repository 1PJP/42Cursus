/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 12:30:41 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/23 20:44:24 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*ch;
	int	i;
	int	nbr;

	if (n == -2147483648) // max2147483647, min-2147483648
	return ("-2147483648"); 
	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		i++; // contador para el signo negativo
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++; // contador de numeros del resutado de la /
	}
	if (nbr < 10)
		i++; // cuenta el ultimo numero
		ch = malloc(i + 1);
		if(!ch)// reserva de malloc para la cadena y si falla
			return (NULL);
}
//esta funcion sirve para convertir numero en texto
//'\0' es nulo para un string
//NULL es para los punteros