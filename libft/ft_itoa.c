#include "libft.h"

static int	get_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long long	num;                   

	if (n == -2147483648)
		 return (ft_strdup("-2147483648"));
	len = get_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		num = -n;
	else
		num = n;
	len--;
	while (len >= 0)
	{
		str[len] = '0' + (num % 10);
		num = num / 10;
		len--;
	}
	if (n < 0 && n != -2147483648)
		str[0] = '-';
	return (str);
}