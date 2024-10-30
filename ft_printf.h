/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:09:47 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/29 19:16:31 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/**
 * Cabeçalho `ft_printf.h` - Declarações de funções e inclusões de bibliotecas necessárias.
 * Este cabeçalho contém todas as declarações de funções e as inclusões de bibliotecas padrão necessárias
 * para a implementação de uma versão personalizada da função printf e outras funções auxiliares.
 */

# include <stdarg.h> // Para va_list, va_start, va_arg, va_end.
# include <unistd.h> // Para write.
# include <stdlib.h> // Para malloc, free.
# include <stdio.h>  // Para printf (opcional, se necessário).
# include <string.h> // Para strlen.
# include <stddef.h> // Para tipos padrão como size_t.

/**
 * Declarações de funções.
 * Estas funções são usadas para manipular e imprimir diferentes tipos de dados.
 */

void 	ft_handle_char(char c, int *count); // Função para tratar e imprimir um único caractere.
void 	ft_handle_strings(const char *str, int *count); // Função para tratar e imprimir uma string.
void 	ft_reverse_str(char *buffer, int length); // Função para reverter uma string.
char 	*ft_num_to_hex(unsigned long num, const char *hex_digits); // Função para converter um número em string hexadecimal.
size_t 	ft_strlen(const char *s); // Função para calcular o comprimento de uma string.
char 	*ft_unsigned_int_to_str(unsigned int num); // Função para converter um número decimal sem sinal em string.
void 	ft_handle_void_pointer(void *ptr, int *count); // Função para tratar e imprimir um ponteiro void.
char 	*ft_itoa(int n); // Função para converter um número inteiro em string.
void 	ft_handle_int_dcml(int num, int *count); // Função para tratar e imprimir um número decimal.
void 	ft_handle_unsigned_int(unsigned int num, int *count); // Função para tratar e imprimir um número decimal sem sinal.
void 	ft_handle_hex_lower(unsigned int num, int *count); // Função para tratar e imprimir um número hexadecimal em minúsculas.
void 	ft_handle_hex_upper(unsigned int num, int *count); // Função para tratar e imprimir um número hexadecimal em maiúsculas.
int 	ft_printf(const char *format, ...); // Função principal que imita o printf original.

#endif

