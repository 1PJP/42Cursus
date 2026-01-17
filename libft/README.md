								Libft – Biblioteca 📚





Libft es una biblioteca personal que reimplementadno funciones básicas dellenguaje C, el objetivo es ver cómo funcionan internamente las funciones funciones descritas en esta biclioteca 


									ft_isalpha	

Comprueba si un carácter es una letra tanto mayúscula como minúscula (A–Z o a–z), el valor a retornar es:

 1 si es una letra
0 si no lo es


									Ft_isdigit

Comprueba si un carácter es un número del 0 al 9 y retorna:

1 si es un número
0 si no lo es


									ft_isalnum


Comprueba si un carácter es una letra o un número y retorna:

1 si es alfanumérico
0 si no lo es


									ft_isascii


Comprueba si un carácter pertenece al conjunto ASCII y retorna:

1 si es ASCII válido
0 si no lo es


									ft_isprint


Comprueba si un carácter es imprimible en pantalla y retorna:

1 si es visible
0 si no lo es


									ft_strlen


Calcula la longitud de una cadena de texto y retorna:

El número de caracteres de la cadena


									ft_strchr


Busca la primera aparición de un carácter en una cadena y retorna:

Un puntero a la primera coincidencia
NULL si no se encuentra


									ft_strrchr


Busca la última aparición de un carácter en una cadena y retorna:

Un puntero a la última coincidencia
NULL si no se encuentra


									ft_strncmp


Compara dos cadenas hasta un número determinado de caracteres y retorna:

0 si son iguales
Un valor positivo o negativo si son diferentes


									ft_strlcpy


Copia una cadena en otra de forma segura  y retorna:

La longitud total de la cadena original


									ft_strlcat


Concatena dos cadenas sin exceder el tamaño del buffer y retorna:

La longitud total de la cadena que intentó crear


								ft_strnstr


Busca una cadena dentro de otra, limitando la búsqueda y retorna:

Un puntero al inicio de la coincidencia
NULL si no se encuentra



							f	t_memset





Rellena un bloque de memoria con un valor específico.



Retorna:



Un puntero al bloque de memoria



								ft_bzero





Pone todos los bytes de un bloque de memoria en cero.



Retorna:



No retorna ningún valor


								ft_memcpy





Copia un bloque de memoria en otro.



Retorna:



Un puntero al destino





								ft_memmove





Copia un bloque de memoria incluso si las zonas se solapan.



Retorna:



Un puntero al destino




									ft_memchr





Busca un valor dentro de un bloque de memoria.



Retorna:



Un puntero al byte encontrado
NULL si no se encuentra






								ft_memcmp





Compara dos bloques de memoria.



Retorna:



0 si son iguales
Un valor positivo o negativo si son diferentes


							ft_toupper





Convierte una letra minúscula a mayúscula.



Retorna:



El carácter convertido
El mismo carácter si no es una letra





								ft_tolower





Convierte una letra mayúscula a minúscula.



Retorna:



El carácter convertido
El mismo carácter si no es una letra




								ft_atoi

Convierte una cadena de texto en un número enteroy retorna:

El número convertido
0 si la conversión no es posible


							Esta biblioteca sirve para:

Comprender cómo funcionan estas funcionesen C, tambien para aprender el manejo de memoria, trabajar con cadenas de texto y fortalecer la lógica en programación que si que tiene cositas
