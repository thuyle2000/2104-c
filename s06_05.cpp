#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char firstname[10];
	char lastname[20];
	
	printf("Nhap ten: ");
	gets(firstname);
	
	printf("nhap ho va ten lot: ");
	gets(lastname);
	
	printf(">> Hello %s %s \n", lastname, firstname);
}

