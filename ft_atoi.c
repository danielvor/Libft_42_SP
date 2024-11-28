#include "libft.h"

// Função estática que verifica se o caractere é um espaço em branco
static int ft_isspace(int c)
{
	// Retorna verdadeiro se c for um dos caracteres de espaço em branco
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

// Função que converte uma string para um inteiro (semelhante ao atoi da biblioteca padrão)
int ft_atoi(const char *nptr)
{
	int i;		// Índice para percorrer a string
	int sign;	// Sinal do número (1 para positivo, -1 para negativo)
	int result; // Resultado final

	i = 0;
	sign = 1;
	result = 0;

	// Ignora os espaços em branco no início da string
	while (ft_isspace(nptr[i]))
		i++;

	// Verifica se há um sinal na string
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		// Se o sinal for '-', define sign como -1
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}

	// Converte os caracteres numéricos para um inteiro
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		// Atualiza o resultado multiplicando por 10 e adicionando o valor do dígito atual
		result = result * 10 + (nptr[i] - '0');
		i++;
	}

	// Retorna o resultado final multiplicado pelo sinal
	return (result * sign);
}