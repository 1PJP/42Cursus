# *Este proyecto ha sido creado como parte del currículo de 42 por jezambra.*
					
					
					
					# Descripcion Libft – Biblioteca 📚


Libft es una biblioteca personal que replica el funcionamiento de las funciones básicas de C, el objetivo es ver cómo funcionan internamente las funciones, funciones las cuales tienen una descripcion en este archivo, antes de empezar dejare a continuacion las instruciones para poder hacer el uso correcto.



							# instruciones


Para poder hacer la compilacion genelar ponemos por terminal "make" sin las colillas, revisamos listando los archivos con el comando "ls" y verificamos que existan tanto los .c como los .o de cada archivo, con el comando "make clean" borra todos los archivos .o que se crearon y por untimo el comando "make fclean" borra todos los archivos restantes que se hicieron con la compilacion, dejando solo los archivos .c


# INDICE
|--------|
| ft_atoi | 
| ft_itoa | 
| ft_bzero | 
| ft_calloc | 
| ft_isalnum | 
| ft_isalpha |
| ft_isascii | 
| ft_isdigit | 
| ft_isprint |
| ft_strlen | 
| ft_tolower |
| ft_toupper |
| ft_memset | 
| ft_memcpy | 
| ft_memmove |
| ft_memchr | 
| ft_memcmp | 
| ft_strdup | 
| ft_strchr | 
| ft_strrchr |
| ft_strncmp |
| ft_strlcpy |
| ft_strlcat |
| ft_strnstr |
| ft_substr | 
| ft_strjoin |
| ft_strtrim |
| ft_split | 
| ft_strmapi | 
| ft_striteri | 
| ft_putchar_fd |
| ft_putstr_fd | 
| ft_putendl_fd |
| ft_putnbr_fd |



							# ft_isalpha	

Comprueba si un carácter es una letra tanto mayúscula como minúscula (A–Z o a–z), el valor a retornar es:

1 si es una letra
0 si no lo es



							# ft_isdigit

Comprueba si un carácter es un número del 0 al 9 y retorna:

1 si es un número
0 si no lo es



							# ft_isalnum

Comprueba si un carácter es una letra o un número y retorna:

1 si es alfanumérico
0 si no lo es



							# ft_isascii

Comprueba si un carácter pertenece al conjunto ASCII y retorna:

1 si es ASCII válido
0 si no lo es



							# ft_isprint

Comprueba si un carácter es imprimible en pantalla y retorna:

1 si es visible
0 si no lo es



							# ft_strlen

Calcula la longitud de una cadena de texto y retorna:

El número de caracteres de la cadena



							# ft_strchr

Busca la primera aparición de un carácter en una cadena y retorna:

Un puntero a la primera coincidencia
NULL si no se encuentra



							# ft_strrchr

Busca la última aparición de un carácter en una cadena y retorna:

Un puntero a la última coincidencia
NULL si no se encuentra



							# ft_strncmp

Compara dos cadenas hasta un número determinado de caracteres y retorna:

0 si son iguales
Un valor positivo o negativo si son diferentes



							# ft_strlcpy

Copia una cadena en otra de forma segura  y retorna:

La longitud total de la cadena original



							# ft_strlcat

Concatena dos cadenas sin exceder el tamaño del buffer y retorna:

La longitud total de la cadena que intentó crear



							# ft_strnstr

Busca una cadena dentro de otra, limitando la búsqueda y retorna:

Un puntero al inicio de la coincidencia
NULL si no se encuentra



							# ft_memset

Rellena un bloque de memoria con un valor específico y retorna:

Un puntero al bloque de memoria



							# ft_bzero

Pone todos los bytes de un bloque de memoria en ceroy retorna:

No retorna ningún valor



							# ft_memcpy

Copia un bloque de memoria en otroy retorna:

Un puntero al destino



							# ft_memmove

Copia un bloque de memoria incluso si las zonas se solapan y retorna:

Un puntero al destino



							# ft_memchr

Busca un valor dentro de un bloque de memoria y retorna:

Un puntero al byte encontrado;
NULL si no se encuentra



							# ft_memcmp

Compara dos bloques de memoria y retorna:

0 si son iguales;
Un valor positivo o negativo si son diferentes



							# ft_toupper

Convierte una letra minúscula a mayúscula y retorna:

El carácter convertido;
El mismo carácter si no es una letra



							# ft_tolower

Convierte una letra mayúscula a minúscula y retorna:

El carácter convertido;
El mismo carácter si no es una letra



							# ft_atoi

Convierte una cadena de texto en un número enteroy retorna:

El número convertido;
0 si la conversión no es posible



							# ft_calloc

Reserva un bloque de memoria para varios elementos, inicializa todos los bytes en 0 automáticamente y retorna:

Un puntero al inicio de la memoria reservada;
NULL si no pudo reservar la memoria.



							# ft_strdup

Reserva memoria suficiente para una cadena, copia el contenido de la cadena original (incluido '\0') y retorna:								

Un puntero char * a la nueva cadena duplicada;
NULL si falla la reserva de memoria.



							# ft_substr

Reserva memoria y devuelve una subcadena de caracteres de la cadena principal, la subcadena comienza en el índice ‘start’ y tieneuna longitud máxima ‘len’ y retorna:

La subcadena de caracteres resultante.
NULL si falla la reserva de memoria.



							# ft_strjoin

Reserva memoria y devuelve una nueva cadena de caracteres, formada por la concatenación de ‘s1’ y ‘s2’, es muy similar a ft_strcat pero la diferencia es que guarda el resultado de las 2 varialbles 's1' y 's2' en una nueva variable la cual llame 's3' y retorna:

La nueva cadena de caracteres en mi caso 's3;
NULL si falla la reserva de memoria.



							# ft_striteri

Aplica una función a cada carácter de una cadena, modificando directamente la cadena original, permite transformar o alterar los caracteres según su posición y retorna:

la misma cadena con las modificaciones hechas.



							# ft_strmapi

Crea una nueva cadena aplicando una función a cada carácter de la cadena original, la nueva cadena contine los cambios de manera, sin modificar la original y retorna:

Nueva cadena con los cambios.



							# ft_putchar_fd	
Escribe un solo carácter en un file descriptor, permitiendo enviar datos a la pantalla, a un archivo o al flujo de error. Es útil para imprimir de manera controlada cada carácter individualmente no retorna nada.



							# ft_putstr_fd

Escribe una cadena completa en un file descriptor, permite imprimir texto en pantalla, archivos o cualquier otro flujo, sin añadir automáticamente un salto de línea, no retorna nada.



							# ft_putendl_fd

Similar a ft_putstr_fd, pero añade un salto de línea al final de la cadena, muy útil para mostrar mensajes o resultados línea por línea no retorna nada.



							# ft_putnbr_fd

Convierte un número entero en caracteres ASCII y los escribe en un file descriptor, Maneja números positivos y negativos, e incluso el límite mínimo y maximo de un entero, no retorna nada




					# Esta biblioteca sirve para:


Comprender cómo funcionan estas funcionesen C, tambien para aprender el manejo de memoria, trabajar con cadenas de texto y fortalecer la lógica de programación


					# Recursos


la mayor parte de esta informacion se obtuvo en el campus de 42Madrid gracias al apoyo y ayuda de los estudiantes con el "Peer to Peer", tambien en foros de internet y en los manuales de linux.