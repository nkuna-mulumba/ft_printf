/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:48:50 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/27 18:50:30 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_num_to_hex - Converte um valor numérico em uma string hexadecimal.
 * @num: O número a ser convertido.
 * @hex_digits: A string de caracteres hexadecimais (pode ser "0123456789abcdef" ou "0123456789ABCDEF").
 * Retorna: Um ponteiro para a string hexadecimal.
 */
char *ft_num_to_hex(unsigned long num, const char *hex_digits)
{
    char *buffer; // Declara um ponteiro para armazenar a string resultante.
    int i; // Declara uma variável para percorrer a string.

    buffer = malloc(17 * sizeof(char)); // Aloca memória para até 16 dígitos hexadecimais + terminador nulo.
    i = 0; // Inicializa o índice.

    if (num == 0) { // Caso especial para o valor 0.
        buffer[i++] = '0'; // Armazena '0' no buffer.
    } else {
        while (num > 0) { // Converte cada dígito de num para hexadecimal.
            buffer[i++] = hex_digits[num % 16]; // Armazena o dígito correspondente no buffer.
            num = num / 16; // Divide num por 16 para obter o próximo dígito.
        }
    }
    buffer[i] = '\0'; // Adiciona o terminador nulo na string.

    ft_reverse_str(buffer, i); // Inverte a string para obter a ordem correta dos dígitos.

    return buffer; // Retorna o ponteiro para a string resultante.
}
