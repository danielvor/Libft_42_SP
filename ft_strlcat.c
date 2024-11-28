#include "libft.h"

// Função que concatena a string src no final da string dst, garantindo que o resultado seja nulo-terminado
// e que não exceda o tamanho total de size bytes
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t		i;
    size_t		src_len; // Comprimento da string src
    size_t		dst_len; // Comprimento da string dst

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    // Se size for 0, retorna o comprimento de src
    if (size == 0)
        return (src_len);
    // Se dst_len for maior ou igual a size, retorna src_len + size
    if (dst_len >= size)
        return (src_len + size);
    i = 0;
    // Copia src para o final de dst, respeitando o tamanho total de size
    while ((dst_len + i < size - 1) && src[i])
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    // Adiciona o caractere nulo no final da string resultante
    dst[dst_len + i] = '\0';
    // Retorna o comprimento total da string que tentou criar (dst_len + src_len)
    return (src_len + dst_len);
}
