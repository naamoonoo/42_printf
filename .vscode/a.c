#include <stdio.h>

int main()
{
	printf("%1$d %2$#x; %3$d %4$#x\n",16,18, 20,21);
	// printf("%1$d %2$#x; %3$d %4$#x",16,18, 20,21);
	// printf("%2$d, %*.*f\n", 10, 4, 2.5, 3);
	printf("%*.*s\n",0, 3, "awefas");
	// printf("|%*.*s| %1$d\n", 20, 3, "awefas");
	// warning: cannot mix positional and non-positional arguments in format string

	// printf("%")

	// printf("%1$s %2$s %3$s %4$s\n", "abc", "abe", "aeg",  1, 3 ,"agws");

	// printf("%*d\n", 3, 4); // width, num
	// printf("%2$*1$d\n", 3, 4);  // width, num
	printf("%s", NULL);
	return(0);
}
