/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hex_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:04:01 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/27 22:04:09 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/**
 * ft_handle_hex_lower - Converte um número em string hexadecimal (minúsculas) e imprime.
 * @num: O número a ser convertido.
 * @count: O ponteiro para a contagem de caracteres impressos.
 */
void ft_handle_hex_lower(unsigned int num, int *count) {
    char *buffer;
    int length;

    buffer = ft_num_to_hex(num, "0123456789abcdef"); // Converte o número para string hexadecimal em minúsculas.
    if (buffer) {
        length = ft_strlen(buffer); // Calcula o comprimento da string.
        write(1, buffer, length); // Imprime a string.
        *count += length; // Incrementa a contagem pelo comprimento da string.
        free(buffer); // Libera a memória alocada para a string.
    }
}

