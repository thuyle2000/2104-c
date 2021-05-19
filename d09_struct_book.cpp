#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo struct : viet ct quan ly thong tin 1 quyen sach (isbn, tua, tac gia, nxb, lan xuat ban)

//1. dinh nghia kieu du lieu [struct BOOK] - mo ta 1 quyen sach
struct BOOK {
	int ISBN;
	char title[51];
	char author[31];
	char publisher[31];
	int edition;
	float price; 
};

int main(){
	//2. khai bao bien bo nho [b1]- luu tru thong tin cua 1 quyen sach
	struct BOOK b1;
	
	//3. khai bao bien bo nho [b2]- luu tru thong tin cua 1 quyen sach co noi dung cu the
	struct BOOK b2 = {
		1001, "Mot ngan le mot dem", "Mohamet", "NXB Tre", 101, 3.567
	};
	
	//in thong tin quyen sach b2 len man hinh
	printf(" Thong tin sach \n");
	printf(" ISBN : %d \n", b2.ISBN);
	printf(" Tua sach : %s \n", b2.title);
	printf(" Tac gia : %s \n", b2.author);
	printf(" Don gia : %.2f \n", b2.price);
	printf(" Lan XB : %d \n", b2.edition);
	
}

