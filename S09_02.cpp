#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	// CHUONG TRINH TINH TONG CAC SO LE GIUA 2 SO N1 VA N2
	int n1, n2, sum = 0;
	
	printf("nhap n1: "); scanf("%d", &n1);
	printf("nhap n2: "); scanf("%d", &n2);
	
	int temp;
	if(n1>n2){
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
	//tim so le dau tien >= n1
	int start = (n1%2==1)?n1:n1+1;
	
	//tinh tong le tu start -> n2
	for(int i=start; i<=n2; i+=2) {
		sum += i;
		printf("%3d ", i);
	}
	
	printf("\n Tong cac so le giua [%d, %d]: %d \n", n1, n2, sum);
}

