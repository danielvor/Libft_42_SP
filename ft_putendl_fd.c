#include "libft.h"

// Função que escreve a string s seguida de uma nova linha no descritor de arquivo fd
void	ft_putendl_fd(char *s, int fd)
{
    // Se s for NULL ou fd for inválido, retorna imediatamente
    if (!s || !fd)
        return ;
    // Escreve a string s no descritor de arquivo fd
    ft_putstr_fd(s, fd);
    // Escreve uma nova linha no descritor de arquivo fd
    ft_putchar_fd('\n', fd);
}
