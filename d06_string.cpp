#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	// chuong trinh nhap ho va ten cua sinh vien
	char firstName[11];  // chua toi da 10 ky tu
	char lastName[21];	// chua toi da 20 ky tu
	
	printf("nhap ho: "); 
	//	scanf("%[^\n]s", lastName);
	gets(lastName);
	
	printf("nhap ten: "); 
	//	scanf("%[^\n]s", firstName);
	gets(firstName);
	
	printf("Ho va ten sinh vien : %s %s \n", lastName, firstName);	
	
}

