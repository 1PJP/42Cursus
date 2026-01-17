/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:14:00 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/17 19:38:02 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	ptr = malloc(i + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	if (ptr[i] == '\0')
		return (ptr);
	return (ptr);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "spasiva";
	char	*func;

	printf("%s\n", str);
	func = ft_strdup(str);
	printf("%s\n", func);
	return (0);
}*/