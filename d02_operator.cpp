#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	int x=10, y=3;
	int z = x+y;
	
	printf("Cac phep toan so hoc co ban \n");
	printf("%d + %d = %d \n", x, y, z);
	z = x-y;
	printf("%d - %d = %d \n", x, y, z);
	
	printf("%d * %d = %d \n", x, y, x*y);
	printf("%d / %d = %d \n", x, y, x/y);
	printf("%d %% %d = %d \n", x, y, x%y);
	
	printf("\nPhep toan tang (++) \n");
	z = x++;
	printf("x = %d , z = %d \n", x, z);
	z = ++x;
	printf("x = %d , z = %d \n", x, z);
	
	//x++;
	printf("\nType Casting\n");
	printf("%d / %d = %f \n", x, y, (float)++x/y);
}

