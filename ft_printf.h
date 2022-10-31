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
# include<unistd.h> /*write*/
# include<inttypes.h> /*uintptr_t*/
# include<stdlib.h> /*malloc*/

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);

int		ft_print_char(int c);
int		ft_print_string(char *str);
int		ft_print_pointer(unsigned long long ptr);
int		ft_print_number(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_print_percent(void);

#endif