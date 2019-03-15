#include "ft_printf.h"
#include <stdio.h>


int	main()
{
	printf("hell0\n");
	ft_printf("holl0\n");
	ft_printf("\n");

	printf("a \a bs\b fd\f nl\n cret\r tab\t vt\v bye\n \\ \' \" \n");
	ft_printf("a \a bs\b fd\f nl\n cret\r tab\t vt\v bye\n \\ \' \" \n");
	ft_printf("\n");
	
	printf("dp test is %d\n", 10);
	ft_printf("dp test is %d\n", 10);
	ft_printf("\n");

	printf("dp c test is %s\n", "working!");
	ft_printf("dp c test is %s\n", "working!");
	ft_printf("\n");

	// // int a = 10;
	// ft_printf("%010d\n", 10); 
	// ft_printf("%s\n", "hello!");
	// ft_printf("%llf%Lf%hho%llu");
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

	// printf("%d\n", 124124124);
    // printf("%hd\n", 254); 
    // printf("%hhd\n", 123);
    // printf("%ld\n", INT_MAX);
    // printf("%lld\n", LONG_MAX);
	ft_printf("%d\n", 124124124);
    ft_printf("%hd\n", 35252);
    ft_printf("%hhd\n", 123);
    ft_printf("%ld\n", INT_MAX);
    ft_printf("%lld\n", LONG_MAX);

	// printf("%i\n", 124124124);
    // printf("%hi\n", 254); 
    // printf("%hhi\n", 123);
    // printf("%li\n", INT_MAX);
    // printf("%lli\n", LONG_MAX);
	ft_printf("%i\n", 124124124);
    ft_printf("%hi\n", 254); 
    ft_printf("%hhi\n", 123);
    ft_printf("%li\n", INT_MAX);
    ft_printf("%lli\n", LONG_MAX);

	printf( "|%3i|%-3i|\n", 12, 12);	//|·12|12·|
	ft_printf( "|%3i|%-3i|\n", 12, 12);	//|·12|12·|
	ft_printf("\n");
	printf( "%+i\n", 17);	//+17
	ft_printf( "%+i\n", 17);	//+17
	ft_printf("\n");
	printf( "|% i|\n", 12);	//|·12|
	ft_printf( "|% i|\n", 12);//	|·12|
	ft_printf("\n");
	printf( "|%04i|\n", 12);	//|0012|
	ft_printf( "|%04i|\n", 12);	//|0012|
	ft_printf("\n");
	printf( "|%5s|\n", "ABC"); //|··ABC|
	ft_printf( "|%5s|\n", "ABC"); //|··ABC|
	ft_printf("\n");
	printf( "|%3i|%-3i|\n", -12, -12);	//|·12|12·|
	ft_printf( "|%3i|%-3i|\n", -12, -12);	//|·12|12·|
	ft_printf("\n");
	printf( "%+i\n", -17);	//+17
	ft_printf( "%+i\n", -17);	//+17
	ft_printf("\n");
	printf( "|% i|\n", -12);	//|·12|
	ft_printf( "|% i|\n", -12);//	|·12|
	ft_printf("\n");
	printf( "|%04i|\n", -12);	//|0012|
	ft_printf( "|%04i|\n", -12);	//|0012|
	ft_printf("\n");
	printf( "|%5s|\n", "ABC"); //|··ABC|
	ft_printf( "|%5s|\n", "ABC"); //|··ABC|
	ft_printf("\n");

	//hmmmm....?
	///------------------------------------------
	printf( "|%6.4i|\n", 1734 );	//|··0017|
	ft_printf( "|%6.4i|\n", 1734 );	//|··0017|
	printf( "|%6.6i|\n", 1734 );	//|··0017|
	ft_printf( "|%6.6i|\n", 1734 );	//|··0017|
	printf( "|%4.6i|\n", 1734 );	//|··0017|
	ft_printf( "|%4.6i|\n", 1734 );	//|··0017|
	ft_printf("\n");
	printf( "|%-6.4i|\n", 1734 );	//|··0017|
	ft_printf( "|%-6.4i|\n", 1734 );	//|··0017|
	ft_printf("\n");
	printf( "|%-5.3s|\n", "ABCDEFG" );	//|ABC··|
	ft_printf( "|%-5.3s|\n", "ABCDEFG" );	//|ABC··|
	ft_printf("\n");
	///------------------------------------------
	// printf( "%hhi", 300 ); //44
	ft_printf( "%hhi\n", 300 ); //44
	ft_printf("\n");





	printf( "%#X", 26);//	0X1A
	ft_printf("\n");
	// ft_putnbr(LONG_MAX/ 10);
	// printf("%d\n",ft_number_length(LONG_MAX, 10));
	// printf("%45.12f\n", 254.12352362362723);
	// ft_printf("%45.12f\n", 254.12352362362723);
	// ft_printf("\n");

	// printf("%12.12f\n", 112.324);
	// ft_printf("%12.12f\n", 112.324);
	// ft_printf("\n");

	// printf("%5.1f\n", -21.8482905);
	// ft_printf("%5.1f\n", -21.8482905);
	// ft_printf("\n");
	// printf("%-5.1f\n", -21.8482905);
	// ft_printf("%-5.1f\n", -21.8482905);
	// ft_printf("\n");
	// printf("%+5.1f\n", -21.8482905);
	// ft_printf("%+5.1f\n", -21.8482905);
	// ft_printf("\n");
	// printf("%+-5.1f\n", -21.8482905);
	// ft_printf("%+-5.1f\n", -21.8482905);
	// ft_printf("\n");
	// printf("%05.1f\n", -21.8482905);
	// ft_printf("%05.1f\n", -21.8482905);
	// ft_printf("\n");
	// printf("%+05.1f\n", -21.8482905);
	// ft_printf("%+05.1f\n", -21.8482905);
	// ft_printf("\n");
	// printf("% 05.1f\n", -21.8482905);
	// ft_printf("% 05.1f\n", -21.8482905);
	// ft_printf("\n");
	// printf("%- 5.1f\n", -21.8482905);
	// ft_printf("%- 5.1f\n", -21.8482905);
	// ft_printf("\n");

	// printf("%*d\n", 5, 10);
	// unsigned int bs = -11;
	// printf("%u\n", bs);
	// printf("%llu\n", 18446744073709551612);
	// ft_putnbr(12341251251212);
	// printf("%3Lf\n",2152511241245125121243519589102859128509182905810928590125091257458865856956956956969124251251225512.1294192489012401283246236236412);
	// printf("%ld\n", 9223372036854775807);
	// printf("%llu\n", 18446744073709551615);
	// ft_putnbr(2141242234314124);


	// printf("%s\n", ft_itoa_base(flag, 2, 16));
	return (0);
}