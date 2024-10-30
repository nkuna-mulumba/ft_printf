/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:17:12 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/29 20:40:30 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * ft_strlen - Calcula o comprimento de uma string.
 * @s: A string cujo comprimento será calculado.
 * Retorna: O comprimento da string.
 */
size_t ft_strlen(const char *s) {
    size_t i; // Declara uma variável para contar os caracteres na string.

    i = 0; // Inicializa o contador com zero.
    while (s[i] != '\0') { // Percorre a string até encontrar o terminador nulo ('\0').
        i++; // Incrementa o contador para cada caractere.
    }

    return (i); // Retorna o comprimento total da string.
}