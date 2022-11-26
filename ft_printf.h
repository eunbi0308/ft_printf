/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: eucho <eucho@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 21:43:03 by eucho         #+#    #+#                 */
/*   Updated: 2022/10/11 21:43:03 by eucho         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h> /*for va_list*/
# include<inttypes.h> /*uintptr_t*/

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);

int		ft_print_char(int c);
int		ft_print_string(char *str);
int		ft_print_pointer(uintptr_t ptr);
int		ft_print_number(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_print_percent(void);

void	ft_put_string(char *str);

void	ft_putchar(char c);

void	ft_put_pointer(uintptr_t num);
int		ft_pointer_len(uintptr_t num);

void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned int num);

char	*ft_unsigned_itoa(unsigned int n);
int		ft_num_len(unsigned int num);

#endif