#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// demo thuat toan bubble sort
int main() {
	
	//nhap n (so phan tu cua day so muon sap xep thu tu )
	int n;
	do {
		printf(" Nhap n [5-100] : ");
		scanf("%d", &n);
		if(n>=5 && n<=100) {
			break; // nhap dung gia tri -> thoat vong lap !
		}
		printf(" >> n ko hop le, vui long nhap lai ! \n");
	} while(1);
	
	
	//khai bao mang so nguyen [a] co n phan tu
	int a[n];
	
	//viet vong tao ngau nhien n-so nguyen luu vo bien mang a[] (10-200)
	for(int i=0; i<n; i++){		 
		a[i] = 10 + rand()%190 ;  //a[i] = [10-200]
	}
	
	//in mang a[]
	printf("\n >> day so vua tao: \n");
	for(int i=0; i<n; i++){		
		printf("%d  ", a[i]);
	}
	
	//sap xep mang theo thu tu tang dan 
	int temp;
	for(int i=0; i<n-1; i++){
		for(int j=n-1; j>i; j--){
			if(a[j] < a[j-1]){
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	
	//in mang a[]
	printf("\n >> day so sau khi sap xep: \n");
	for(int i=0; i<n; i++){		
		printf("%d  ", a[i]);
	}
}

