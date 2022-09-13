#include "libft.h"
#include <stdio.h>

static size_t	word_counter(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	const char	*start;
	char		**str;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(*str) * (word_counter(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		if (*(s - 1) != c)
			str[i++] = ft_substr(start, 0, s - start);
	}
	str[i] = NULL;
	return (str);
}


int	main()
{
	printf (ft_split("abcba", 'c')[0]);
	return (0);
}