/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:45:23 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/29 18:56:48 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * handle_char - Imprime um único caractere e incrementa a contagem.
 * @c: O caractere a ser impresso.
 * @count: O ponteiro para a contagem de caracteres impressos.
 */
void ft_handle_char(char c, int *count) {
    if (!c) { // Verifica se o caractere é nulo.
        write(1, &c, 1); // Opcional: ainda escreve o caractere nulo.
        (*count)++; // Incrementa a contagem de caracteres impressos.
        return; // Saia da função.
    }
    write(1, &c, 1); // Escreve o caractere c no stdout (saída padrão).
    (*count)++; // Incrementa a contagem de caracteres impressos.
}

