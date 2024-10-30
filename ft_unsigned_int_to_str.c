/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int_to_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:32:50 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/27 21:40:30 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * unsigned_int_to_str - Converte um número decimal sem sinal em string.
 * @num: O número sem sinal a ser convertido.
 * Retorna: Um ponteiro para a string resultante.
 */
char *ft_unsigned_int_to_str(unsigned int num) {
    char *buffer;
    int i;

    buffer = malloc(12 * sizeof(char)); // Aloca memória para até 10 dígitos + terminador nulo.
    i = 0; // Inicializa o índice.
    if (num == 0) {
        buffer[i++] = '0'; // Caso especial para o valor 0.
    } else {
        while (num > 0) {
            buffer[i++] = (num % 10) + '0'; // Converte cada dígito de num para caractere.
            num = num / 10; // Divide num por 10 para obter o próximo dígito.
        }
    }
    buffer[i] = '\0'; // Adiciona o terminador nulo na string.

    // Usa a função ft_reverse_str para inverter a string.
    ft_reverse_str(buffer, i); // Inverte a string para obter a ordem correta dos dígitos.

    return buffer; // Retorna o ponteiro para a string resultante.
}

