/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_void_pointer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:19:57 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/29 19:09:01 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_handle_void_pointer - Converte um ponteiro em uma string hexadecimal e imprime.
 * @ptr: O ponteiro a ser convertido.
 * @count: O ponteiro para a contagem de caracteres impressos.
 */
void ft_handle_void_pointer(void *ptr, int *count) {
    char *buffer;
    int length;

    if (ptr == NULL) {
        write(1, "(nil)", 5); // Imprime (nil) para ponteiros nulos.
        *count += 5; // Incrementa a contagem em 5 para "(nil)".
        return;
    }

    write(1, "0x", 2); // Imprime o prefixo "0x" para ponteiros.
    *count += 2; // Incrementa a contagem em 2 para "0x".

    buffer = ft_num_to_hex((unsigned long)ptr, "0123456789abcdef"); // Converte o ponteiro para string hexadecimal.
    if (buffer) {
        length = ft_strlen(buffer); // Calcula o comprimento da string hexadecimal.
        write(1, buffer, length); // Imprime a string hexadecimal.
        *count += length; // Incrementa a contagem pelo comprimento da string.
        free(buffer); // Libera a memória alocada para a string.
    }
}

