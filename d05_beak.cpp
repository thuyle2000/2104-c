#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int pwd = 1234;
	int pincode;
	
	for(int i=0; i<4; i++){
		printf("nhap vao pin code: ");
		scanf("%d", &pincode);
		if(pincode == pwd){
			break;	// thoat khoi vong lap FOR -> den dong lenh 21
		}
		
		if(i==3) {
			printf("Ban da nhap sai 4 lan ! TK se bi khoa !");
			exit(0);
			//return 0;  // ket thuc chuong trinh !
		}
		else{
			printf("pin code khong hop le. vui long nhap lai !\n");
		}
	}
	
	printf(">> chuc mung ban da giai ma thanh cong ! \n");
	
}

