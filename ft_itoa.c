#include "libft.h"

// Função auxiliar que converte um dígito inteiro para seu caractere ASCII correspondente
static int	ft_int_to_ascii(int n)
{
    // Se o número for negativo, converte para positivo
    if (n < 0)
        n = -n;
    // Retorna o caractere ASCII correspondente ao dígito
    return (n + '0');
}

// Função auxiliar que calcula o número de dígitos em um número inteiro
static int	ft_numlen(int n)
{
    int		len;

    len = 0;
    // Se o número for 0, retorna 1 (pois 0 tem um dígito)
    if (n == 0)
        return (1);
    // Conta o número de dígitos dividindo o número por 10 repetidamente
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    // Retorna o comprimento do número em dígitos
    return (len);
}

// Função que converte um número inteiro em uma string
char	*ft_itoa(int n)
{
    int		sign;       // Variável para armazenar o sinal do número
    int		digits_len; // Comprimento do número em dígitos
    char	*num;       // Ponteiro para a string resultante

    sign = 0;
    digits_len = ft_numlen(n);
    // Se o número for negativo, define sign como 1
    if (n < 0)
        sign = 1;
    // Aloca memória para a string resultante (inclui espaço para o sinal e o caractere nulo)
    num = (char *)malloc((digits_len + sign + 1) * sizeof(char));
    // Se a alocação falhar, retorna NULL
    if (!num)
        return (NULL);
    // Adiciona o caractere nulo no final da string
    num[digits_len + sign] = '\0';
    // Se o número for negativo, adiciona o sinal '-' no início da string
    if (sign)
        num[0] = '-';
    // Converte os dígitos do número para caracteres
    while (digits_len > 0)
    {
        // Adiciona o dígito atual na posição correta da string
        num[digits_len + sign - 1] = ft_int_to_ascii(n % 10);
        // Divide o número por 10 para obter o próximo dígito
        n = n / 10;
        // Decrementa o comprimento dos dígitos
        digits_len--;
    }
    // Retorna o ponteiro para a string resultante
    return (num);
}
