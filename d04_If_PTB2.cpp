#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main(){
	float a,b,c,delta, x1, x2;
	printf("Vui long nhap a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	delta = b*b - 4*a*c;
	if(delta<0){
		printf("\nPhuong trinh vo nghiem");
	}
	else if(delta==0){
		x1 = -b / (2*a);
		printf("\nPhuong trinh co nghiem kep: %f", x1);
	}
	else{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("\nPhuong trinh co 2 nghiem phan biet: \n");
		printf("x1 = %f, x2 = %f", x1, x2);
	}
}

