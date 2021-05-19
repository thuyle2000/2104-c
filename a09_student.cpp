#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct STUDENT {
	char id[10];
	char name[31];
	int mark;
};

typedef struct STUDENT SV;

int main() {

	//nhap n (so luong sinh vien muon quan ly)
	int n;
	do {
		printf(" Nhap so luong sinh vien [3-10] : ");
		scanf("%d", &n);
		if(n>=3 && n<=10) {
			break; // nhap dung gia tri -> thoat vong lap !
		}
		printf(" >> so luong ko hop le, vui long nhap lai ! \n");
	} while(1);


	//khai bao mang ds[] co n-sinh vien
	SV ds[n];

	//nhap du lieu cho n-sinh vien
	printf("\n Nhap du lieu cho %d sinh vien.", n);
	for(int i=0; i<n; i++) {
		fflush(stdin);
		printf("\n >> Sinh vien thu %d : \n", i+1);
		printf("  id: ");
		gets(ds[i].id);
		printf("  ten: ");
		gets(ds[i].name);
		printf("  diem: ");
		scanf("%d", &ds[i].mark);
	}

	//in danh sach sinh vien vua nhap
	printf("\n\n Danh sach sinh vien  \n");
	//dong tieu de cua bao cao
	printf("%-8s %-20s %-6s \n","Ma so", "Ten sinh vien", "Diem");

	//in chi tiet
	for(int i=0; i<n; i++) {
		printf("%-8s %-20s %6d \n",ds[i].id, ds[i].name, ds[i].mark);
	}


	//sap xep mang ds[] theo thu tu giam dan cua cot diem
	SV temp;
	for(int i=0; i<n-1; i++) {
		for(int j=n-1; j>i; j--) {
			if(ds[j].mark > ds[j-1].mark ) {
				temp = ds[j];
				ds[j] = ds[j-1];
				ds[j-1] = temp;
			}
		}
	}
	
	//in danh sach sinh vien sau khi sap xep
	printf("\n\n Danh sach sinh vien sau khi sap xep \n");
	//dong tieu de cua bao cao
	printf("%-8s %-20s %-6s \n","Ma so", "Ten sinh vien", "Diem");

	//in chi tiet
	for(int i=0; i<n; i++) {
		printf("%-8s %-20s %6d \n",ds[i].id, ds[i].name, ds[i].mark);
	}


	//in danh sach top 3 sinh vien co diem cao nhat
	printf("\n\n Danh sach top 3 \n");
	//dong tieu de cua bao cao
	printf("%-8s %-20s %-6s \n","Ma so", "Ten sinh vien", "Diem");

	//in chi tiet
	for(int i=0; i<3; i++) {
		printf("%-8s %-20s %6d \n",ds[i].id, ds[i].name, ds[i].mark);
	}

}

