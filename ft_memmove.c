#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tmp_src;
	char		*tmp_dest;

	tmp_src = (char *)src;
	tmp_dest = (char *)dest;
	if (tmp_src < tmp_dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			tmp_dest[i] = tmp_src[i];
		}
	}
	else
	{
		ft_memcpy(tmp_dest, tmp_src, n);
	}
	return (tmp_dest);
}
