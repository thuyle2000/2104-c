#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char ch;
	printf("vui long nhap 1 ky tu: ");
	ch = getch();
	if(ch >='0' && ch <='9'){
		printf("\n %c la 1 ky so ! \n", ch);
	}
	else{
		printf("\n %c khong phai la ky so ! \n", ch);
	}
}

