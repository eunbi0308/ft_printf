/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: eucho <eucho@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 21:30:39 by eucho         #+#    #+#                 */
/*   Updated: 2022/10/11 21:30:39 by eucho         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = len + ft_print_char(va_arg(args, int));
	else if (format == 's')
		len = len + ft_print_string(va_arg(args, char *));
	else if (format == 'p')
		len = len + ft_print_pointer(va_arg(args, unsigned));
	else if (format == 'd' || format == 'i')
		len = len + ft_print_number(va_arg(args, int));
	else if (format == 'u')
		len = len + ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = len + ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len = len + ft_print_percent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len = len + ft_formats (args, str[i + 1]);
			i++;
		}
		else
			len = len + ft_print_char (str[i]);
		i++;
	}
	va_end (args);
	return (len);
}
