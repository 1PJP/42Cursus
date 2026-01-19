/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:41:58 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/19 12:28:50 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const unsigned char	*str;
	const unsigned char	*to_find;
	size_t				s;
	size_t				t;

	str = (const unsigned char *)big;
	to_find = (const unsigned char *)little;
	s = 0;
	t = 0;
	if (!to_find[t])
		return ((char *)str);
	while (str[s] && s < len)
	{
		while (to_find[t] && to_find[t] == str[s + t] && s + t < len)
			t++;
		if (!to_find[t])
			return ((char *)str + s);
		s++;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char	s1[] = "hola que tal como vas";
	char	s2[] = "tal";
	char	s3[] = "frere";
	size_t	n = sizeof(s1);

	printf("%s\n%s\n", s1, s2);
	printf("%s\n", ft_strnstr(s1, s2, n)); 
	printf("%s\n", s3);
	printf("%s\n", ft_strnstr(s1, s3, n));
	return (0);
}*/