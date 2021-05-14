#include <stdio.h>
#include <conio.h>
#include <string.h>

//session 11.2 : dem so nguyen am trong 1 chuoi van ban

int main(){
	char line[80]; // chuoi chua toi da 79 chars.
	char vowel[11] = "aAeEiIoOuU";
	
	printf("Chuong trinh dem so nguyen am : \n");
	
	printf("Vui long nhap 1 chuoi ky tu: ");
	gets(line);
	
	int count=0;
	int n=strlen(line);
	
	for(int i=0; i<n; i++){		
		if(strchr(vowel,line[i])){
			count++;
		}
	}
	
	printf("Da tim thay [%d] nguyen am trong chuoi [%s] \n", count, line);

}

