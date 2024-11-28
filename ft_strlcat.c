#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		src_len;
	size_t		dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size == 0)
		return (src_len);
	if (dst_len >= size)
		return (src_len + size);
	i = 0;
	while ((dst_len + i < size - 1) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
