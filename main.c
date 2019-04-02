#include "./includes/ft_printf.h"
#include <stdio.h>
static char 		ch_pos_1 = 100, ch_neg_1 = -87;
static short		sh_pos_1 = 3047, sh_neg_1 = -8875;
static int			i_pos_1 = 878023;
static long		l_pos_1 = 22337203685477, l_neg_1 = -22337203685477;
static long long	ll_pos_1 = 22337203685477, ll_neg_1 = -22337203685477;
static long		lmax	= 9223372036854775807;
static long		lmin	= -9223372036854775807;
static long long llmax = 9223372036854775807;
static long		llmin = -9223372036854775807;
static unsigned char 		uch_pos_1 = 100;
static unsigned short		ush_pos_1 = 3047;
static unsigned int		ui_pos_1 = 878023;
static unsigned long		ul_pos_1 = 22337203685477;
static unsigned long long	ull_pos_1 = 22337203685477;
static unsigned long long  ullmax = 9223372036854775807;
static unsigned long  		ulmax = 9223372036854775807;
int	main()
{
	printf("|%*c|\n", 3, 'a');
	ft_printf("|%*c|\n", 3, 'a');
	printf("|%2$c| |%1$c|\n", 'a', 'b');
	printf("|%-*c|\n", 5,'a');
	printf("|%c|\n", 0);
	ft_printf("|%c|\n", 0);
	printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	ft_printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	char b[1] = {'\t'};
	printf("|%c\n", b[0]);
	printf("|%lu\n", strlen(&b[0]));
	printf("|%.7s|\n", "hello");
	ft_printf("|%.7s|\n", "hello");
	printf("|%s\n", NULL);
	printf("|%*.*s|\n", 20, 5, "hellohello");
	ft_printf("|%*.*s|\n", 20, 5, "hellohello");

	printf("|%d|\n", 3500000);
	ft_printf("|%d|\n", 3500000);


	printf("|%4.8d|\n", 35);
	ft_printf("|%4.8d|\n", 35);
	printf("|%4.8d|\n", -49);
	ft_printf("|%4.8d|\n",-49);
	printf("|%3d|\n", 9789);
	ft_printf("|%3d|\n", 9789);

	printf("|%4.9d|\n", 56432);
	ft_printf("|%4.9d|\n", 56432);
	printf("|%4.9d|\n", -56432);
	ft_printf("|%4.9d|\n", -56432);
	printf("|%ld\n", lmax);
	ft_printf("|%ld\n", lmax);
	printf("|%lld\n", llmax);
	ft_printf("|%lld\n", llmax);
		printf("|%0+3.7d|\n", -2375); // 000 덜함
		ft_printf("|%0+3.7d|\n", -2375);

	printf("|%+-8.5d|\n", 0); /// 00함 spacespace 대신
	ft_printf("|%+-8.5d|\n", 0);
	printf("|%08.5d|\n", 34);
	ft_printf("|%08.5d|\n", 34);

	printf("|%8.4d|\n", -35);
	ft_printf("|%8.4d|\n", -35);
	printf("|%7.5d|\n", 35);
	ft_printf("|%7.5d|\n", 35);

	printf("|%3d|\n", -9789);
	ft_printf("|%3d|\n", -9789);



	printf("|%-7d|\n", 33);
	ft_printf("|%-7d|\n", 33);
	printf("|%7d|\n", 33);
	ft_printf("|%7d|\n", 33);
	printf("|%5d|\n", 35);
	ft_printf("|%5d|\n", 35);


	printf("|%08.3d|\n", 8375);
	ft_printf("|%08.3d|\n", 8375);

	printf("|% 07d|\n", -54);
	ft_printf("|% 07d|\n", -54);
	printf("|%05d|\n", 43);
	ft_printf("|%05d|\n", 43);
	printf("|%05d|\n", 0);
	ft_printf("|%05d|\n", 0);
	printf("|%+5.0d|\n", 0);
	ft_printf("|%+5.0d|\n", 0);

	// printf("|%llu|\n", ullmax);
	ft_printf("|%llu|\n", ullmax);
	// printf("|%u|\n", 4294967295);
	ft_printf("|%u|\n", 4294967295);
	// printf("|%hu|\n", 65535);
	ft_printf("|%hu|\n", 65535);
	// printf("|%hhu|\n", 255);
	ft_printf("|%hhu|\n", 255);

	printf("|%08.5o|\n", 34);
	ft_printf("|%08.5o|\n", 34);
	printf("|%lo|\n", ul_pos_1);
	ft_printf("|%lo|\n", ul_pos_1);
	printf("|%037lo|\n", ul_pos_1);
	ft_printf("|%037lo|\n", ul_pos_1);

	printf("|%.5o|\n", 21);
	ft_printf("|%.5o|\n", 21);
	printf("|%8.5o|\n", 34);
	ft_printf("|%8.5o|\n", 34);
	printf("|%08.5o|\n", 0);
	ft_printf("|%08.5o|\n", 0);
	printf("this %#o number\n", 0);
	ft_printf("this %#o number\n", 0);
	printf("this %o number\n", 0);
	ft_printf("this %o number\n", 0);
	printf("|%#2.7o|\n", 3267);
	ft_printf("|%#2.7o|\n", 3267);
	printf("|%.3o|\n", 938862);
	ft_printf("|%.3o|\n", 938862);
	printf("|%08.5o|\n", 0);
	ft_printf("|%08.5o|\n", 0);
	printf("|%011.3o|\n", 938862);
	ft_printf("|%011.3o|\n", 938862);
	printf("|%037lo|\n", ul_pos_1);
	ft_printf("|%037lo|\n", ul_pos_1);

	printf("|%#5.0o|\n", 0);
	ft_printf("|%#5.0o|\n\n\n", 0);
	printf("|%o|\n", 0);
printf("|%0o|\n", 0);
printf("|%0.o|\n", 0);
printf("|%0.0o|\n", 0);
printf("|%#o|\n", 0);
printf("|%#0o|\n", 0);
printf("|%#0.o|\n", 0);
printf("|%#0.0o|\n", 0);
printf("|%#3.0o|\n", 0);
printf("|%#3.1o|\n", 0);
printf("|%#3.6o|\n", 0);
printf("|%#.1o|\n", 0);
printf("|%#o|\n", 4);
printf("|%#0o|\n", 4);
printf("|%#0.o|\n", 4);
printf("|%#0.0o|\n\n", 4);
printf("|%#3.0o|\n", 4);
printf("|%#3.1o|\n", 4);
printf("|%#3.2o|\n", 4);
printf("|%#3.3o|\n", 4);
printf("|%#3.4o|\n", 4);
printf("|%#.1o|\n", 4);
printf("|%#3.0o|\n", 4912350);
	printf("|%#3.1o|\n", 4912350);
	printf("|%#3.2o|\n", 4912350);
	printf("|%#3.3o|\n", 4912350);
	printf("|%#3.4o|\n", 4912350);
	printf("|%#.1o|\n", 4912350);
printf("---------x----------\n");

	printf("ret : %d\t", printf("|%x|\n", 0)-3);
	printf("ret : %d\t", printf("|%0x|\n", 0)-3);
	printf("ret : %d\t", printf("|%0.x|\n", 0)-3);
	printf("ret : %d\t", printf("|%0.0x|\n", 0)-3);
	printf("ret : %d\t", printf("|%#x|\n", 0)-3);
	printf("ret : %d\t", printf("|%#0x|\n", 0)-3);
	printf("ret : %d\t", printf("|%#0.x|\n", 0)-3);
	printf("ret : %d\t", printf("|%#0.0x|\n", 0)-3);

	printf("ret : %d\t", printf("|%#3.0x|\n", 0)-3);
	printf("ret : %d\t", printf("|%#3.1x|\n", 0)-3);
	printf("ret : %d\t", printf("|%#3.6x|\n", 0)-3);
	printf("ret : %d\t", printf("|%#.1x|\n", 0)-3);
	printf("ret : %d\t", printf("|%#x|\n", 4)-3);
	printf("ret : %d\t", printf("|%#0x|\n", 4)-3);
	printf("ret : %d\t", printf("|%#0.x|\n", 4)-3);
	printf("ret : %d\t", printf("|%#0.0x|\n", 4)-3);

	printf("ret : %d\t", printf("|%#3.0x|\n", 4)-3);
	printf("ret : %d\t", printf("|%#3.1x|\n", 4)-3);
	printf("ret : %d\t", printf("|%#3.2x|\n", 4)-3);
	printf("ret : %d\t", printf("|%#3.3x|\n", 4)-3);
	printf("ret : %d\t", printf("|%#3.4x|\n", 4)-3);
	printf("ret : %d\t", printf("|%#.1x|\n", 4)-3);
	printf("ret : %d\t", printf("|%#3.0x|\n", 4912350)-3);
	printf("ret : %d\t", printf("|%#3.1x|\n", 4912350)-3);
	printf("ret : %d\t", printf("|%#3.2x|\n", 4912350)-3);
	printf("ret : %d\t", printf("|%#3.3x|\n", 4912350)-3);
	printf("ret : %d\t", printf("|%#3.4x|\n", 4912350)-3);
	printf("ret : %d\t", printf("|%#.1x|\n", 4912350)-3);
printf("---------x----------\n");


	printf("|%#.5o|\n", 21);
	ft_printf("|%#.5o|\n", 21);

	printf("|%o|\n", 0);
	printf("|%#-8.5o|\n", 34);
	ft_printf("|%#-8.5o|\n", 34);
	printf("|%#2.7o|\n", 3267);
	ft_printf("|%#2.7o|\n", 3267);
	printf("|%*.*s|\n", 20, 5, "hellohello");
	ft_printf("|%*.*s|\n", 20, 5, "hellohello");

	char *aws = "abse";
	printf("%p\n", aws);
	ft_printf("%p\n", aws);
	printf("%p\n", NULL);
	ft_printf("%p\n", NULL);

	ft_printf("now is %k");
	// leaks test!!!
	// while(1)
	// 	sleep(1);
	// leaks test!!!



	return (0);
}

