# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 14:43:54 by jcongolo          #+#    #+#              #
#    Updated: 2024/10/29 14:45:04 by jcongolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile para compilar e criar a biblioteca printf.a
# Este Makefile compila todos os arquivos fonte (.c) e cria uma biblioteca estática (printf.a).
# Ele também fornece comandos para limpar arquivos objeto e recompilar tudo do zero.

# Nome da biblioteca
NAME = printf.a

# Lista de arquivos de origem
SRCS = ft_handle_char.c ft_handle_int_dcml.c ft_handle_void_pointer.c\
       ft_printf.c ft_unsigned_int_to_str.c ft_handle_hex_lower.c\
       ft_handle_strings.c ft_itoa.c ft_reverse_str.c ft_handle_hex_upper.c\
       ft_handle_unsigned_int.c ft_num_to_hex.c ft_strlen.c

# Geração dos objetos a partir dos arquivos de origem
OBJS = $(SRCS:.c=.o)

# Compilador e flags
CC = cc
FLAGS = -Wall -Wextra -Werror

# Regra principal que compila e cria a biblioteca
all: $(NAME)

# Regras para compilar os arquivos objeto
%.o: %.c
        $(CC) $(FLAGS) -c $< -o $@ -I ./

# Regra para criar a biblioteca a partir dos objetos compilados
$(NAME): $(OBJS)
        ar rc $(NAME) $(OBJS)

# Limpeza dos arquivos objeto
clean:
		rm -f $(OBJS)

# Limpeza completa, incluindo a biblioteca
fclean: clean
        rm -f $(NAME)

# Recriação de tudo, limpando e recompilando
re: fclean all

# Indica que estas regras não se referem a arquivos reais
.PHONY: all clean fclean re

