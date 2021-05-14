#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	// tao 1 bien array , ten mark, chua diem thi cua 5 mon hoc - diem thi cua tung mon tu 0-100
	int mark[5]; // mark[0], mark[1], mark[2], ... mark[4]
	
	//vong lap nhap diem thi cua 5 mon hoc
	for(int i=0; i<5; i++){
		printf("nhap vao diem thi thu %d: ", i+1);
		scanf("%d", &mark[i]);
	}
		
	//in ra diem thi cua 5 mon hoc
	for(int i=0; i<5; i++){
		printf("diem thi thu %d : %d \n", i+1, mark[i]);
	}
	
}

