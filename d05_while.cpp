#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	//demo vong lap while
	
	char answer='y';
	int year;
	
	while(answer=='y') {
		printf("vui long nhap nam muon kiem tra: ");
		scanf("%d", &year);
		
		if( (year%4==0 && year%100!=0) || (year%400==0) ){
			printf("%d la nam nhuan \n", year);
		}
		else{
			printf("%d la nam binh thuong \n", year);
		}
		
		fflush(stdin);
		printf("Tiep tuc thu chuong trinh ? [y] ");
		scanf("%c", &answer);
	}
	
}

