#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//viet chuong trinh nhap 1 so nguyen bat ky.
	//kiem tra xem so nay co phai la boi so cua 9 hay ko ?
	
	int n;
	printf("vui long nhap 1 so nguyen : ");
	scanf("%d", &n);
	
	if( n%9 == 0 ){
		printf("%d la boi so cua 9 ! \n", n);
	}
	else{
		printf("%d ko phai la boi so cua 9 ! \n", n);
	}
	
	
}

