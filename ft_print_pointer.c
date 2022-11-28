/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_pointer.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: eucho <eucho@student.42.fr>                  +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 21:30:23 by eucho         #+#    #+#                 */
/*   Updated: 2022/11/28 15:31:53 by eucho         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_pointer_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num > 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

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

int	ft_print_pointer(uintptr_t ptr)
{
	int	len;

	len = 2;
	write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		ft_to_hex(ptr);
		len += ft_pointer_len(ptr);
	}
	return (len);
}
