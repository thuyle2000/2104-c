#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char ch;
	
	printf("Vui long nhap 1 ky tu bat ky : ");
	scanf("%c", &ch);
	if(ch>='0' && ch <='9'){
		printf("%c la ky tu so. \n", ch);
	}
	else if ( (ch>='a'&& ch<='z') || (ch>='A' && ch<='Z') ){
		switch(ch){
			case 'a': case 'e': case 'i': case 'o': case 'u':
			case 'A': case 'E': case 'I': case 'O': case 'U':
				printf("%c la nguyen am. \n", ch); break;
				
			default:
				printf("%c la phu am. \n", ch); break;
		}
	}
	else{
		printf("%c la ky tu dac biet. \n", ch);
	}
	
}

