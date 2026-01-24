/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 19:21:48 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/24 19:32:25 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		write(fd, "\n", 1);
		i++;
	}
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "heloooo!";

	printf("%s\n", str);
	ft_putendl_fd(str, 1);
	return (0);
}*/