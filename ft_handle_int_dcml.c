/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_dcml_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:36:20 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/27 20:36:45 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_handle_dcml_int - Converte um número decimal em string e imprime.
 * @num: O número a ser convertido.
 * @count: O ponteiro para a contagem de caracteres impressos.
 */
void ft_handle_int_dcml(int num, int *count) {
    char *buffer;
    int length;

    buffer = ft_itoa(num); // Converte o número para string.
    if (buffer) {
        length = ft_strlen(buffer); // Calcula o comprimento da string usando ft_strlen.
        write(1, buffer, length); // Imprime a string.
        *count += length; // Incrementa a contagem pelo comprimento da string.
        free(buffer); // Libera a memória alocada para a string.
    }
}

