#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//demo ve continue
	//tinh binh phuong 1 so nguyen duong
	
	float n;
	
	do{
		printf("vui long nhap 1 so nguyen duong >0: ");
		scanf("%f", &n);
		
		if(n<=0)	{
			continue;
		}
		printf("Binh phuong cua %f = %f \n", n, n*n);
		break;
	}while(1); //1 <=> TRUE , 0 <=> FALSE
	
}

