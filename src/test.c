#include <stdio.h>
#include <limits.h>

int main(){
	// printf("%llu\n", 9223372036854775809);
	// 자료형 > 실제 변수
	// printf("%ld\n", INT_MAX); //warning:  format specifies type 'long' but the argument has type 'int'
	// 2147483647 <- 프린트는 잘 됨
	// 변수를 입력을 해보면?
	// long int a = INT_MAX;
	// printf("%d\n", a); //뭐지 이게 잘못된거라구 나오네
	// printf("%ld\n", a);
	// 흠...무엇??
	// test.c:11:17: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
    //     printf("%d\n", a);
    //             ~~     ^
    //             %ld
	// 1 warning generated.
	// 2147483647
	// 2147483647

	// 자료형 < 실제 변수
	// printf("%d\n", LONG_MAX); //warning: format specifies type 'int' but the argument has type 'long'
	// -1 <- 프린트가 되지 않음
	// 변수를 입력을 해보면?
	// int a = LONG_MAX;
	// printf("%d\n", a); // -1
	// printf("%ld\n", a); // warning: format specifies type 'long' but the argument has type 'int'
	// // 4294967295 임의의 숫자임
	// int b = 214748364713;
	// printf("%d\n", b); // -87
	// printf("%ld\n", b); // 4294967209
	// ㅅㅂ 뭐지 숫자에 따라 나오는 값이 달라짐 ㅋ
	
	// printf("%ld\n", INT_MAX); warning: // format specifies type 'long' but the argument has type 'int'
	// printf("%lx\n", LONG_MAX+INT_MAX);

	// printf("%u", -3); // 4294967293 오류?
	printf("%#f\n", 123.255);
	printf("%*.*f\n", 20, 2, 123.5253262);
}