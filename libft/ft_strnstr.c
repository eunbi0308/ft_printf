#include "libft.h"
#include<limits.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (len > LONG_MAX)
		len = ft_strlen(big);
	little_len = ft_strlen(little);
	while (i < len)
	{
		if (ft_strncmp(big, little, little_len) == 0)
		{
			if (len < little_len + i)
				return (NULL);
			return ((char *)big);
		}
		big++;
		i++;
	}
	return (NULL);
}
