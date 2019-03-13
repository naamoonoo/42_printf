#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	printf("hell0\n");
	ft_printf("holl0\n");

	printf("a \a bs\b fd\f nl\n cret\r tab\t vt\v bye\n \\ \' \" \n");
	ft_printf("a \a bs\b fd\f nl\n cret\r tab\t vt\v bye\n \\ \' \" \n");
	
	printf("number is %d % -d\n", 10, 254);
	ft_printf("number is %d % -d\n", 10, 254);

	printf("char is %c\n", 'a');
	ft_printf("char is %c\n", 'a');

	printf("str is %s\n", "until csd and p!");
	ft_printf("str is %s\n", "until csd and p!");

	int a = 17;
	printf("%d's pointer is %p\n", a, &a);
	ft_printf("%d's pointer is %p\n", a, &a);

	printf("|%+-20d|\n", 25);
	ft_printf("|%+-20d|\n", 25);
	printf("|%+30d|\n", 78);
	ft_printf("|%+30d|\n", 78);
	// // printf("|% +30d|\n", a); // flag ' ' is ignored when flag '+' is present
	// printf("|%+030d|\n", 31);
	// ft_printf("|%+030d|\n", 31);
	// printf("|% 4d|\n", 45);
	// ft_printf("|% 4d|\n", 45);
	// printf("|% -7d|\n", 325);
	// ft_printf("|% -7d|\n", 324);
	// printf("|%05d|\n", 99);
	// ft_printf("|%05d|\n", 99);
	// printf("|%0-3d|\n", a); flag '0' is ignored when flag '-' is present


	// ft_make_width(5, ' ');
	return (0);
}