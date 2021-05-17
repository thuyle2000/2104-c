#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int ptb2(int a, int b, int c, float &x1, float &x2);

int main(){
	int a, b, c;
	float x1=9, x2=9;
	
	printf(">> Giai phuong trinh bac 2: ax^2 + bx + c = 0 \n");
	printf(" nhap he so a: "); scanf("%d", &a);
	printf(" nhap he so b: "); scanf("%d", &b);
	printf(" nhap he so c: "); scanf("%d", &c);
	
	int kq = ptb2(a,b,c,x1,x2);
	if(kq==-1){
		printf(" Phuong trinh vo nghiem ! \n");
	}
	else if(kq==0){
		printf(" Phuong trinh co nghiem kep, x1 = x2 = %.2f \n", x1);
	}
	else{
		printf(" Phuong trinh co 2 nghiem phan biet : \n");
		printf(" x1 = %.2f, x2 = %.2f \n", x1, x2);
	}
	
}

/*
giai phuong trinh bac 2 : ax^2 + bx + c = 0.
ham tra ve = -1 neu pt vo nghiem
              0 neu co nghiem kep
              1 neu co 2 nghiem phan biet
*/

int ptb2(int a, int b, int c, float &x1, float &x2){
	float delta = b*b - 4*a*c;
	
	if(delta<0){
		return -1; //pt vo nghiem
	}
	else if(delta ==0){
		x1 = x2 = -(float)b/(2*a);
		return 0;
	}
	else{
		x1 = (-b-sqrt(delta))/(2*a);
		x2 = (-b+sqrt(delta))/(2*a);
		return 1;
	}
}

