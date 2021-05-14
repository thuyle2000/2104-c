#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	
	// chuong trinh tinh giai thua n. n!= 1*2*3*4* ... *n
	double gt = 1;
	int n ;
	
	do{
		
		printf("nhap 1 so nguyen >=0 : ");
		scanf("%d", &n);
		
	}while(n<0);
	
	//vong lap tinh giai thua cua n
	for(int i=1; i<=n; i++){
		gt *= i;
	}
	
	printf("Giai thua %d = %.0f \n", n, gt);
	
}

