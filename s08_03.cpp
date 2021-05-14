#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int a,b,c;
	printf("nhap so thu 1: "); scanf("%d", &a);
	printf("nhap so thu 2: "); scanf("%d", &b);
	printf("nhap so thu 3: "); scanf("%d", &c);
	
	int max = (a>b) ? a : b ; // phep toan dieu kien 3 ngoi
	/*
			if (a>b ) {
				max = a;
			}
			else
			{
			 	max = b;
			}
	*/
	max = (max > c) ? max : c ;
	printf("So lon nhat giua 3 so [%d, %d, %d]: %d \n", a,b,c, max);
}

