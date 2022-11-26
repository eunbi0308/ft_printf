#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    void *p;

    printf("%p\n", &p);
    printf("%p\n", &p);
    ft_printf("%p\n", &p);

    return(0);
}