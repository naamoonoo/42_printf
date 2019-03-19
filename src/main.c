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
	int wd = 12353252;
	printf("%d's pointer is %p\n", wd, &wd);
	ft_printf("%d's pointer is %p\n", wd, &wd);
	ft_printf("\n");

	printf("|%+-7i|\n", 25);
	ft_printf("|%+-7i|\n", 25);
	printf("|%+-7i|\n", -3);
	ft_printf("|%+-7i|\n", -3);
	ft_printf("\n");
	printf("|%+11i|\n", -78);
	ft_printf("|%+11i|\n", -78);
	ft_printf("\n");
	// // printf("|% +30d|\n", a); // flag ' ' is ignored when flag '+' is present
	printf("|%+09i|\n", 31);
	ft_printf("|%+09i|\n", 31);
	ft_printf("\n");
	printf("|% 4i|\n", 45);
	ft_printf("|% 4i|\n", 45);
	ft_printf("\n");
	printf("|% -7i|\n", 325);
	ft_printf("|% -7i|\n", 325);
	printf("|% -7i|\n", -325);
	ft_printf("|% -7i|\n", -325);
	ft_printf("\n");
	printf("|% 05i|\n", 99);
	ft_printf("|% 05i|\n", 99);
	ft_printf("\n");
	// printf("|%5d|\n", 99);
	// printf("|%0-3d|\n", a); flag '0' is ignored when flag '-' is present
	printf("%%\n");
	ft_printf("%%\n");
	ft_printf("\n");

	printf("%3i\n", 12341512);
	ft_printf("%3i\n", 12341512);
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

	printf("|%21.12d|\n", 0xab);
	ft_printf("|%21.12d|\n", 0xab);
	ft_printf("\n");
    
	ft_printf("%d\n", 124124124);
    ft_printf("%hd\n", 35252);
    ft_printf("%hhd\n", 123);
    ft_printf("%ld\n", INT_MAX);
    ft_printf("%lld\n", LONG_MAX);
	ft_printf("\n");
	ft_printf("%i\n", 124124124);
    ft_printf("%hi\n", 35252); 
    ft_printf("%hhi\n", 123);
    ft_printf("%li\n", INT_MAX);
    ft_printf("%lli\n", LONG_MAX);
	ft_printf("\n");
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


	printf( "|%04i|\n", -12);	//|0012|
	ft_printf( "|%04i|\n", -12);	//|0012|
	ft_printf("\n");
	printf("%-10o\n", 392);
	ft_printf("%-10o\n", 392);
	printf("|%#-10o|\n", 392);
	ft_printf("|%#-10o|\n", 392);
	printf("|%#010o|\n", 392);
	ft_printf("|%#010o|\n", 392);
	printf("|%#21o|\n", -392);
	ft_printf("|%#21o|\n", -392);

	printf("|%-8o|\n", -392);
	ft_printf("|%-8o|\n", -392);
	printf("------------\n");
	ft_printf("\n");
	printf("|%#-10x|\n", 392);
	ft_printf("|%#-10x|\n", 392);
	printf("%#010x\n", 392);
	ft_printf("%#010x\n", 392);
	ft_printf("\n");
	printf("|%#-19X|\n", 7329);
	ft_printf("|%#-19X|\n", 7329);
	printf("%#010X\n", -18292904);
	ft_printf("%#010X\n", -18292904);
	printf( "%#X\n", 26);//	0X1A
	ft_printf( "%#X\n", 26);//	0X1A
	ft_printf("\n");
	printf("------------\n");
//   printf("%#08x\n", 42);
//   ft_printf("%#08x\n", 42);
//   printf("%#-08x\n", 42);
//   ft_printf("%#-08x\n", 42);
//   printf("@moulitest: %#.x %#.0x\n", 0, 0);
//   ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);
//   printf("@moulitest: %.x %.0x\n", 0, 0);
//   ft_printf("@moulitest: %.x %.0x\n", 0, 0);
//   printf("@moulitest: %5.x %5.0x\n", 0, 0);
//   ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
//   printf("%.2s is a string\n", "this");
//   ft_printf("%.2s is a string\n", "this");
//   printf("%5.2s is a string\n", "this");
//   ft_printf("%5.2s is a string\n", "this");
//   printf("%-.2s is a string\n", "this");
//   ft_printf("%-.2s is a string\n", "this");
//   printf("%-5.2s is a string\n", "this");
//   ft_printf("%-5.2s is a string\n", "this");
 
//   printf("%-05o\n", 2500);
//   ft_printf("%-05o\n", 2500);
//   printf("@moulitest: %.o %.0o\n", 0, 0);
//   ft_printf("@moulitest: %.o %.0o\n", 0, 0);
//   printf("@moulitest: %5.o %5.0o\n", 0, 0);
//   ft_printf("@moulitest: %5.o %5.0o\n", 0, 0);
//   printf("% +d\n", 42);
//   ft_printf("% +d\n", 42);
//   printf("%+ d\n", 42);
//   ft_printf("%+ d\n", 42);
//   printf("%  +d\n", 42);
//   ft_printf("%  +d\n", 42);
//   printf("%+  d\n", 42);
//   ft_printf("%+  d\n", 42);
//   printf("% ++d\n", 42);
//   ft_printf("% ++d\n", 42);
//   printf("%++ d\n", 42);
//   ft_printf("%++ d\n", 42);
//   printf("%-05d\n", 42);
//   ft_printf("%-05d\n", 42);
//   printf("%-05d\n", -42);
//   ft_printf("%-05d\n", -42);
//   printf("@moulitest: %.d %.0d\n", 0, 0);
//   ft_printf("@moulitest: %.d %.0d\n", 0, 0);
//   printf("@moulitest: %5.d %5.0d\n", 0, 0);
//   ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
//   printf("% u\n", 4294967295);
//   ft_printf("% u\n", 4294967295);
	
	// ft_putnbr(LONG_MAX/ 10);
	// printf("%d\n",ft_numlen(LONG_MAX, 10));
	// printf("%45.32f\n", 254.12352362362723);
	// ft_printf("%45.32f\n", 254.12352362362723);
	// ft_printf("\n");

	
	printf("|%21.12f|\n", 112.324);
	ft_printf("|%21.12f|\n", 112.324);
	ft_printf("\n");

	printf("|%4f|\n", 1.2);
	ft_printf("|%4f|\n", 1.2);
	ft_printf("\n");
	printf("|%f|\n", 52525.000232);
	ft_printf("|%f|\n", 52525.000232);
	ft_printf("\n");
	printf("|%f|\n", -52525.000232);
	ft_printf("|%f|\n", -52525.000232);
	ft_printf("\n");
	printf("|%5.f|\n", -2555.125905);
	ft_printf("|%5.f|\n", -2555.125905);
	ft_printf("\n");
	printf("|%-20.4f|\n", -21.8482905);
	ft_printf("|%-20.4f|\n", -21.8482905);
	// ft_printf("%-5.3f\n", -21.8482905);
	ft_printf("\n");
	printf("|%+5.4f|\n", 0.12);
	ft_printf("|%+5.4f|\n", 0.12);
	// ft_printf("%+5.3f\n", -21.8482905);
	ft_printf("\n");
	printf("|%+-5.9f|\n", 3.2525);
	ft_printf("|%+-5.9f|\n", 3.2525);
	// ft_printf("%+-5.3f\n", -21.8482905);
	// ft_printf("\n");
	printf("|%08.3f|\n", -216226.8482905);
	ft_printf("|%08.3f|\n", -216226.8482905);
	// ft_printf("%05.3f\n", -21.8482905);
	ft_printf("\n");
	printf("|%+05.3f|\n", 1.8482905);
	printf("|%+05.3f|\n", 1.8482905);
	// ft_printf("|%+05.3f|\n", -21.8482905);
	// ft_printf("%+05.3f\n", -21.8482905);
	ft_printf("\n");
	printf("|% 012.3f|\n", 21.8482905);
	ft_printf("|% 012.3f|\n", 21.8482905);
	// ft_printf("% 05.3f\n", -21.8482905);
	ft_printf("\n");
	printf("|%- 5.3f|\n", -21.8482905);
	ft_printf("|%- 5.3f|\n", -21.8482905);
	// ft_printf("%- 5.3f\n", -21.8482905);
	ft_printf("\n");



	// printf("%s\n", ft_itoa_base(flag, 2, 16));
	// long a = 300, b = (long) 1.0E+14;
	// ft_printf( "%li\n%i", a, b );



	// ft_printf( "%lc:%ls", L'A', L"ABC" );
	// long double c = 123.23523516236235;
	// ft_putnbr((long)c);
	// c -= (long)c;
	// decimal_len(3.215235);


	// printf("%10o\n", 392);
	// printf("%10o\n", 392);
	// printf("%o\n", -2);
	// u_int64_t qwer = -3;
	// long int abd = -312351325;
	
	// printf("%o\n", -312351325);
	// ft_printf("%o\n", -312351325);
	// printf("%lo\n", abd);
	
	// printf("%-15o\n", -392);
	// printf("%015o\n", -392);
	// printf("hellon%s\n", ft_itoa_base(-392, 8, 10));
	return (0);
}