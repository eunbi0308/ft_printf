#include "../headers/ft_printf.h"

void ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_print_str(char *str)
{
    int i;

    i = 0;
    if (!str)
    {
        ft_putstr("NULL");
        return (0);
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return(i);
}