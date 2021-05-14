#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//demo pointer va array
	
	int a[5] = {20, 100, 8, 10, 9};
	
	int *p = a; //chua dia chi cua mang a
	
	//in ra cac phan tu cua mang a[] thong qua con tro p
	for(int i=0; i<5; i++){
		printf("%d ", *p);
		p++;
	}
	
//	p--;
//	printf("\n\n");
//	for(int i=0; i<5; i++){
//		printf("%X: %d \n", p, *p);
//		p--;
//	}
		
	
	p -= 5;
	printf("\n\n");
	for(int i=0; i<5; i++){
		printf("%X: %d \n", p, *p);
		p++;
	}
	
	
}

