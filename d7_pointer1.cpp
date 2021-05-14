#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//demo don gian ve con tro (pointer)
	int a = 100;
	float b = 12.345;
	char c = 'w';
	
	//khai bao 3 bien con tro, se chua dia chi cua bien a, b,c
	int *pa;
	float *pb;
	char *pc;
	
	printf("a = %d, b = %f, c = %c \n", a,b,c);
	printf("pa = %d, pb = %d, pc = %d \n", pa,pb,pc);
	
	//	gan dia chi cac bien a,b,c cho pa, pb, pc
	pa = &a;
	pb = &b;
	pc = &c;
	printf("pa = %d, pb = %d, pc = %d \n", pa,pb,pc);
	
	//in gia tri cua cac bien a, b, c thong qua con tro pa,pb,pc
	printf("a = %d, b = %f, c = %c \n", *pa, *pb, *pc);
	
	//thay doi a, b, c thong qua cac con tro pa,pb,pc
	*pa = 200;
	*pb = 3.1415;
	*pc = 'z';
	
	//in gia tri cua cac bien a, b, c 
	printf("a = %d, b = %f, c = %c \n", a,b,c);
	  
}

