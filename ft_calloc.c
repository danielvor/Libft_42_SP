#include "libft.h"

// Função que aloca memória para uma matriz de nmemb elementos de size bytes cada e inicializa todos os bytes com zero
void	*ft_calloc(size_t nmemb, size_t size)
{
    char	*mem;        // Ponteiro para a memória alocada
    size_t	total_size;  // Tamanho total da memória a ser alocada

    // Se nmemb ou size for zero, aloca zero bytes e retorna o ponteiro
    if (nmemb == 0 || size == 0)
        return (malloc(0));

    // Verifica se a multiplicação de nmemb e size causará overflow
    if (nmemb > (__SIZE_MAX__ / size))
        return (NULL);

    // Calcula o tamanho total da memória a ser alocada
    total_size = nmemb * size;

    // Aloca a memória necessária
    mem = (char *)malloc(total_size);

    // Se a alocação falhar, retorna NULL
    if (mem == NULL)
        return (NULL);

    // Inicializa todos os bytes da memória alocada com zero
    ft_bzero(mem, total_size);

    // Retorna o ponteiro para a memória alocada
    return ((void *)mem);
}
