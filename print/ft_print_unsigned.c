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

#include "../headers/ft_printf.h"

int ft_num_len(unsigned int num)
{
    unsigned int len;

    len = 0;
    while (num)
    {
        len++;
        num = num / 10;
    }
    return(len);
}

char    *ft_unsigned_itoa(unsigned int n)
{
    char            *unsigned_num;
    unsigned int    len;

    len = ft_num_len(n);
    unsigned_num = (char *)malloc(sizeof(char) * (len + 1));
    if (!unsigned_num)
        return (0);
    unsigned_num[len] = '\0';
    while (n)
    {
        unsigned_num[len - 1] = n % 10 + '0';
        n = n / 10;
        len--;
    }
    return (unsigned_num);
}

int ft_print_unsigned(unsigned int n)
{
    int     len;
    char    *unsigned_num;

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
