#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	size;
	char			*str;

	size = ft_strlen(s1) + 1;
	str = (char *)malloc(size);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, size);
	return (str);
}
