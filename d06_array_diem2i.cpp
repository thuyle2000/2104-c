#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	// tao 1 bien array , ten mark, chua diem thi cua n mon hoc - diem thi cua tung mon tu 0-100
	int n;
	printf("nhap so mon thi muon nhap diem ( > 1) : ");
	scanf("%d", &n);
	
	int mark[n]; // mark[0], mark[1], mark[2], ... mark[n-1]
	
	//vong lap nhap diem thi cua n mon hoc
	for(int i=0; i<n; i++){
		printf("nhap vao diem thi thu %d: ", i+1);
		scanf("%d", &mark[i]);
	}
		
	//in ra diem thi cua n mon hoc
	int max = mark[0];
	int min = mark[0];	
	int sum = 0;
	
	for(int i=0; i<n; i++){
		printf("diem thi thu %d : %d \n", i+1, mark[i]);
		max = (max < mark[i])?mark[i]:max;
		min = (min > mark[i])?mark[i]:min;
		sum += mark[i];		
	}
	
	printf(" >> diem cao nhat : %d \n", max);
	printf(" >> diem thap nhat: %d \n", min);
	printf(" >> diem binh quan: %.2f \n", (float)sum/n);
	
}

