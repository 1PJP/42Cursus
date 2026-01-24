/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 18:54:58 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/24 19:07:52 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int	main(void)
{
	ft_putchar_fd('J', 1);
	ft_putchar_fd('E', 1);
	ft_putchar_fd('A', 1);
	ft_putchar_fd('N', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/