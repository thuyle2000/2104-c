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

//1. dinh nghia kieu du lieu [struct ISSUE_NOTE] - mo ta 1 phieu muon sach
struct ISSUE_NOTE {
	char borrower[31];
	char date[15];
	struct BOOK b;
};


int main(){
	
	//2a. khai bao bien bo nho [b]- luu tru thong tin cua 1 quyen sach co noi dung cu the
	struct BOOK b = {
		1001, "Mot ngan le mot dem", "Mohamet", "NXB Tre", 101, 3.567
	};
	
	//2b. khai bao bien bo nho [note]- luu tru thong tin cua 1 phieu muon sach co noi dung cu the
	struct ISSUE_NOTE note = {
		"Nguyen Van Thinh", "2021-05-20", b
	};
	
	
	//3. in thong tin phieu muon sach [note] len man hinh
	printf(" === Thong tin Phieu muon === \n");
	printf("  Doc gia : %s \n", note.borrower);
	printf("  Ngay muon : %s \n", note.date);
		
	//in thong tin quyen sach [b] trong phieu muon
	printf("  Thong tin sach muon \n");
	printf("    ISBN : %d \n", note.b.ISBN);
	printf("    Tua sach : %s \n", note.b.title);
	printf("    Tac gia : %s \n", note.b.author);
	printf("    Don gia : %.2f \n", note.b.price);
	printf("    Lan XB : %d \n", note.b.edition);
	
}

