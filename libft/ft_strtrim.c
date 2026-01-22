/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:57:31 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/22 19:25:18 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		i_s;

	if (!s1)
		return (NULL);
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i--;
	j = 0;
	while (s1[j] && ft_strchr(set, s1[j]))
		j++;
	s2 = malloc(sizeof(char const) * ((ft_strlen(s1) + 1) - i - j));
	if (!s2)
		return (NULL);
	i_s = 0;
	while (s1[j] && j <= i)
		s2[i_s++] = s1[j++];
	s2[i_s] = '\0';
	return (s2);
}
/*int	main(void)
{
	char	s[] = "abccaholaabbc";
	char	set[] = "cba";
	char	*func;

	printf("%s\n%s\n", s, set);
	func = ft_strtrim(s, set);
	printf("%s\n", func);
	free(func);
	return(0);
}*/
