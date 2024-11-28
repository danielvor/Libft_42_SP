#include "libft.h"

// Função que escreve o número inteiro n no descritor de arquivo fd
void	ft_putnbr_fd(int n, int fd)
{
    char	number;

    // Se fd for inválido, retorna imediatamente
    if (fd < 0)
        return ;
    // Se n for igual ao menor valor possível de um int, escreve "-2147483648" e retorna
    if (n == INT_MIN)
    {
        ft_putstr_fd("-2147483648", fd);
        return ;
    }
    // Se n for negativo, escreve o sinal '-' e converte n para positivo
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    // Se n for maior ou igual a 10, chama recursivamente a função para escrever os dígitos anteriores
    if (n >= 10)
        ft_putnbr_fd((n / 10), fd);
    // Converte o dígito atual para caractere e escreve no descritor de arquivo fd
    number = (n % 10) + '0';
    ft_putchar_fd(number, fd);
}
