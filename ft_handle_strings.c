/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_strings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:43:50 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/29 18:44:53 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_handle_strings - Trata e imprime uma string.
 * @str: A string a ser tratada.
 * @count: O ponteiro para a contagem de caracteres impressos.
 */
void ft_handle_strings(const char *str, int *count)
{
    if (!str) { // Verifica se a string é nula.
    {
        write(1, "(null)", 6); // Se a string for nula, define str como "(null)".
        *count += 6; // Incrementa a contagem em 6 para "(null)".
        return ;
    }
    }
    while (*str) { // Percorre cada caractere na string até encontrar o terminador nulo.
        write(1, str, 1); // Imprime o caractere atual.
        (*count)++; // Incrementa a contagem de caracteres impressos.
        str++; // Avança para o próximo caractere na string.
    }
}

