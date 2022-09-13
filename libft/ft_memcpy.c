#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	dst2 = dst;
	src2 = (char *)src;
	i = 0;
	if (dst2 == src2)
		return (dst2);
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
