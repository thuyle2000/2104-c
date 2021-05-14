#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char ch;
	printf("vui long nhap 1 ky tu: ");
	ch = getchar();
	if(ch >='0' && ch <='9'){
		printf("%c la 1 ky so ! \n", ch);
	}
}

