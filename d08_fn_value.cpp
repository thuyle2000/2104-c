#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float ptb1(int a, int b);
int main(){
	
	printf(" >> Giai phuong trinh ax+b = 0 \n");
	int a, b;
	
	do{
		printf(" nhap he so a (#0) : ");
		scanf("%d", &a);
		
		if(a!=0) break; //nhap dung -> thoat vong lap
		
	}while(1);
	
	printf(" nhap he so b: ");
	scanf("%d", &b);
	
	float r = ptb1(a,b);
	printf(" Nghiem cua PT %dx + %d = 0, x = %.2f \n",a, b, r );
}

//dinh nghia ham giai phuong trinh bac 1 ax+b = 0
float ptb1(int a, int b)
{
	float x = -(float)b/a;
	a = 100;
	b = 200;
	return x;
} 
