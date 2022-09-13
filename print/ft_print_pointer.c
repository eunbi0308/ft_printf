#include "../headers/ft_printf.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_pointer_len(uintptr_t n)
{
    int len;

    len = 0;
    while (n != 0)
    {
        len++;
        n = n / 16;
    }
    return(len);
}

void ft_put_pointer(uintptr_t n)
{
    if (n >= 16)
    {
        ft_put_pointer(n / 16);
        ft_put_pointer(n % 16);
    }
    else
    {
        if (n < 10)
            ft_putchar(n + '0');
        else
            ft_putchar(n - 10 + 'a');
    }

}

int ft_print_ptr(uintptr_t ptr)
{
    int len;

    len = 0;
    len = len + write(1, "0x", 2);
    if (ptr == 0)
        len = write(1, "0'", 1);
    else
    {
        ft_put_pointer(ptr);
        len = len + ft_pointer_len(ptr);
    }
    return (len);
}