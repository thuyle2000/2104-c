#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	printf("Demo nested for \n");
	int n ;
	
	printf("nhap so dong cua HCN : ");
	scanf("%d", &n);
	
	printf("\n Hinh chu nhat \n");
	for(int i=0; i<n ; i++){
		printf("\n");
		for(int j=0; j<n ; j++){
			printf("* ");
		}
	}
	
	printf("\nHinh tam giac \n");
	for(int i=0; i<n ; i++){
		printf("\n");
		for(int j=0; j<i ; j++){
			printf("* ");
		}
	}
	
	
	printf("\nHinh tam giac so \n");
	for(int i=0; i<n ; i++){
		printf("\n");
		for(int j=1; j<=i ; j++){
			printf("%d ", j);
		}
	}
	
}

