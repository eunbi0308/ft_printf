/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_unsigned.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: eucho <eucho@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 21:30:35 by eucho         #+#    #+#                 */
/*   Updated: 2022/10/11 21:30:35 by eucho         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_printf.h"

static int	unsigned_get_len(unsigned int num)
{
	unsigned int	len;

	len = 0;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char			*str;
	unsigned int	len;

	len = unsigned_get_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (n >= 0)
	{
		str[len - 1] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*unsigned_num;

	len = 0;
	if (n == 0)
		write(1, "0", 1);
	else
	{
		unsigned_num = ft_unsigned_itoa(n);
		len = len + ft_print_string(unsigned_num);
		free(unsigned_num);
	}
	return (len);
}
