#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b); //khai bao ham add()

int main(){
	int x=10, y=100;
	int z = add(x, y); // goi ham add() - x va y la tham so thuc te (actual pararmeter)
	
	printf(" %d + %d = %d \n", x, y, z);	
	
	z = add(x, 15); 	// goi ham add() - x va 15 la tham so thuc te (actual pararmeter)
	printf(" %d + %d = %d \n", x, 15, z);	
	
	z = add(x+5, 15); 	// goi ham add() - x+5 va 15 la tham so thuc te (actual pararmeter)
	printf(" %d + %d = %d \n", x+5, 15, z);
	
	z = add(x+5, add(x,y)); 	// goi ham add() - x+5 va add(x,y) la tham so thuc te (actual pararmeter)
	printf(" %d + %d = %d \n", x+5, add(x,y), z);	
	 
	
}

/*
	dinh nghia ham cong 2 so a,b
	- ten ham : add()
	- tham so hinh thuc: int a, int 
	- ham tra ve 1 so nguyen = a+b (int) 
*/
int add(int a, int b){
	// a va b la tham so hinh thuc (formal parameter)
	 return a+b;
}

