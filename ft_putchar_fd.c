#include "libft.h"

// Função que escreve o caractere c no descritor de arquivo fd
void	ft_putchar_fd(char c, int fd)
{
    // Usa a função write para escrever 1 byte (o caractere c) no descritor de arquivo fd
    write(fd, &c, 1);
}
