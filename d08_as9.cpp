#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

void printOdd();
void printDivisor();
void printEven();
long sumSquare(int n);
void Armstrong();


int main() {
	int op=0;
	int n;
	
	do {
		system("cls");		//xoa man hinh
		printf(" >> MENU << \n");
		printf(" 1. Cac so le <= N \n");
		printf(" 2. Cac uoc so cua N \n");
		printf(" 3. Cac uoc so chan cua N \n");
		printf(" 4. In va tinh tong binh phuong cac so <= N \n");
		printf(" 5. Kiem tra so Armstrong \n");
		printf(" 6. Ket thuc chuong trinh \n");

		printf(" vui long nhap ma so chuc nang [1-6]: ");
		scanf("%d", &op);

		switch(op) {
			case 1:
				printOdd();
				break;
			case 2:
				printDivisor();
				break;
			case 3:
				printEven();
				break;
			case 4:
				printf("\n nhap so nguyen N: ");
				scanf("%d", &n);
				
				printf(" => Tong = %d \n", sumSquare(n) );
				break;
			case 5:
				Armstrong();
				break;
			case 6:
				return 0;
		}

		getche();

	} while(1);


}

void printOdd() {
	system("cls"); //xoa man hinh

	int n;
	printf(" nhap 1 so nguyen bat ky : ");
	scanf("%d", &n);

	printf("\n *** Cac so le <= %d *** \n", n);
	for(int i=1; i<=n; i+=2) {
		printf(" %d, ", i);
	}
}

void printDivisor() {
	system("cls"); //xoa man hinh

	int n;
	printf(" nhap 1 so nguyen bat ky : ");
	scanf("%d", &n);

	printf("\n *** Cac uoc so cua cua %d *** \n", n);
	for(int i=1; i<n; i++) {
		if(n%i==0) {
			printf(" %d, ", i);
		}
	}
	printf(" %d \n", n);
}

void printEven() {
	system("cls"); //xoa man hinh

	int n;
	printf(" nhap 1 so nguyen bat ky : ");
	scanf("%d", &n);

	printf("\n *** Cac uoc so chan cua cua %d *** \n", n);
	int count = 0;
	for(int i=2; i<=n/2; i+=2) {
		if(n%i==0) {
			printf(" %d, ", i);
			count++;
		}
	}
	if(n%2 == 0){
		printf(" %d, ", n); 
		count++;
	}
	printf("\n >> Co %d uoc so chan cua %d \n", count, n);
}


long sumSquare(int n){
	
	long sum = 0;
	for(int i= 1; i<=n; i++){
		printf(" %d, ", i*i);
		sum = sum + i*i;
	}
	return sum;
}

void Armstrong(){
	system("cls"); //xoa man hinh

	int n;
	printf(" nhap 1 so nguyen bat ky : ");
	scanf("%d", &n);	
	
	//dem so ky so
	int cnt=0;
	int temp=n;
	do{
		temp = temp/10;
		cnt++;
	}while(temp>0);
	
	
	
	//tinh tong luy thua-cnt
	int sum=0;
	int digit;
	temp=n;
	do{
		digit = temp%10;
		sum = sum + pow(digit,cnt);		
		temp = temp/10;
	}while(temp>0);
	
	
	//ket luan
	if(sum==n){
		printf(" >> %d la so Armstrong. \n", n);
	}
	else{
		printf(" >> %d KO PHAI la so Armstrong. \n", n);
	}
}

