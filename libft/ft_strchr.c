/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 22:46:27 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/17 01:07:52 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strchr(char *s, int c)
{
	unsigned char	ch;
	int				i;

	ch = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return (s + i);
		i++;
	}
	if (ch == '\0')
		return (s + i);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[] = "spasiva";
	int	b = 'a';

	printf("%s\n", a);
	printf("%s\n", ft_strchr(a, b));
	return (0);
}*/
