#include "libft.h"

// Função que escreve a string s no descritor de arquivo fd
void	ft_putstr_fd(char *s, int fd)
{
    int		i;

    // Se s for NULL ou fd for inválido, retorna imediatamente
    if (!s || fd < 0)
        return ;
    i = 0;
    // Percorre cada caractere da string s
    while (s[i])
    {
        // Escreve o caractere atual no descritor de arquivo fd
        ft_putchar_fd(s[i], fd);
        i++;
    }
}
