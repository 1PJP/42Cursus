/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:50:35 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/26 20:48:08 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	t_list *chance;
	t_list *new;
	char str0[] = "primer nodo";
	char str1[] = "nuevo nodo";

// Nodo inicial de la lista
	chance = ft_lstnew(str0);
	printf("%s\n", (char *)chance->content);
	printf("%p\n\n", (void *)chance->next);

// Nuevo nodo que vamos a añadir al frente
	new = ft_lstnew(str1);

// Añadir al frente
	ft_lstadd_front(&chance, new);

// Mostrar lista después de añadir
	printf("Primer nodo-> %s\n", (char *)chance->content);
	printf("Next del primer nodo-> %p\n\n", (void *)chance->next);
	printf("Segundo nodo-> %s\n", (char *)chance->next->content);
	printf("Next del segundo nodo-> %p\n", (void *)chance->next->next);

	free(new);
	return (0);
}*/
/*aqui remplazamos el primer nodo de **lst por *new el nodo new apunta
con next el primer nodo de **lst y luego decimos que el primer nodo de 
**lst va hacer new y remplaza el que habia antes, en pocas palbras
new->next = *lst
esta diciendo la lista a new que el siguiente nodo de el va hacer
el que antes estaba primero, tengamos en cuenta que cada nodo 
almacena la direccion del siguiente, y rematamos actualizando
las lista de esta forma *lst->new, que estamos diciendo que 
el primer nodo de esta lista es new*/