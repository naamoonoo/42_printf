#include "ft_printf.h"
#include <stdio.h>

// void for_testing(char *a1, ...)
// {
// 	va_list tt;
// 	int len = 0;
// 	int i = -1;

// 	while(a1[++i])
// 		if (a1[i] == '%')
// 			len++;
	
// 	va_start(tt, len);
// 	printf(a1, a2);
// 	ft_printf(a1, a2);
// 	ft_printf("\n");
// }

int	main()
{
	printf("hell0\n");
	ft_printf("holl0\n");
	ft_printf("\n");

	printf("a \a bs\b fd\f nl\n cret\r tab\t vt\v bye\n \\ \' \" \n");
	ft_printf("a \a bs\b fd\f nl\n cret\r tab\t vt\v bye\n \\ \' \" \n");
	ft_printf("\n");
	
	printf("number is %d % -d\n", 10, 254);
	ft_printf("number is %d % -d\n", 10, 254);
	ft_printf("\n");

	printf("char is %c\n", 'a');
	ft_printf("char is %c\n", 'a');
	ft_printf("\n");

	printf("str is %s\n", "until csd and p!");
	ft_printf("str is %s\n", "until csd and p!");
	ft_printf("\n");

	int a = 17;
	printf("%d's pointer is %p\n", a, &a);
	ft_printf("%d's pointer is %p\n", a, &a);
	ft_printf("\n");

	printf("|%+-7d|\n", 25);
	ft_printf("|%+-7d|\n", 25);
	printf("|%+-7d|\n", -3);
	ft_printf("|%+-7d|\n", -3);
	ft_printf("\n");
	printf("|%+11d|\n", -78);
	ft_printf("|%+11d|\n", -78);
	ft_printf("\n");
	// // printf("|% +30d|\n", a); // flag ' ' is ignored when flag '+' is present
	printf("|%+09d|\n", 31);
	ft_printf("|%+09d|\n", 31);
	ft_printf("\n");
	printf("|% 4d|\n", 45);
	ft_printf("|% 4d|\n", 45);
	ft_printf("\n");
	printf("|% -7d|\n", 325);
	ft_printf("|% -7d|\n", 325);
	printf("|% -7d|\n", -325);
	ft_printf("|% -7d|\n", -325);
	ft_printf("\n");
	printf("|% 05d|\n", 99);
	ft_printf("|% 05d|\n", 99);
	ft_printf("\n");
	// printf("|%5d|\n", 99);
	// printf("|%0-3d|\n", a); flag '0' is ignored when flag '-' is present
	printf("%%\n");
	ft_printf("%%\n");
	ft_printf("\n");

	printf("%3d\n", 12341512);
	ft_printf("%3d\n", 12341512);
	ft_printf("\n");
	// ft_make_width(5, ' ');

	printf("%5s\n", "is this working?");
	ft_printf("%5s\n", "is this working?");
	ft_printf("\n");

	printf("%-5s\n", "go!");
	ft_printf("%-5s\n", "go!");
	ft_printf("\n");

	printf("%-5sgood!\n", "go!");
	ft_printf("%-5sgood!\n", "go!");
	ft_printf("\n");


	printf("%-c %-5c |%10c||\n", 'a', 'b', 'c');
	ft_printf("%-c %-5c |%10c||\n", 'a', 'b', 'c');
	ft_printf("\n");


	printf("%45.12f\n", 254.12352362362723);
	ft_printf("%45.12f\n", 254.12352362362723);
	ft_printf("\n");

	printf("%12.12f\n", 112.324);
	ft_printf("%12.12f\n", 112.324);
	ft_printf("\n");

	printf("%5.1f\n", -21.8482905);
	ft_printf("%5.1f\n", -21.8482905);
	ft_printf("\n");
	printf("%-5.1f\n", -21.8482905);
	ft_printf("%-5.1f\n", -21.8482905);
	ft_printf("\n");
	printf("%+5.1f\n", -21.8482905);
	ft_printf("%+5.1f\n", -21.8482905);
	ft_printf("\n");
	printf("%+-5.1f\n", -21.8482905);
	ft_printf("%+-5.1f\n", -21.8482905);
	ft_printf("\n");
	printf("%05.1f\n", -21.8482905);
	ft_printf("%05.1f\n", -21.8482905);
	ft_printf("\n");
	printf("%+05.1f\n", -21.8482905);
	ft_printf("%+05.1f\n", -21.8482905);
	ft_printf("\n");
	printf("% 05.1f\n", -21.8482905);
	ft_printf("% 05.1f\n", -21.8482905);
	ft_printf("\n");
	printf("%- 5.1f\n", -21.8482905);
	ft_printf("%- 5.1f\n", -21.8482905);
	ft_printf("\n");

	printf("%*d\n", 5, 10);
	unsigned int bs = -11;
	printf("%u\n", bs);
	// printf("%llu\n", 18446744073709551612);
	// ft_putnbr(12341251251212);
	// printf("%3Lf\n",2152511241245125121243519589102859128509182905810928590125091257458865856956956956969124251251225512.1294192489012401283246236236412);
	// printf("%ld\n", 9223372036854775807);
	// printf("%llu\n", 18446744073709551615);
	ft_putnbr(2141242234314124);
	return (0);
}