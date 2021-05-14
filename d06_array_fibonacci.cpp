#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//CHUONG TRINH TIM SO FIBONACCI THU N : 0,1,1,2,3,5,8,13,21,34 …

	printf("Chuong trinh tim so Fibonacci: 0,1,1,2,3,5,8,13,21,34 … \n");
	
	int n;
	printf("nhap 1 so nguyen >=0 : "); 
	scanf("%d", &n);
	
	int fibo[n+1];  // mang chua n+1 phan tu cua day so fibonacci
	fibo[0]=0;
	
	int a[n+1];

	
	if(n==0){
		printf("fibo[0] = %d \n", fibo[0]);
	}
	else if(n==1){
		fibo[1] = 1;
		printf("fibo[1] = %d \n", fibo[1]);
	}
	else{
		fibo[1] = 1;
		for (int i = 2; i<=n; i++){
			fibo[i] = fibo[i-1] + fibo[i-2];
		}
		printf("fibo[%d] = %d \n", n, fibo[n]);		
	}
	
	
}

