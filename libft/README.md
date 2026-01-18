
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



									ft_memset

Rellena un bloque de memoria con un valor específico y retorna:

Un puntero al bloque de memoria



									ft_bzero

Pone todos los bytes de un bloque de memoria en ceroy retorna:

No retorna ningún valor



									ft_memcpy

Copia un bloque de memoria en otroy retorna:

Un puntero al destino



									ft_memmove

Copia un bloque de memoria incluso si las zonas se solapan y retorna:

Un puntero al destino



									ft_memchr

Busca un valor dentro de un bloque de memoria y retorna:

Un puntero al byte encontrado;
NULL si no se encuentra



									ft_memcmp

Compara dos bloques de memoria y retorna:

0 si son iguales;
Un valor positivo o negativo si son diferentes



									ft_toupper

Convierte una letra minúscula a mayúscula y retorna:

El carácter convertido;
El mismo carácter si no es una letra



									ft_tolower

Convierte una letra mayúscula a minúscula y retorna:

El carácter convertido;
El mismo carácter si no es una letra



									ft_atoi

Convierte una cadena de texto en un número enteroy retorna:

El número convertido;
0 si la conversión no es posible



									ft_calloc

Reserva un bloque de memoria para varios elementos, inicializa todos los bytes en 0 automáticamente y retorna:

Un puntero al inicio de la memoria reservada;
NULL si no pudo reservar la memoria.



									ft_strdup

Reserva memoria suficiente para una cadena, copia el contenido de la cadena original (incluido '\0') y retorna:								

Un puntero char * a la nueva cadena duplicada;
NULL si falla la reserva de memoria.





							Esta biblioteca sirve para:


Comprender cómo funcionan estas funcionesen C, tambien para aprender el manejo de memoria, trabajar con cadenas de texto y fortalecer la lógica en programación que si que tiene cositas