#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	printf("Chuong trinh thu nghiem cac modifier cua ham printf() \n");
	
	int a= 100,b=10000, c = 100000000;
	printf("[%d], [%d], [%d] \n", a, b, c);
	printf("[%8d] \n", a);
	printf("[%8d] \n", b);
	printf("[%8d] \n\n", c);
	
	printf("[%-8d] \n", a);
	printf("[%-8d] \n\n", b);
	
	printf("[%08d] \n", a);
	printf("[%08d] \n", b);


}

