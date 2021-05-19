#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//chuong trinh in bao cao ton kho san pham

//1. dinh nghia kieu cau truc San pham [struct PRODUCT]
struct PRODUCT{
	char id[10];
	char name[31];
	float price;
	int qoh;
};

//2. dinh nghia ten rut gon cho cau truc San pham [SANPHAM]
typedef struct PRODUCT SANPHAM;


int main(){
	
	//nhap n (so luong san pham muon quan ly)
	int n;	
	do{
		printf(" Nhap so luong san pham [2-10] : ");
		scanf("%d", &n);
		if(n>=2 && n<=10){
			break; // nhap dung gia tri -> thoat vong lap !
		}
		printf(" >> so luong ko hop le, vui long nhap lai ! \n");
	}while(1);
	
	
	//khai bao mang co n-san pham [ds]
	SANPHAM ds[n];
	
	//nhap du lieu cho n-san pham
	printf("\n Nhap du lieu cho %d san pham.", n);
	for(int i=0; i<n; i++){
		fflush(stdin);	
		printf("\n >> San pham thu %d : \n", i+1);
		printf("  id: "); gets(ds[i].id);
		printf("  ten: "); gets(ds[i].name);
		printf("  don gia: "); scanf("%f", &ds[i].price);
		printf("  so luong ton kho: "); scanf("%d", &ds[i].qoh);			
	}
	
	
	//in bao cao ton kho
	printf("\n\n bao cao ton kho \n");
	//dong tieu de cua bao cao
	printf("%-8s %-20s %-10s %-10s %-10s \n","Ma so", "Ten san pham", 
	"Don gia","So luong", "Tri gia");
	
	//in chi tiet 
	float sum = 0;
	for(int i=0; i<n; i++){
		printf("%-8s %-20s %10.2f %10d %10.2f \n",ds[i].id, ds[i].name, 
		ds[i].price,ds[i].qoh, ds[i].price*ds[i].qoh);
		
		sum += (ds[i].price*ds[i].qoh);
	}
	
	printf("\n >> Tri gia ton kho tong cong : %.2f \n", sum);
	
}

