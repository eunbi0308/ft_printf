#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char *s;
	void *p;

	s = "eunbi";
	printf("%s\n", "==[ char ]==");
	printf("%d %d", printf(" %c\n", 'a'), ft_printf(" %c\n", 'a'));
	printf("\n\n");

	printf("%s\n", "==[ hex ]==");
	printf("%d %d", printf(" %x\n", 15), ft_printf(" %x\n", 15));
	printf("\n\n");

	printf("%s\n", "==[ HEX ]==");
	printf("%d %d", printf(" %X\n", 15), ft_printf(" %X\n", 15));
	printf("\n\n");

	printf("%s\n", "==[ Decimal ]==");
	printf("%d %d", printf(" %d %i\n", 15, 20), ft_printf(" %d %i\n", 15, 20));
	printf("\n\n");
	
	printf(" %d %d %d %d %d\n", 0, 0, 0, 0, 0);
	ft_printf(" %d %d %d %d %d\n\n", 0, 0, 0, 0, 0);

	printf("%s\n", "==[ % ]==");
	printf("%d %d", printf(" %%\n"), ft_printf(" %%\n"));
	printf("\n\n");
	
	printf("%s\n", "==[ Void pointer ]==");
	printf("%d %d", printf(" %p\n", &p), ft_printf(" %p\n", &p));
	printf("\n\n");

	printf("%s\n", "==[ string ]==");
	printf("%d %d", printf(" %s\n", s), ft_printf(" %s\n", s));
	printf("\n\n");

	printf("%d %d", printf(" %s\n", NULL), ft_printf(" %s\n", NULL));
	printf("\n\n");

	printf("%s\n", "==[ Unsigned integer ]==");
	printf("%d %d", printf(" %u\n", -1), ft_printf(" %u\n", -1));
	printf("\n\n");

	printf("%s\n", "==[ Mix ]==");
	printf(" %c, %x, %X, %p, %s, %u\n", 'a', 15, 15, &p, "Hello", -1);
	ft_printf(" %c, %x, %X, %p, %s, %u\n\n", 'a', 15, 15, &p, "Hello", -1);

	printf("%s\n", "==[ Single % ]==");
	printf(" aaaaaa%caaaaaa%daaaa\n", 'A', 8);
	ft_printf(" aaaaaa%caaaaaa%daaaa\n\n", 'A', 8);

	printf(" aaa%\n");
	ft_printf(" aaa%\n\n");

	printf(" aa%bb%%cc\n");
	ft_printf(" aa%bb%%cc\n\n");

	return(0);
}