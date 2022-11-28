#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char *s;
	void *p;

	s = "eunbi";
	printf("%s\n", "char");
	printf("%c\n", 'a');
	printf("%c\n\n", 'a');

	printf("%s\n", "hex");
	printf("%x\n", 15);
	ft_printf("%x\n\n", 15);

	printf("%s\n", "HEX");
	printf("%X\n", 15);
	ft_printf("%X\n\n", 15);

	printf("%%\n");
	ft_printf("%%\n\n");
	
	printf("%s\n", "Void pointer");
	printf("%p\n", &p);
	ft_printf("%p\n\n", &p);

	printf("%s\n", "string");
	printf("%s\n", s);
	ft_printf("%s\n\n", s);

	printf("%s\n", "Unsigned integer");
	printf("%u\n", -1);
	ft_printf("%u\n\n", -1);

	return(0);
}