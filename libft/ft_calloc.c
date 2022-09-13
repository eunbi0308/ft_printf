#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	ptr = (char *)malloc(count * size);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}
