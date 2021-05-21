#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DATE {
	int dd;
	int mm;
	int yy;
};

struct EMPLOYEE {
	char id[10];
	char name[31];
	int salary;
	struct DATE joinDate;
};

typedef struct EMPLOYEE NV;

void EmployeeCP();

int main() {
	EmployeeCP();
}

void EmployeeCP() {
	int n;

	do {
		printf("Nhap so luong nhan vien muon quan ly : ");
		scanf("%d", &n);

		if(n>1 && n<100) {
			break; // thoat khoi vong lap neu nhap dung
		}

		printf(">> so lieu ko hop le ! vui long nhap lai [4-99] !\n");

	} while(1);

	//khai bao mang nhan vien [ds] co n-phan tu
	NV ds[n];


	//nhap du lieu cho n-nhan vien
	for(int i=0; i<n; i++) {
		printf("**********************\n");
		printf("Nhap vao thong tin nhan vien thu %d \n",i+1);

		fflush(stdin);
		printf(" ID: ");
		scanf("%s",ds[i].id);

		fflush(stdin);
		printf(" Ten: ");
		scanf("%[^\n]s",ds[i].name);

		printf(" Luong: ");
		scanf("%d",&ds[i].salary);

		printf(" Ngay vao lam Cty : \n");
		printf(" ngay: ");
		scanf("%d",&ds[i].joinDate.dd);
		printf(" thang: ");
		scanf("%d",&ds[i].joinDate.mm);
		printf(" nam: ");
		scanf("%d",&ds[i].joinDate.yy);
	}


	//xuat ds n-nhan vien len man hinh
	printf("\n Danh sach nhan vien ");
	printf("\n=====================\n");
	for(int i=0; i<n; i++) {
		printf(">> Nhan vien thu %d \n", i+1);
		printf("  ID: %s \n", ds[i].id);
		printf("  Ten: %s \n", ds[i].name);
		printf("  Luong: %d \n", ds[i].salary);
		printf("  Ngay vao lam CTY: %d-%d-%d \n",
		       ds[i].joinDate.dd,ds[i].joinDate.mm,ds[i].joinDate.yy);
	}

	//tang luong cho nhan vien co muc luong < 5000
	for(int i=0; i<n; i++) {
		if(ds[i].salary<=2000) {
			ds[i].salary *= 1.15;
		} else if(ds[i].salary<=5000) {
			ds[i].salary = ds[i].salary + ds[i].salary*0.1;
		}
	}

	//xuat ds n-nhan vien len man hinh
	printf("\n Danh sach nhan vien sau khi dieu chinh luong ");
	printf("\n=============================================\n");
	for(int i=0; i<n; i++) {
		printf("  %-5s ", ds[i].id);
		printf("  %-20s ", ds[i].name);
		printf("  %5d ", ds[i].salary);
		printf("  %02d-%02d-%4d \n",
		       ds[i].joinDate.dd,ds[i].joinDate.mm,ds[i].joinDate.yy);
	}

	//in danh sach nv lam viec tren 10 nam
	printf("\n Danh sach nhan vien co tham nien cong tac >=10 nam ");
	printf("\n===================================================\n");
	int cntNV10 =0;
	int year = 2021;

	for(int i=0; i<n; i++) {
		if(2021-ds[i].joinDate.yy >=10 ) {
			printf("  %-5s ", ds[i].id);
			printf("  %-20s ", ds[i].name);
			printf("  %5d ", ds[i].salary);
			printf("  %02d-%02d-%4d \n",
			       ds[i].joinDate.dd,ds[i].joinDate.mm,ds[i].joinDate.yy);
			
			cntNV10++;
		}
	}
	
	if(cntNV10 ==0 ){
		printf(" >>> Ko co Nhan vien lam viec tren 10 nam !!! \n");
	}
	else{
		printf(" >>> Co %d Nhan vien lam viec tren 10 nam !!! \n", cntNV10);
	}

}

