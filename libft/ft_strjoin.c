/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:01:23 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/19 20:42:28 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
/*esta funcion lo que hace es concatenar lo de una variable a otro pero a 
 * diferencia de 'strcat' que hace lo mismo, esta funcion lo que hace es crear
 * una nueva variable con el contenido de las variables
 * mencionadas anteriormente*/
	size_t	i1;
	size_t	i2;
	char			*s3;

	if (!s1 && !s2)
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s1[i1] && s2[i2])
	{
		i1++;
		i2++;
	}
/*por que hacemos esto, mandamos a recorrer tanto s1 como s2 para saber
 * la longitd y asi reservar memoria del contenido tanto de s1 como 
 * de s2 + 1 que es para el nulo, igual toca hacer asi ya que si 
 * reservamos memria directo de s1 y s2 no son compatibles por 
 * la diferencia de variable*/
	s3 = malloc(i1 + i2 + 1);
	if (!s3)
		return (NULL);
/*reservamos memorira para la nueva variable la cual va a contener lo que 
 * esta dentro de s1 y s2, y decimos que si la memoria falla retorna Null*/
	i1 = 0;
	i2 = 0;
	while (s1[i1])
	{
		s3[i1] = s1[i1];
		i1++;
	}
/*en este while le asiganos el contenido de s1 a s3*/
	while (s2[i2])
	{
		s3[i1] = s2[i2];
		i1++;
		i2++;
	}
/*en este while asigannar el contenido de s2 sin perder lo de s1 a s3*/
	return (s3);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "hola ";
	char	str2[] = "mundo";
	char	*func;

	printf("%s\n%s\n", str1, str2);
	func = ft_strjoin(str1, str2);
	printf("%s\n", func);
	free(func);
	return (0);
}*
