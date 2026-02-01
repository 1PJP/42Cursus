/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:54:31 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/01 15:21:43 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

static void	my_bzero(void *s_m, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s_m;
	while (i < len)
	{
		ptr[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s_m;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb * size / nmemb != size)
		return (NULL);
	s_m = malloc(nmemb * size);
	if (!s_m)
		return (NULL);
	my_bzero(s_m, nmemb * size);
	return (s_m);
}
/*#include <stdio.h>
int main(void)
{
    void    *ptr1;
    void    *ptr;
    size_t  nmenb;
    size_t  size;

    // Valores que provocan overflow en ft_calloc
    nmenb = SIZE_MAX / 2 + 1;
    size  = 2;

    // Probar calloc original
    ptr1 = calloc(SIZE_MAX, size);   // overflow detectado
    if (ptr1 == NULL)
        printf("calloc original devolvió NULL (overflow controlado)\n");
    else
    {
        ((char *)ptr1)[0] = 'A';
        ((char *)ptr1)[nmenb * size] = 'B';
        printf("calloc original: %p\n", ptr1);
        free(ptr1);
    }

    // Probar mi ft_calloc
    ptr = ft_calloc(SIZE_MAX, size); // overflow detectado
    if (ptr == NULL)
        printf("ft_calloc devolvió NULL (overflow controlado)\n");
    else
    {
        ((char *)ptr)[0] = 'A';
        ((char *)ptr)[nmenb * size] = 'B';
        printf("mi ft_calloc: %p\n", ptr);
        free(ptr);
    }

    return 0;
}*/