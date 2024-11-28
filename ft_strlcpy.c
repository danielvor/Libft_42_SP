#include "libft.h"

// Função que copia a string src para dst, garantindo que o resultado seja nulo-terminado
// e que não exceda o tamanho total de size bytes
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t		i;
    size_t		src_len; // Comprimento da string src

    i = 0;
    src_len = ft_strlen(src);
    // Se size for maior que 0, copia src para dst
    if (size > 0)
    {
        // Copia os caracteres de src para dst, respeitando o tamanho total de size - 1
        while (i < src_len && i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        // Adiciona o caractere nulo no final da string resultante
        dst[i] = '\0';
    }
    // Retorna o comprimento da string src
    return (src_len);
}
