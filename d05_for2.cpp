#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int max;
	printf("vui long nhap so max: ");
	scanf("%d", &max);
	
	for(int i=0, j=max; i<max; i++, j--){
		printf("%3d,  %3d \n", i,j);
	}
	
	printf("\n");
	
	for(int i=0, j=max; i<max; i++, j--){
		printf("%3d + %3d = %3d \n", i,j, i+j);
	}	
}

