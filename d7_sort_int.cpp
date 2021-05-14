#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n; // n [3-100]
	
	do{
		printf(" vui long nhap so phan tu [3-100]: ");
		scanf("%d", &n);
		if(n>=3 && n<=100) {
			break; // n la gia tri hop le => thoat vong lap
		}
	}while(1);
	
	//khai bao mang so nguyen n-phan tu
	int a[n];
	
	//vong lap nhap du lieu cho n-phan tu
	for(int i=0; i<n; i++){
		printf(" nhap so thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	
	//in cac phan tu trong mang ra man hinh
	printf("\n\n >> Day so vua nhap : \n");
	for(int i=0; i<n; i++){
		printf(" %d  ", a[i]);
	}
	
	
	//sap xep lai thu tu cua cac phan tu trong day so (giam dan)
	int temp;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}	
	}
	
	printf("\n\n >> Day so sau khi sap xep thu tu : \n");
	for(int i=0; i<n; i++){
		printf(" %d  ", a[i]);
	}
	 
	
}

