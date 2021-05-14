#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	//chuong trinh tinh tien thuong dua vao bac luong
	char grade ;
	int bonus;
	
	printf("nhap bac luong nhan vien: ");
	scanf("%c", &grade);
	
	switch(grade){
		case 'A': 
		case 'a':
			bonus = 1000; break;
		
		case 'B': 
		case 'b': 
			bonus = 1500; break;
			
		case 'C': 
		case 'c':
			bonus = 3000; break;
				
		case 'D': 
		case 'd':
			bonus = 4000; break;
		default: bonus = 0; break;
	}
	
	printf("Muc thuong la : %d \n", bonus);
}

