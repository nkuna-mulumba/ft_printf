/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:05:34 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/27 21:06:45 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
/**
 * reverse_str - Reverte uma string.
 * @buffer: A string a ser revertida.
 * @length: O comprimento da string.
 */
void ft_reverse_str(char *buffer, int length) {
    int j = 0; // Inicializa o índice para a posição inicial da string.
    while (j < length / 2) { // Percorre até a metade da string.
        char temp = buffer[j]; // Guarda o valor atual do buffer[j].
        buffer[j] = buffer[length - j - 1]; // Substitui buffer[j] pelo valor na posição oposta.
        buffer[length - j - 1] = temp; // Coloca o valor temporário na posição oposta.
        j++; // Avança para o próximo caractere.
    }
}

