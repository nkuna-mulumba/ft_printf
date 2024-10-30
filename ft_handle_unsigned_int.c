/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:58:14 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/29 19:02:12 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_handle_unsigned_int - Converte um número decimal sem sinal em string e imprime.
 * @num: O número sem sinal a ser convertido.
 * @count: O ponteiro para a contagem de caracteres impressos.
 */
void ft_handle_unsigned_int(unsigned int num, int *count)
{
    char *buffer; // Declara um ponteiro para armazenar a string resultante.
    int length; // Declara uma variável para armazenar o comprimento da string.

    buffer = ft_unsigned_int_to_str(num); // Converte o número sem sinal para string.
    if (buffer) { // Verifica se a conversão foi bem-sucedida.
        length = ft_strlen(buffer); // Calcula o comprimento da string.
        write(1, buffer, length); // Escreve a string no stdout (saída padrão).
        *count += length; // Incrementa a contagem pelo comprimento da string.
        free(buffer); // Libera a memória alocada para a string.
    }
}

