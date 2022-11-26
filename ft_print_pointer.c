/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_pointer.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: eucho <eucho@student.42.fr>                  +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 21:30:23 by eucho         #+#    #+#                 */
/*   Updated: 2022/11/26 20:46:06 by eunbi         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"


void	ft_to_hex(uintptr_t n)
{
	if (n >= 16)
	{
		ft_to_hex(n / 16);
		ft_to_hex(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
			ft_putchar(n - 10 + 'a');
	}
}

int	ft_pointer_len(uintptr_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

int	ft_print_pointer(uintptr_t ptr)
{
	int	len;

	len = 2;
	write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0'", 1);
	else
	{
		ft_to_hex(ptr);
		len += ft_pointer_len(ptr);
	}
	return (len);
}
