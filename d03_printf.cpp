#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	int n = 60;
	
	printf("Chuong trinh in so nguyen [n] \n");
	printf("He thap phan : %d \n", n);
	printf("He thap luc phan : %x, %X \n", n, n);
	printf("He bat phan : %o \n", n);
	
	
	char ch = 'A';  //khai bien ch chua 1 ky tu.
	printf("\nChuong trinh in ky tu [ch] \n");
	printf("Ky tu : %c \n", ch);
	printf("Ma ascii cua [%c] la [%d] \n", ch, ch);
	
	
	//khai bao bien names chua 1 chuoi nhieu ky tu (toi da 30 ky tu)
	char names[31] = "Truong Thanh Nghia";
	printf("\nChuong trinh in chuoi ky tu [names] \n");
	printf("Hello, Mr. %s \n", names);

}

