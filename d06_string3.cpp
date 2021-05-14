#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//chuong trinh nhap va in ra in cua n ban sinh vien
	
	int n;
	printf("nhap vo so sinh vien muon nhap ten: ");
	scanf("%d", &n);
	fflush(stdin);
	
	//khai bao mang chua ten cua n-ban sinh vien, do dai ten toi da la 30 ky tu
	char list[n][31];
	
	//vong lap nhap ten cua n-sinh vien
	for(int i=0; i<n; i++){
		printf("nhap ten cua sinh vien thu %d: ", i+1);
		gets(list[i]);
	}
	
	//vong lap in ra bang ten cua n-sinhvien
	printf("\n *** Danh sach Sinh Vien *** \n");
	for(int i=0; i<n ; i++){
		printf(" %s \n", list[i]);
	}
}

