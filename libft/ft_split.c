/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:52:52 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/22 19:40:06 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	**str;
	int	word;
	int	i;
	int	j;
	int	start;
	int	i2;

	if(!s)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{	
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
		else 
			i++;
	}
	str = malloc(sizeof(char const *) * (word + 1));
	if(!str)
		return (NULL);
	j = 0;
	i = 0;
	str[j] = NULL;
	while (j < word)
	{
			while (s[i] && s[i] == c)
				i++;
			start = i;
			while (s[i] && s[i] != c)
				i++;
			str[j] = malloc(i - start + 1);
			if(!str[j])
			{
				while (str[j])
				{	
					free(str[j]);
						j--;
					free(str);
				}
			}
		j++;
	}
	j = 0;
	i = 0;
	while (j < word)
	{
		i2 = 0;
		while (s[i] && s[i] == c)
				i++;
		while (s[i] && s[i] != c)
		{
			str[j][i2] = s[i];
			i2++;
			i++;
		}
		str[j][i2] = '\0';
		j++;
	}
	return (str);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	char **result;
	int i;

	result = ft_split("a a ", ' ');
	i = 0;
	while (result[i])
	{
		printf("Palabra %d: \"%s\"\n", i, result[i]);
		free(result[i]); // Liberar malloc de cada palabra
		i++;
	}
	free(result); // Liberar gran malloc
	return (0);
}