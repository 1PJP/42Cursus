/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 16:20:22 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/25 18:52:36 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*len;
	int		i;

	i = 0;
	len = lst;
	while (len)
	{
		i++;
		len = len->next;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*list;
	t_list	*nodo1;
	t_list	*nodo2;

	list = NULL; //creamos lista vacia 

	nodo1 = ft_lstnew("hola"); //creacion  nodo1.
	nodo2 = ft_lstnew("mundo"); //creacion nodo2

	ft_lstadd_front(&list, nodo1); //agragamos nodo1 a la lista
	ft_lstadd_front(&list, nodo2); //agregamos nodo2 a la lista

	printf("%d\n", ft_lstsize(list));//printamos el size de la lista

	return (0);
}*/
/*medimos el tamano de la lista que tenemos es como un strlen
pero con listas, en el main usamos la funcion de creacion de lista 
y la de agregar nodos para asi tener un size el cual medir*/