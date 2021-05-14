#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	float r,c,s,p;
	
	printf("Nhap ban kinh hinh tron :");
	scanf("%f", &r);
	
	p = 3.14;
	s = p*r*r;
	c = 2*p*r;
	
	printf("Chu vi hinh tron la: %f \n", c);
	printf("Dien tich hinh tron la: %f \n", s);
}

