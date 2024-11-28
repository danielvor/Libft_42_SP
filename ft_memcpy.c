#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tmp_src;
	char		*tmp_dest;

	tmp_src = (char *)src;
	tmp_dest = (char *)dest;
	i = 0;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
