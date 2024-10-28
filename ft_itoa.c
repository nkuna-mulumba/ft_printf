/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:33:43 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/28 18:33:53 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/**
 * ft_count_nbr - Conta o número de dígitos em um número.
 * @n: O número a ser contado.
 * Retorna: O comprimento do número.
 */
static int ft_count_nbr(int n) {
    int length_nbr = 0;

    if (n <= 0) // Caso especial para 0 e números negativos.
        length_nbr = 1;
    while (n != 0) { // Conta os dígitos do número.
        n = n / 10;
        length_nbr++;
    }
    return (length_nbr); // Retorna o comprimento do número.
}

/**
 * ft_itoa - Converte um número inteiro em uma string.
 * @n: O número a ser convertido.
 * Retorna: O ponteiro para a string resultante.
 */
char *ft_itoa(int n) {
    int length;
    char *int_to_str;
    long num;

    length = ft_count_nbr(n); // Calcula o comprimento do número.
    int_to_str = malloc((length + 1) * sizeof(char)); // Aloca memória para a string, incluindo o terminador nulo.
    if (!int_to_str) // Verifica se a alocação falhou.
        return (NULL);
    int_to_str[length] = '\0'; // Adiciona o terminador nulo no final da string.
    num = n; // Usa uma variável long para lidar com o valor absoluto.

    if (num == 0) // Caso especial para o valor 0.
        int_to_str[0] = '0';
    if (num < 0) { // Caso especial para números negativos.
        int_to_str[0] = '-';
        num = -num;
    }
    while (num != 0) { // Converte cada dígito do número para caractere.
        int_to_str[--length] = (num % 10) + '0';
        num = num / 10;
    }
    return (int_to_str); // Retorna o ponteiro para a string resultante.
}

/*
int main() {
    int number = -2147483648;
    char *int_to_str = ft_itoa(number);

    if (!int_to_str) {
        return (1); // Retorna 1 em caso de falha na alocação de memória
    } else {
        printf("%s\n", int_to_str); // Imprime o resultado
        free(int_to_str); // Libera a memória alocada
    }
    return 0; // Retorna 0 em caso de sucesso
}
*/

