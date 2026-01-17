/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:56:24 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/17 20:04:37 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	long int	nbr_save;
	int			sig;
	int			i;

	nbr_save = 0;
	sig = 1;
	i = 0;
	while (nptr[i] >= 8 && nptr[i] <= 13 && nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr [i] == '-')
	{
		if (nptr[i] == '-')
			sig = sig * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr_save = (nbr_save * 10) + (nptr[i] - '0');
		i++;
	}
	return (nbr_save * sig);
}
/*#include <string.h>
#include <stdio.h>

//-2147483648
//+2147483647

int	main(void)
{
	char	nbr[] = "2147483647"; 
	char	nbr1[] = "-2147483648";
	int	func;
	int	funci;

	printf("%s\n%s\n", nbr, nbr1);;
	func = ft_atoi(nbr);
	funci = ft_atoi(nbr1);
	printf("%d\n", func);
	printf("%d\n", funci);
	return (0);
}*/