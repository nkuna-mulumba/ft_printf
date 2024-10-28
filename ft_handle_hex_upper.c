/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:15:23 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/27 22:15:39 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/**
 * ft_handle_hex_upper - Converte um número em string hexadecimal (maiúsculas) e imprime.
 * @num: O número a ser convertido.
 * @count: O ponteiro para a contagem de caracteres impressos.
 */
void ft_handle_hex_upper(unsigned int num, int *count) {
    char *buffer;
    int length;

    buffer = ft_num_to_hex(num, "0123456789ABCDEF"); // Converte o número para string hexadecimal em maiúsculas.
    if (buffer) {
        length = ft_strlen(buffer); // Calcula o comprimento da string.
        write(1, buffer, length); // Imprime a string.
        *count += length; // Incrementa a contagem pelo comprimento da string.
        free(buffer); // Libera a memória alocada para a string.
    }
}

