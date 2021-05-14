#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	//demo vong lap do-while
	//dem so luong cac so nguyen khac 0 duoc nhap vo chuong trinh
	
	int count=0, sum = 0, n;
	do
	{
		printf("vui long nhap 1 so nguyen: ");
		scanf("%d", &n);
		count++;
		sum += n;
	}while(n!=0);
	
	printf("so luong cac cac so nguyen duoc nhap: %d \n", --count);
	printf("tong cua cac so nguyen : %d \n", sum);
	printf("binh quan cua cac so nguyen: %.2f \n", (float)sum/count);
}

