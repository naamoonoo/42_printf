#include <stdio.h>
#include <ft_printf.h>
#define	 A fflush(stdout); ft_putstr(" ret: "); ft_putnbr(ret); ft_putchar('\n'); fflush(stdin);

void	write_bits(char *s, void *dst)
{
	int		len;
	int		sum;
	int		i;
	int		d;
	int		ofst;

	i = -1;
	d = 0;
	s = ft_strdup(s);
	while (i < 0 || s[i])
	{
		i++;
		if (s[i] && s[i] <= ' ')
		{
			d = 0;
			while (s[i + d] && s[i + d] <= ' ')
				d++;
			s[i] = s[i + d];
			s[i + d] = ' ';
		}
	}
	len = ft_strlen(s);
	sum = 0;
	i = len - 8;
	d = 0;
	ofst = 0;
	while (i >= 0)
	{
		sum = sum * 2 + s[i + ofst] - '0' ;
		i++;
		if (i % 8 == 0)
		{
			((unsigned char*)dst)[d++] = sum;
			sum = 0;
			i -= 16;
			ofst = 0;
		}
	}
}

int main()
{
int		ret;
float	a;
double	b;
long long pointer = 140732903016832;
long double c = -2.0;

  printf("%#08x", 42);
  printf("%#-08x", 42);
  printf("@moulitest: %#.x %#.0x", 0, 0);
  printf("@moulitest: %.x %.0x", 0, 0);
  printf("@moulitest: %5.x %5.0x", 0, 0);
  printf("%.2s is a string", "this");
  printf("%5.2s is a string", "this");
  printf("%-.2s is a string", "this");
  printf("%-5.2s is a string", "this");
 
  printf("%-05o", 2500);
  printf("@moulitest: %.o %.0o", 0, 0);
  printf("@moulitest: %5.o %5.0o", 0, 0);
  printf("% +d", 42);
  printf("%+ d", 42);
  printf("%  +d", 42);
  printf("%+  d", 42);
  printf("% ++d", 42);
  printf("%++ d", 42);
  printf("%-05d", 42);
  printf("%-05d", -42);
  printf("@moulitest: %.d %.0d", 0, 0);
  printf("@moulitest: %5.d %5.0d", 0, 0);
  printf("% u", 4294967295);

	printf("%5+0d", 10);
	printf("%5+0p", (char*)pointer);
	printf("%17+0p", (char*)pointer);
	printf("%.17+0p", (char*)pointer);
	printf("%p", NULL);
	printf("%.17+21+0p", (char*)pointer);
	printf("what % 03d", 3);
	printf("  ");
	printf("%s, %s,", "shit", "mother fucker");
	printf("%#o", 10);
	printf("%#o", 0);
	printf("%#.3o", 20);
	printf("%#04o", 20);
	printf("%x", (char*)pointer);
	printf("%#X", (char*)pointer);
	printf("%-#20x'", (char*)pointer);
	printf("%#.20x'", (char*)pointer);
	printf("%#17x", (char*)pointer);
	printf("BULLSHIT STARTS HERE\n");
	printf("%#.o", 0);
	printf("%.0o", 0);
	printf("%#.x", 0);
	printf("%#X", 0);
	//printf("%j% % % ");
	printf("%020%");
	printf("%10s is bullshit", NULL);
	printf("%10p is bullshit", NULL);
	printf("%-4.2d'", -1);
	
	write_bits("0 00000000 00000000000000000000000", &a);
	printf("%f", a);
	write_bits("1 00000000 00000000000000000000000", &a);
	printf("%f", a);
	write_bits("0 01111100 00000000000000000000000", &a);
	printf("%.2f", a);
	write_bits("0 11111111 00000000000000000000000", &a);
	printf("%f", a);
	write_bits("1 11111111 00000000000000000000000", &a);
	    printf("%f", a);
	write_bits("1 11111111 10000000000000000000000", &a);
	    printf("%f", a);

	write_bits("1 11110110 10000001001011111001110", &a);
	printf("%f", a);
	write_bits("0 01111101 10011001100110011001101", &a);
	    printf("%.30f", a);
	write_bits("0 10000000 10000000000000000000000", &a);
	    printf("%f", a);
	write_bits("0 01111110 10000000000000000000000", &a);
	    printf("%f", a);
	write_bits("0 1000001000000000000000000000000", &a);
	    printf("%f", a);
	write_bits("0 01111101 00000000000000000000000", &a);
	    printf("%f", a);
	write_bits("00000000 00000000 00000000 00000001", &a);
    printf("%.200f", a);

	
	
	write_bits("0 11111110 00000000000000000000000", &a);
	printf("big: %.2f", a);
	
    write_bits("1 00000000 00000000000000000000001", &a);
    printf("%.149f\n", a);
    write_bits("1 00000000 00000000000000000000001", &a);
    printf("%.148f\n", a);
   write_bits("1 00000000 00000000000000000000001", &a);
    printf("%.147f\n", a);




    write_bits("0 00000000000 \
				0000000000000000000000000000000000000000000000000001", &b);
   	printf("%.1074f", b);
    write_bits("0 00000000000 \
				0000000000000000000000000000000000000000000000000001", &b);
   	printf("%.1073f", b);
  write_bits("0 00000000000 \
				0000000100000000000000000000000000000000000000000001", &b);
   	printf("%.1072f", b);


write_bits("0 00000000000\
		0000000000000000000000000000000000000000000000000000", &b);
   	printf("%.1074f", b);

write_bits("1 00000000000\
	0000000000000000000000000000000000000000000000000000", &b);
   	printf("%.1074f", b);

write_bits("0 11111111111\
	0000000000000000000000000000000000000000000000000000", &b);
   	printf("%.1074f", b);

write_bits("1 11111111111\
	0000000000000000000000000000000000000000000000000000", &b);
   	printf("%.1074f", b);

write_bits("0 11111111111\
	0000000000000000000000000000000000000000000000000001", &b);
   	printf("%.1074f", b);

write_bits("0 11111111111\
	1000000000000000000000000000000000000000000000000001", &b);
   	printf("%.1074f", b);

write_bits("0 11111111111\
	1111111111111111111111111111111111111111111111111111", &b);
   	printf("%.1074f", b);



	printf("big: %.20f", a);
	printf("big: %080f", a);
	a = 99.995;
    printf("%.2f", a);
	a = 99.994;
    printf("%.2f", a);
	a = 0.109375;
    printf("%.5f", a);
	a = 0.328125;
    printf("%010f'", a);
	printf("%-010f'", a);
	printf("% -010f'", a);
	printf("% 010f'", a);
	a = -0.328125;
    printf("%010f'", a);
    printf("%010.3f'", a);
    printf("%010.6f'", a);
	a = 1;
	printf("%.0f", a);
	printf("%#.0f", a);
	a = 1.5;
	printf("%.0f", a);
	printf("%#.0f", a);
	write_bits("1 0111 1111 1111 111	1100 0000  0000 0000  0000 0000 \
 										0000 0000  0000 0000  0000 0000 \
 										0000 0000  0000 0000", &c);
	printf(" %Lf", c);
	write_bits("0 1111 1111 1111 110	1000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0000", &c);
	printf("bigger: %Lf\n", c);



	 write_bits("0 0000 0000 0000 000	0000 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0000", &c);
	printf("zero: %Lf\n", c);
	 write_bits("1 0000 0000 0000 000	0000 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0000", &c);
	printf("-zero: %Lf\n", c);

	 write_bits("1 0000 0000 0000 000	0000 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0001", &c);
	printf("denormal: %.16419Lf\n", c);

	 write_bits("1 0000 0000 0000 000	1100 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0001", &c);
	printf("denormal: %.16419Lf\n", c);

	 write_bits("1 1111 1111 1111 111	0000 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0000", &c);
	printf("-inf: %Lf\n", c);
	 write_bits("1 1111 1111 1111 111	0000 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0001", &c);
	printf("nan: %Lf\n", c);

	 write_bits("1 1111 1111 1111 111	0100 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0000", &c);
	printf("nan: %Lf\n", c);

	 write_bits("1 1111 1111 1111 111	1000 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0000", &c);
	printf("-inf: %Lf\n", c);

	 write_bits("1 1111 1111 1111 111	1010 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0000", &c);
	printf("nan: %Lf\n", c);

	 write_bits("1 1111 1111 1111 111	1100 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0000", &c);
	printf("nan: %Lf\n", c);

	 write_bits("1 1111 1111 1111 111	11100 0000  0000 0000  0000 0000 \
			 							0000 0000  0000 0000  0000 0000 \
										0000 0000  0000 0000", &c);
	printf("nan: %Lf\n", c);

 //printf("%.2c", NULL);



}
