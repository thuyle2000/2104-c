#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char names[31];
	int basic;
	float daper, bonper, loandet;
	
	printf("chuong trinh tinh luong \n");
	
	printf("nhap ten cua NV: "); 
	scanf("%[^\n]s", names);
	
	printf("nhap luong CB: "); scanf("%d", &basic);
	printf("nhap ti le phu cap da: "); scanf("%f", &daper);
	printf("nhap ti le hoa hong : "); scanf("%f", &bonper);
	printf("nhap khoan phai tru : "); scanf("%f", &loandet);
	
	float salary = basic + basic*daper/100 + basic*bonper/100 - loandet;
	
	printf("\n *** Bang luong ca nhan *** \n");
	printf("%-30s %7s %10s \n","Name", "Basic", "Salary");
	printf("%-30s %7d %10.2f \n",names, basic, salary);
	
}

