#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	//CHUONG TRINH TIM SO FIBONACCI THU N : 0,1,1,2,3,5,8,13,21,34 …
	int n;
	printf("Chuong trinh tim so Fibonacci: 0,1,1,2,3,5,8,13,21,34 … \n");
	
	printf("nhap 1 so nguyen >=0 : "); 
	scanf("%d", &n);
	
	int f0 = 0, f1=1, fn = 1;
	if(n<0) {
		printf("n khong hop le ! \n");
		return 0; //ket thuc chuong trinh
	}
	
	if(n==0){
		fn = f0;
	}
	else {
		for(int i=1; i<n; i++){
			fn = f1 + f0;
			f0 = f1;
			f1 = fn;
		}
	}
	printf("So fibonacci thu %d = %d !\n", n, fn);
}

