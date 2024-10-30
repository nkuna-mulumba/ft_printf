/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:47:47 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/28 17:24:24 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_handle_format - Chama a função apropriada para cada especificador de formato.
 * args: A lista de argumentos variáveis.
 * format: O especificador de formato.
 * count: O ponteiro para a contagem de caracteres impressos.
 */
static void ft_handle_format(va_list args, const char format, int *count) {
    if (format == 'c') {
        ft_handle_char(va_arg(args, int), count); // Trata o caractere.
    } else if (format == 's') {
        ft_handle_strings(va_arg(args, const char *), count); // Trata a string.
    } else if (format == 'p') {
        ft_handle_void_pointer(va_arg(args, void *), count); // Trata o ponteiro void.
    } else if (format == 'd' || format == 'i') {
        ft_handle_int_dcml(va_arg(args, int), count); // Trata o número decimal ou inteiro.
    } else if (format == 'u') {
        ft_handle_unsigned_int(va_arg(args, unsigned int), count); // Trata o número decimal sem sinal.
    } else if (format == 'x') {
        ft_handle_hex_lower(va_arg(args, unsigned int), count); // Trata o número hexadecimal em minúsculas.
    } else if (format == 'X') {
        ft_handle_hex_upper(va_arg(args, unsigned int), count); // Trata o número hexadecimal em maiúsculas.
    } else if (format == '%') {
        ft_handle_char('%', count); // Trata o símbolo de porcentagem.
    }
}

/*
 * ft_printf - Função principal que imita o printf original.
 * format: A string de formato.
 * Retorna: O número de caracteres impressos.
*/
int ft_printf(const char *format, ...) {
    va_list args; // Declara uma variável do tipo va_list para armazenar os argumentos variáveis.
    int count = 0; // Inicializa a contagem de caracteres impressos.

    va_start(args, format); // Inicializa a lista de argumentos variáveis.

    while (*format) { // Percorre cada caractere na string de formato.
        if (*format == '%') { // Se encontrar um '%', identifica um especificador de formato.
            format++; // Avança para o próximo caractere, que indica o tipo de formato.
            ft_handle_format(args, *format, &count); // Chama a função para tratar o formato.
        } else { // Caso contrário, trata-se de um caractere literal.
            write(1, format, 1); // Imprime o caractere literal.
            count++; // Incrementa a contagem de caracteres impressos.
        }
        format++; // Avança para o próximo caractere na string de formato.
    }

    va_end(args); // Finaliza o uso da lista de argumentos variáveis.
    return count; // Retorna o número total de caracteres impressos.
}
/*
int main() {
    // TESTAR CARACTERES E STRINGS
    ft_printf("Caracteres: %c\n", 'A'); // Testa a impressão de um único caractere.
    ft_printf("String: %s\n", "Hello, world"); // Testa a impressão de uma string.

    // TESTAR INTEIROS
    ft_printf("Número inteiro: %d\n", 42); // Testa a impressão de um número inteiro.
    ft_printf("Número negativo: %i\n", -42); // Testa a impressão de um número negativo.

    // TESTAR INTEIROS SEM SINAL
    ft_printf("Número sem sinal: %u\n", 3000000000u); // Testa a impressão de um número sem sinal.

    // TESTAR NÚMEROS HEXADECIMAIS
    ft_printf("Hexadecimal minúsculo: %x\n", 255); // Testa a impressão de um número hexadecimal em minúsculas.
    ft_printf("Hexadecimal maiúsculo: %X\n", 255); // Testa a impressão de um número hexadecimal em maiúsculas.

    // TESTAR PONTEIROS
    int var = 42; // Declara uma variável inteira.
    int *ptr = &var; // Declara um ponteiro que aponta para var.
    ft_printf("Ponteiro: %p\n", (void*)ptr); // Testa a impressão de um ponteiro.

    // TESTAR SÍMBOLO DE PORCENTAGEM
    ft_printf("Porcentagem: %%\n"); // Testa a impressão do símbolo de porcentagem.

    return 0; // Retorna 0 indicando que o programa terminou com sucesso.
}
*/
