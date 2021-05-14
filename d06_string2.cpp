#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char fullname[31]; // chua toi da 30 ky tu
	char name[11];		 // chua toi da 10 ky tu
	
	printf("nhap day du cua nhan vien: ");
	gets(fullname);
	
	printf("nhap ten nhan vien: ");
	gets(name);
	
	printf("Ho va ten nhan vien: %s \n", fullname);
	printf("bao gom %d ky tu \n", strlen(fullname));
	
	if(strstr(fullname, name)){
		printf(">> tim thay [%s] trong [%s] \n", name, fullname);
	}
	else{
		printf(">> ko tim thay [%s] trong [%s] \n", name, fullname);
	}
	
}

