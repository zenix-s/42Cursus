// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   libft.h                                            :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/01/11 12:54:42 by serferna          #+#    #+#             */
// /*   Updated: 2024/01/23 17:25:30 by serferna         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #ifndef LIBFT_H
// # define LIBFT_H

// # include <limits.h>
// // # include <stdio.h>
// # include <stdlib.h>
// // # include <string.h>
// # include <unistd.h>

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

// /**
//  * Comprueba si un caracter es alfanumerico
//  * @param chr caracter a comprobar
//  * @return 1 si es alfanumerico, 0 si no lo es
//  */
// int					ft_isalpha(int chr);

// /**
//  * Comprueba si un caracter es numerico
//  * @param chr caracter a comprobar
//  * @return 1 si es numerico, 0 si no lo es
//  */
// int					ft_isdigit(int chr);

// /**
//  * Comprueba si un caracter es alfanumerico
//  * @param chr caracter a comprobar
//  * @return 1 si es alfanumerico, 0 si no lo es
//  */
// int					ft_isalnum(int chr);

// /**
//  * Comprueba si un caracter es imprimible
//  * @param chr caracter a comprobar
//  * @return 1 si es imprimible, 0 si no lo es
//  */
// int					ft_isascii(int chr);

// /**
//  * Comprueba si un caracter es imprimible
//  * @param chr caracter a comprobar
//  * @return 1 si es imprimible, 0 si no lo es
//  */
// int					ft_isprint(int chr);

// /**
//  * Convierte un caracter a mayusculas
//  * @param chr caracter a convertir
//  * @return caracter convertido
//  */
// int					ft_toupper(int chr);

// /**
//  * Convierte un caracter a minusculas
//  * @param chr caracter a convertir
//  * @return caracter convertido
//  */
// int					ft_tolower(int chr);

// /**
//  * Calcula la longitud de una cadena
//  * @param str cadena a calcular
//  * @return longitud de la cadena
//  */
// size_t				ft_strlen(const char *str);

// /**
//  * strchr
//  * Busca un caracter en una cadena
//  * @param str Cadena en la que buscar.
//  * @param chr Caracter a buscar.
//  * @return Retorna un puntero a la primera aparición del carácter en la cadena.
//  * Si no se encuentra el carácter se devuelve NULL
//  */
// char				*ft_strchr(const char *str, int chr);

// /**
//  * strrchr
//  * Busca un caracter en una cadena empezando por el final
//  * @param str Cadena en la que buscar.
//  * @param chr Caracter a buscar.
//  * @return Retorna un puntero a la primera aparición del carácter en la cadena.
//  * Si no se encuentra el carácter se devuelve NULL
//  */
// char				*ft_strrchr(const char *str, int chr);

// /**
//  * Compara dos cadenas
//  * @param str1 cadena 1
//  * @param str2 cadena 2
//  * @param len numero de caracteres a comparar
//  * @return 0 si son iguales, <0 si str1 es menor que str2,
//  * >0 si str1 es mayor que str2
//  */
// int					ft_strncmp(const char *str1, const char *str2, size_t len);

// /**
//  * Strnstr
//  * Encuentra la primera aparición de la subcadena to_find en la cadena str.
//  * @param str Cadena en la que buscar.
//  * @param str_to_find Subcadena a buscar.
//  * @param len Numero de caracteres a comparar
//  * @return Retorna la posición de la primera aparición de str_to_find en str.
//  * Si no se encuentra la subcadena se devuelve NULL
//  */
// char				*ft_strnstr(const char *str, const char *str_to_find,
// 						size_t len);

// /**
//  * Copia una cadena en otra
//  * @param dst cadena destino
//  * @param src cadena origen
//  * @param len numero de caracteres a copiar
//  * @return longitud de la cadena copiada
//  */
// size_t				ft_strlcpy(char *dst, const char *src, size_t len);

// /**
//  * Concatena dos cadenas
//  * @param dst cadena destino
//  * @param src cadena origen
//  * @param len numero de caracteres a copiar
//  * @return longitud de la cadena copiada
//  */
// size_t				ft_strlcat(char *dst, const char *src, size_t len);

// /**
//  * strdup
//  * Reserva memoria con malloc y copia una cadena en ella
//  * @param str cadena a copiar
//  * @return puntero a la cadena copiada
//  */
// char				*ft_strdup(const char *str);

// /**
//  * Memset
//  * Establece los primeros len bytes del área de memoria
//  * apuntada por ptr al valor chr.
//  * @param ptr Puntero al área de memoria a establecer.
//  * @param chr Valor a establecer.
//  * @param len Número de bytes a establecer.
//  * @return Puntero a la cadena establecida
//  */
// void				*ft_memset(void *ptr, int chr, size_t len);

// /**
//  * Bzero
//  * Establece los primeros len bytes del área de memoria
//  * apuntada por ptr al valor 0.
//  * @param ptr Puntero al área de memoria a establecer.
//  * @param len Número de bytes a establecer.
//  */
// void				ft_bzero(void *ptr, size_t len);

// /**
//  * Memcpy
//  * Copia len bytes de src a dest
//  * @param dest cadena destino
//  * @param src cadena origen
//  * @param len numero de bytes a copiar
//  * @return puntero a la cadena destino
//  */
// void				*ft_memcpy(void *dest, const void *src, size_t len);

// /**
//  * Memmove
//  * Copia len bytes de src a dest
//  * Si las cadenas se solapan, el comportamiento es indefinido
//  * @param dest cadena destino
//  * @param src cadena origen
//  * @param len numero de bytes a copiar
//  * @return puntero a la cadena destino
//  */
// void				*ft_memmove(void *dest, const void *src, size_t len);

// void				*ft_memchr(const void *ptr, int chr, size_t len);

// int					ft_memcmp(const void *ptr1, const void *ptr2, size_t len);

// /**
//  * Convierte una cadena str a un entero
//  * Puede contener caracteres del isspace antes del numero
//  * y un signo + o - antes del numero
//  * Si el numero es mayor que el maximo entero devuelve el maximo entero
//  * @param str cadena a convertir
//  * @return entero convertido
//  *
//  */
// int					ft_atoi(const char *str);

// /**
//  * Reserva memoria con malloc y la inicializa a 0
//  * @param count numero de elementos
//  * @param len tamaño de cada elemento
//  * @return puntero a la memoria reservada
//  */
// void				*ft_calloc(size_t count, size_t len);

// /**
//  * Reserva (con malloc(3)) y devuelve una substring de la string ’s’.

// 	* La substring empieza desde ’start’ y tiene una longitud máxima ’len’
//  * @param str
//  * @param start
//  * @param len
//  * @return
//  */
// char				*ft_substr(const char *str, unsigned int start, size_t len);

// /**
//  * Reserva (con malloc(3)) y devuelve una nueva string,
//  * formada por la concatenación de ’s1’ y ’s2’.
//  * @param s1 Primera cadena
//  * @param s2 Segunda cadena
//  * @return Cadena concatenada
//  */
// char				*ft_strjoin(const char *s1, const char *s2);

// /**
//  * Elimina todos los caracteres de la string ’set’
//  * desde el principio y desde el final de ’s1’,
//  * hasta encontrar un caracter no perteneciente a ’set’.
//  * @param str Cadena a recortar
//  * @param set Caracteres a recortar
//  * @return String resultante se devuelve con una reserva de malloc(3)
//  */
// char				*ft_strtrim(const char *str, const char *set);

// /**
//  * ft_split
//  * Reserva (con malloc(3)) y devuelve un array de strings
//  * obtenidas al separar ’str’ mediante el carácter ’chr’,
//  * El array debe terminar con NULL.
//  * @param str Cadena a separar
//  * @param chr Caracter separador
//  * @return Array de strings resultante
//  *
//  */
// char				**ft_split(char const *str, char chr);

// /**
//  * ft_itoa
//  * Convierte un entero a una cadena y reserva memoria con malloc(3)
//  * Se contemplan los numeros negativos
//  * @param num Entero a convertir
//  * @return Cadena resultante
//  */
// char				*ft_itoa(int num);

// /**
//  * ft_strmapi
//  * Aplica la función ’f’ a cada caracter de la cadena ’str’
//  * para crear una nueva cadena (con malloc(3))
//  * que resulte de las aplicaciones sucesivas de ’f’.
//  * @param str Cadena sobre la que aplicar la función
//  * @param f Función a aplicar
//  * @return Cadena resultante
// */
// char				*ft_strmapi(const char *str, char (*f)(unsigned int, char));

// /**
//  * ft_striteri
//  * Aplica la función ’f’ a cada caracter de la cadena ’str’
//  * @param str Cadena sobre la que aplicar la función
//  * @param f Función a aplicar
// */
// void				ft_striteri(char *str, void (*f)(unsigned int, char *));

// void				ft_putchar_fd(char chr, int fd);

// void				ft_putstr_fd(char *str, int fd);

// void				ft_putendl_fd(char *str, int fd);

// void				ft_putnbr_fd(int num, int fd);

// /**
//  * Crea un nuevo nodo utilizando malloc(3).
//  * La variable miembro ’content’ se inicializa con el
//  * contenido del parámetro ’content’. La variable ’next’, con NULL
//  * @param content Contenido del nodo nuevo
//  * @return Nuevo nodo
//  */
// t_list				*ft_lstnew(void *content);

// /**
//  * Añade el nodo ’new’ al principio de la lista ’lst’
//  * @param lst  dirección de un puntero al primer nodo de una lista.
//  * @param new  un puntero al nodo que añadir al principio de la lista.
//  */
// void				ft_lstadd_front(t_list **lst, t_list *new);

// /**
//  * Cuenta el número de nodos de una lista.
//  * @param lst  inicio de la lista.
//  * @return número de nodos.
//  */
// int					ft_lstsize(t_list *lst);

// /**
//  * ft_lstlast
//  * Devuelve el último nodo de la lista.
//  * @param lst  inicio de la lista.
//  * @return último nodo de la lista.
// */
// t_list				*ft_lstlast(t_list *lst);

// /**
//  * ft_lstadd_back
//  * Añade el nodo ’new’ al final de la lista.
//  * @param lst  dirección de un puntero al primer nodo de una lista.
//  * @param new  un puntero al nodo que añadir al final de la lista.
// */
// void				ft_lstadd_back(t_list **lst, t_list *new);

// /**
//  * ft_lstdelone
//  * Libera la memoria del nodo pasado como argumento
//  * utilizando la función ’del’ y después libera el nodo.
//  * @param lst  dirección de un puntero al nodo que hay que liberar.
//  * @param del  función que permite liberar el contenido
// */
// void				ft_lstdelone(t_list *lst, void (*del)(void *));

// /**
//  * ft_lstclear
//  * Libera la memoria de ’lst’ y de todos sus nodos.
//  * @param lst  dirección de un puntero al primer nodo de la lista a liberar.
//  * @param del  función que permite liberar el contenido de un nodo.
// */
// void				ft_lstclear(t_list **lst, void (*del)(void *));

// /**
//  * ft_lstiter
//  * Itera sobre la lista ’lst’ y aplica la función ’f’
//  * @param lst  dirección de un puntero al primer nodo de una lista.
//  * @param f  dirección de la función que hay que aplicar.
// */
// void				ft_lstiter(t_list *lst, void (*f)(void *));

// /**
//  * ft_lstmap
//  * Itera sobre la lista ’lst’ y aplica la función ’f’ a los nodos.
//  * Crea una nueva lista con el resultado.
//  * @param lst  dirección de un puntero al primer nodo de una lista.
//  * @param f  función que hay que aplicar.
//  * @return nueva lista.
// */
// t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
// 						void (*del)(void *));

// #endif

#include "../libft.h"
#include <stdio.h>

void ft_isalpha_tester()
{
	printf("ft_isalpha_tester\n");
	printf("ft_isalpha('a') = %d %s\n",ft_isalpha('a') , ft_isalpha('a') == 1 ? "✅" : "❌");
	printf("ft_isalpha('A') = %d %s\n",ft_isalpha('A') , ft_isalpha('A') == 1 ? "✅" : "❌");
	printf("ft_isalpha('z') = %d %s\n",ft_isalpha('z') , ft_isalpha('z') == 1 ? "✅" : "❌");
	printf("ft_isalpha('Z') = %d %s\n",ft_isalpha('Z') , ft_isalpha('Z') == 1 ? "✅" : "❌");
	printf("ft_isalpha('1') = %d %s\n",ft_isalpha('1') , ft_isalpha('1') == 0 ? "✅" : "❌");
	printf("ft_isalpha('0') = %d %s\n",ft_isalpha('0') , ft_isalpha('0') == 0 ? "✅" : "❌");
	printf("ft_isalpha(' ') = %d %s\n",ft_isalpha(' ') , ft_isalpha(' ') == 0 ? "✅" : "❌");
	printf("ft_isalpha('!') = %d %s\n",ft_isalpha('!') , ft_isalpha('!') == 0 ? "✅" : "❌");
	printf("ft_isalpha('[') = %d %s\n",ft_isalpha('[') , ft_isalpha('[') == 0 ? "✅" : "❌");
	printf("ft_isalpha(']') = %d %s\n",ft_isalpha(']') , ft_isalpha(']') == 0 ? "✅" : "❌");
	printf("ft_isalpha(365) = %d %s\n",ft_isalpha(365) , ft_isalpha(365) == 0 ? "✅" : "❌");
	printf("ft_isalpha(0) = %d %s\n",ft_isalpha(0) , ft_isalpha(0) == 0 ? "✅" : "❌");
}

void ft_isdigit_tester()
{
	printf("ft_isdigit_tester\n");
	printf("ft_isdigit('a') = %d %s\n",ft_isdigit('a') , ft_isdigit('a') == 0 ? "✅" : "❌");
	printf("ft_isdigit('A') = %d %s\n",ft_isdigit('A') , ft_isdigit('A') == 0 ? "✅" : "❌");
	printf("ft_isdigit('z') = %d %s\n",ft_isdigit('z') , ft_isdigit('z') == 0 ? "✅" : "❌");
	printf("ft_isdigit('Z') = %d %s\n",ft_isdigit('Z') , ft_isdigit('Z') == 0 ? "✅" : "❌");
	printf("ft_isdigit('1') = %d %s\n",ft_isdigit('1') , ft_isdigit('1') == 1 ? "✅" : "❌");
	printf("ft_isdigit('0') = %d %s\n",ft_isdigit('0') , ft_isdigit('0') == 1 ? "✅" : "❌");
	printf("ft_isdigit('8') = %d %s\n",ft_isdigit('8') , ft_isdigit('8') == 1 ? "✅" : "❌");
	printf("ft_isdigit(' ') = %d %s\n",ft_isdigit(' ') , ft_isdigit(' ') == 0 ? "✅" : "❌");
	printf("ft_isdigit('!') = %d %s\n",ft_isdigit('!') , ft_isdigit('!') == 0 ? "✅" : "❌");
	printf("ft_isdigit('[') = %d %s\n",ft_isdigit('[') , ft_isdigit('[') == 0 ? "✅" : "❌");
	printf("ft_isdigit(']') = %d %s\n",ft_isdigit(']') , ft_isdigit(']') == 0 ? "✅" : "❌");
	printf("ft_isdigit(365) = %d %s\n",ft_isdigit(365) , ft_isdigit(365) == 0 ? "✅" : "❌");
	printf("ft_isdigit(0) = %d %s\n",ft_isdigit(0) , ft_isdigit(0) == 0 ? "✅" : "❌");
}

void ft_isalnum_tester()
{
	printf("ft_isalnum_tester\n");
	printf("ft_isalnum('a') = %d %s\n",ft_isalnum('a') , ft_isalnum('a') == 1 ? "✅" : "❌");
	printf("ft_isalnum('A') = %d %s\n",ft_isalnum('A') , ft_isalnum('A') == 1 ? "✅" : "❌");
	printf("ft_isalnum('z') = %d %s\n",ft_isalnum('z') , ft_isalnum('z') == 1 ? "✅" : "❌");
	printf("ft_isalnum('Z') = %d %s\n",ft_isalnum('Z') , ft_isalnum('Z') == 1 ? "✅" : "❌");
	printf("ft_isalnum('1') = %d %s\n",ft_isalnum('1') , ft_isalnum('1') == 1 ? "✅" : "❌");
	printf("ft_isalnum('0') = %d %s\n",ft_isalnum('0') , ft_isalnum('0') == 1 ? "✅" : "❌");
	printf("ft_isalnum('8') = %d %s\n",ft_isalnum('8') , ft_isalnum('8') == 1 ? "✅" : "❌");
	printf("ft_isalnum(' ') = %d %s\n",ft_isalnum(' ') , ft_isalnum(' ') == 0 ? "✅" : "❌");
	printf("ft_isalnum('!') = %d %s\n",ft_isalnum('!') , ft_isalnum('!') == 0 ? "✅" : "❌");
	printf("ft_isalnum('[') = %d %s\n",ft_isalnum('[') , ft_isalnum('[') == 0 ? "✅" : "❌");
	printf("ft_isalnum(']') = %d %s\n",ft_isalnum(']') , ft_isalnum(']') == 0 ? "✅" : "❌");
	printf("ft_isalnum(365) = %d %s\n",ft_isalnum(365) , ft_isalnum(365) == 0 ? "✅" : "❌");
	printf("ft_isalnum(0) = %d %s\n",ft_isalnum(0) , ft_isalnum(0) == 0 ? "✅" : "❌");
}

void ft_isascii_tester()
{
	printf("ft_isascii_tester\n");
	printf("ft_isascii('a') = %d %s\n",ft_isascii('a') , ft_isascii('a') == 1 ? "✅" : "❌");
	printf("ft_isascii('A') = %d %s\n",ft_isascii('A') , ft_isascii('A') == 1 ? "✅" : "❌");
	printf("ft_isascii('z') = %d %s\n",ft_isascii('z') , ft_isascii('z') == 1 ? "✅" : "❌");
	printf("ft_isascii('Z') = %d %s\n",ft_isascii('Z') , ft_isascii('Z') == 1 ? "✅" : "❌");
	printf("ft_isascii('1') = %d %s\n",ft_isascii('1') , ft_isascii('1') == 1 ? "✅" : "❌");
	printf("ft_isascii('0') = %d %s\n",ft_isascii('0') , ft_isascii('0') == 1 ? "✅" : "❌");
	printf("ft_isascii('8') = %d %s\n",ft_isascii('8') , ft_isascii('8') == 1 ? "✅" : "❌");
	printf("ft_isascii(' ') = %d %s\n",ft_isascii(' ') , ft_isascii(' ') == 1 ? "✅" : "❌");
	printf("ft_isascii('!') = %d %s\n",ft_isascii('!') , ft_isascii('!') == 1 ? "✅" : "❌");
	printf("ft_isascii('[') = %d %s\n",ft_isascii('[') , ft_isascii('[') == 1 ? "✅" : "❌");
	printf("ft_isascii(']') = %d %s\n",ft_isascii(']') , ft_isascii(']') == 1 ? "✅" : "❌");
	printf("ft_isascii(365) = %d %s\n",ft_isascii(365) , ft_isascii(365) == 0 ? "✅" : "❌");
	printf("ft_isascii(0) = %d %s\n",ft_isascii(0) , ft_isascii(0) == 1 ? "✅" : "❌");
}

void ft_isprint_tester()
{
	printf("ft_isprint_tester\n");
	printf("ft_isprint('a') = %d %s\n",ft_isprint('a') , ft_isprint('a') == 1 ? "✅" : "❌");
	printf("ft_isprint('A') = %d %s\n",ft_isprint('A') , ft_isprint('A') == 1 ? "✅" : "❌");
	printf("ft_isprint('z') = %d %s\n",ft_isprint('z') , ft_isprint('z') == 1 ? "✅" : "❌");
	printf("ft_isprint('Z') = %d %s\n",ft_isprint('Z') , ft_isprint('Z') == 1 ? "✅" : "❌");
	printf("ft_isprint('1') = %d %s\n",ft_isprint('1') , ft_isprint('1') == 1 ? "✅" : "❌");
	printf("ft_isprint('0') = %d %s\n",ft_isprint('0') , ft_isprint('0') == 1 ? "✅" : "❌");
	printf("ft_isprint('8') = %d %s\n",ft_isprint('8') , ft_isprint('8') == 1 ? "✅" : "❌");
	printf("ft_isprint(' ') = %d %s\n",ft_isprint(' ') , ft_isprint(' ') == 1 ? "✅" : "❌");
	printf("ft_isprint('!') = %d %s\n",ft_isprint('!') , ft_isprint('!') == 1 ? "✅" : "❌");
	printf("ft_isprint('[') = %d %s\n",ft_isprint('[') , ft_isprint('[') == 1 ? "✅" : "❌");
	printf("ft_isprint(']') = %d %s\n",ft_isprint(']') , ft_isprint(']') == 1 ? "✅" : "❌");
	printf("ft_isprint(365) = %d %s\n",ft_isprint(365) , ft_isprint(365) == 0 ? "✅" : "❌");
	printf("ft_isprint(0) = %d %s\n",ft_isprint(0) , ft_isprint(0) == 0 ? "✅" : "❌");
}

void ft_strlen_tester()
{
	printf("ft_strlen_tester\n");
	printf("ft_strlen('') = %zu %s\n",ft_strlen("") , ft_strlen("") == 0 ? "✅" : "❌");
	printf("ft_strlen('a') = %zu %s\n",ft_strlen("a") , ft_strlen("a") == 1 ? "✅" : "❌");
	printf("ft_strlen('ab') = %zu %s\n",ft_strlen("ab") , ft_strlen("ab") == 2 ? "✅" : "❌");
	printf("ft_strlen('abc') = %zu %s\n",ft_strlen("abc") , ft_strlen("abc") == 3 ? "✅" : "❌");
	printf("ft_strlen('abcd') = %zu %s\n",ft_strlen("abcd") , ft_strlen("abcd") == 4 ? "✅" : "❌");
	printf("ft_strlen('abcde') = %zu %s\n",ft_strlen("abcde") , ft_strlen("abcde") == 5 ? "✅" : "❌");
	printf("ft_strlen('abcdef') = %zu %s\n",ft_strlen("abcdef") , ft_strlen("abcdef") == 6 ? "✅" : "❌");
	printf("ft_strlen('abcdefg') = %zu %s\n",ft_strlen("abcdefg") , ft_strlen("abcdefg") == 7 ? "✅" : "❌");
	printf("ft_strlen('abcdefgh') = %zu %s\n",ft_strlen("abcdefgh") , ft_strlen("abcdefgh") == 8 ? "✅" : "❌");
	printf("ft_strlen('abcdefghi') = %zu %s\n",ft_strlen("abcdefghi") , ft_strlen("abcdefghi") == 9 ? "✅" : "❌");
	printf("ft_strlen('abcdefghij') = %zu %s\n",ft_strlen("abcdefghij") , ft_strlen("abcdefghij") == 10 ? "✅" : "❌");
	printf("ft_strlen('abcdefghijk') = %zu %s\n",ft_strlen("abcdefghijk") , ft_strlen("abcdefghijk") == 11 ? "✅" : "❌");
	printf("ft_strlen('Hola mundo') = %zu %s\n",ft_strlen("Hola mundo") , ft_strlen("Hola mundo") == 10 ? "✅" : "❌");
}

void ft_toupper_tester()
{
	printf("ft_toupper_tester\n");
	printf("ft_toupper('a') = %d %s\n",ft_toupper('a') , ft_toupper('a') == 'A' ? "✅" : "❌");
	printf("ft_toupper('A') = %d %s\n",ft_toupper('A') , ft_toupper('A') == 'A' ? "✅" : "❌");
	printf("ft_toupper('z') = %d %s\n",ft_toupper('z') , ft_toupper('z') == 'Z' ? "✅" : "❌");
	printf("ft_toupper('Z') = %d %s\n",ft_toupper('Z') , ft_toupper('Z') == 'Z' ? "✅" : "❌");
	printf("ft_toupper('1') = %d %s\n",ft_toupper('1') , ft_toupper('1') == '1' ? "✅" : "❌");
	printf("ft_toupper('0') = %d %s\n",ft_toupper('0') , ft_toupper('0') == '0' ? "✅" : "❌");
	printf("ft_toupper('8') = %d %s\n",ft_toupper('8') , ft_toupper('8') == '8' ? "✅" : "❌");
	printf("ft_toupper(' ') = %d %s\n",ft_toupper(' ') , ft_toupper(' ') == ' ' ? "✅" : "❌");
	printf("ft_toupper('!') = %d %s\n",ft_toupper('!') , ft_toupper('!') == '!' ? "✅" : "❌");
	printf("ft_toupper('[') = %d %s\n",ft_toupper('[') , ft_toupper('[') == '[' ? "✅" : "❌");
	printf("ft_toupper(']') = %d %s\n",ft_toupper(']') , ft_toupper(']') == ']' ? "✅" : "❌");
}

void ft_tolower_tester()
{
	printf("ft_tolower_tester\n");
	printf("ft_tolower('a') = %d %s\n",ft_tolower('a') , ft_tolower('a') == 'a' ? "✅" : "❌");
	printf("ft_tolower('A') = %d %s\n",ft_tolower('A') , ft_tolower('A') == 'a' ? "✅" : "❌");
	printf("ft_tolower('z') = %d %s\n",ft_tolower('z') , ft_tolower('z') == 'z' ? "✅" : "❌");
	printf("ft_tolower('Z') = %d %s\n",ft_tolower('Z') , ft_tolower('Z') == 'z' ? "✅" : "❌");
	printf("ft_tolower('1') = %d %s\n",ft_tolower('1') , ft_tolower('1') == '1' ? "✅" : "❌");
	printf("ft_tolower('0') = %d %s\n",ft_tolower('0') , ft_tolower('0') == '0' ? "✅" : "❌");
	printf("ft_tolower('8') = %d %s\n",ft_tolower('8') , ft_tolower('8') == '8' ? "✅" : "❌");
	printf("ft_tolower(' ') = %d %s\n",ft_tolower(' ') , ft_tolower(' ') == ' ' ? "✅" : "❌");
	printf("ft_tolower('!') = %d %s\n",ft_tolower('!') , ft_tolower('!') == '!' ? "✅" : "❌");
	printf("ft_tolower('[') = %d %s\n",ft_tolower('[') , ft_tolower('[') == '[' ? "✅" : "❌");
	printf("ft_tolower(']') = %d %s\n",ft_tolower(']') , ft_tolower(']') == ']' ? "✅" : "❌");
	printf("ft_tolower(365) = %d %s\n",ft_tolower(365) , ft_tolower(365) == 365 ? "✅" : "❌");
	printf("ft_tolower(0) = %d %s\n",ft_tolower(0) , ft_tolower(0) == 0 ? "✅" : "❌");
}

void ft_strncmp_tester()
{
    printf("ft_strncmp_tester\n");

    printf("ft_strncmp('','a',1) = %d %s\n", ft_strncmp("", "a", 1), ft_strncmp("", "a", 1) == -97 ? "✅" : "❌");
    printf("ft_strncmp('a','a',1) = %d %s\n", ft_strncmp("a", "a", 1), ft_strncmp("a", "a", 1) == 0 ? "✅" : "❌");
    printf("ft_strncmp('ab','a',1) = %d %s\n", ft_strncmp("ab", "ab", 1), ft_strncmp("ab", "ab", 1) == 0 ? "✅" : "❌");
    printf("ft_strncmp('ab','b',1) = %d %s\n", ft_strncmp("ab", "bb", 1), ft_strncmp("ab", "bb", 1) == -1 ? "✅" : "❌");
    printf("ft_strncmp('abc','a',2) = %d %s\n", ft_strncmp("abc", "a", 2), ft_strncmp("abc", "ab", 2) == 0 ? "✅" : "❌");
    printf("ft_strncmp('abc','b',2) = %d %s\n", ft_strncmp("abc", "b", 2), ft_strncmp("abc", "b", 2) == -1 ? "✅" : "❌");
    printf("ft_strncmp('abc','c',2) = %d %s\n", ft_strncmp("abc", "c", 2), ft_strncmp("abc", "c", 2) == -2 ? "✅" : "❌");
    printf("ft_strncmp('abc','d',2) = %d %s\n", ft_strncmp("abc", "d", 2), ft_strncmp("abc", "d", 2) == -3 ? "✅" : "❌");
    printf("ft_strncmp('abc',' ',2) = %d %s\n", ft_strncmp("abc", " ", 2), ft_strncmp("abc", " ", 2) == 65 ? "✅" : "❌");
		printf("ft_strncmp('abc','!',2) = %d %s\n", ft_strncmp("abc", "!", 2), ft_strncmp("abc", "!", 2) == 64 ? "✅" : "❌");
}

// void ft_strchr_tester()
// {
// 	printf("ft_strchr_tester\n");
// 	printf("ft_strchr('','a') = %s %s\n",ft_strchr("","a") , ft_strchr("","a") == NULL ? "✅" : "❌");
// 	printf("ft_strchr('a','a') = %s %s\n",ft_strchr("a","a") , ft_strchr("a","a") == "a" ? "✅" : "❌");
// 	printf("ft_strchr('ab','a') = %s %s\n",ft_strchr("ab","a") , ft_strchr("ab","a") == "ab" ? "✅" : "❌");
// 	printf("ft_strchr('ab','b') = %s %s\n",ft_strchr("ab","b") , ft_strchr("ab","b") == "b" ? "✅" : "❌");
// 	printf("ft_strchr('abc','a') = %s %s\n",ft_strchr("abc","a") , ft_strchr("abc","a") == "abc" ? "✅" : "❌");
// 	printf("ft_strchr('abc','b') = %s %s\n",ft_strchr("abc","b") , ft_strchr("abc","b") == "bc" ? "✅" : "❌");
// 	printf("ft_strchr('abc','c') = %s %s\n",ft_strchr("abc","c") , ft_strchr("abc","c") == "c" ? "✅" : "❌");
// 	printf("ft_strchr('abc','d') = %s %s\n",ft_strchr("abc","d") , ft_strchr("abc","d") == NULL ? "✅" : "❌");
// 	printf("ft_strchr('abc',' ') = %s %s\n",ft_strchr("abc"," ") , ft_strchr("abc"," ") == NULL ? "✅" : "❌");
// 	printf("ft_strchr('abc','!') = %s %s\n",ft_strchr("abc","!") , ft_strchr("abc","!") == NULL ? "✅" : "❌");
// 	printf("ft_strchr('abc','[') = %s %s\n",ft_strchr("abc","[") , ft_strchr("abc","[") == NULL ? "✅" : "❌");
// }
int main(void)
{
	ft_isalpha_tester();
	printf("\n");
	ft_isdigit_tester();
	printf("\n");
	ft_isalnum_tester();
	printf("\n");
	ft_isascii_tester();
	printf("\n");
	ft_isprint_tester();
	printf("\n");
	ft_strlen_tester();
	printf("\n");
	ft_toupper_tester();
	printf("\n");
	ft_tolower_tester();
	printf("\n");
	ft_strncmp_tester();

	return (0);

}