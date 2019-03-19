#include <stdio.h>
#include <limits.h>
// // #include "ft_printf.h"

// typedef enum {
// 	c_TYPE = 1 << 0,
// 	s_TYPE = 1 << 1,
// 	p_TYPE = 1 << 2,
// 	d_TYPE = 1 << 3,
// 	i_TYPE = 1 << 4,
// 	o_TYPE = 1 << 5,
// 	u_TYPE = 1 << 6,
// 	x_TYPE = 1 << 7,
// 	X_TYPE = 1 << 8,
// 	f_TYPE = 1 << 9,
// 	h_LENGTH = 1 << 10,
// 	hh_LENGTH = 1 << 11,
// 	l_LENGTH = 1 << 12,
// 	ll_LENGTH = 1 << 13,
// 	L_LENGTH = 1 << 14,
// }				flag_specifier;

int main(){
// // 	// printf("%llu\n", 9223372036854775809);
// // 	// 자료형 > 실제 변수
// // 	// printf("%ld\n", INT_MAX); //warning:  format specifies type 'long' but the argument has type 'int'
// // 	// 2147483647 <- 프린트는 잘 됨
// // 	// 변수를 입력을 해보면?
// // 	// long int a = INT_MAX;
// // 	// printf("%d\n", a); //뭐지 이게 잘못된거라구 나오네
// // 	// printf("%ld\n", a);
// // 	// 흠...무엇??
// // 	// test.c:11:17: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
// //     //     printf("%d\n", a);
// //     //             ~~     ^
// //     //             %ld
// // 	// 1 warning generated.
// // 	// 2147483647
// // 	// 2147483647

// // 	// 자료형 < 실제 변수
// // 	// printf("%d\n", LONG_MAX); //warning: format specifies type 'int' but the argument has type 'long'
// // 	// -1 <- 프린트가 되지 않음
// // 	// 변수를 입력을 해보면?
// // 	// int a = LONG_MAX;
// // 	// printf("%d\n", a); // -1
// // 	// printf("%ld\n", a); // warning: format specifies type 'long' but the argument has type 'int'
// // 	// // 4294967295 임의의 숫자임
// // 	// int b = 214748364713;
// // 	// printf("%d\n", b); // -87
// // 	// printf("%ld\n", b); // 4294967209
// // 	// ㅅㅂ 뭐지 숫자에 따라 나오는 값이 달라짐 ㅋ
	
// // 	// printf("%ld\n", INT_MAX); warning: // format specifies type 'long' but the argument has type 'int'
// // 	// printf("%lx\n", LONG_MAX+INT_MAX);

// // 	// printf("%u", -3); // 4294967293 오류?
// // 	printf("%#f\n", 123.255);
// // 	printf("%*.*f\n", 20, 2, 123.5253262);

// 	// printf("%lld", LONG_MAX + 1);
// 	printf("%d\n", (h_LENGTH | h_LENGTH));
// 	printf("%d\n", hh_LENGTH);

    // short int a = 2651242;
    // printf("%d\n", a);
    // printf("%d\n", 124124124);
    // printf("%hd\n", 254); 
    // printf("%hhd\n", 123);
    // printf("%ld\n", INT_MAX + 5);
    // printf("%lld\n", LONG_MAX + 123);
    // printf("|%-9.4d|\n", -124);
    printf("%023o\n", 12312);
}