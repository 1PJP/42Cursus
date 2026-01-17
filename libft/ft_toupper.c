/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:16:06 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/16 22:44:17 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c -32;
	return (c);
}
/*int	main(void)
{
	char	Up = 'a';
	int	func;

	printf("%c\n", Up);
	func = ft_toupper(Up);
	printf("%c\n", func);
	return (0);
}*/
