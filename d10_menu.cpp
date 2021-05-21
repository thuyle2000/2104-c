#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void Q1();
void Q2();
int main(){
	int op = 1;
	do{
		system("cls");
		fflush(stdin);
		
		printf("\n**************************************************");	
		printf("\n*    Selecting appropriate action:               *");
		printf("\n* 1. Question 1                                  *");
		printf("\n* 2. Question 2                                  *");
		printf("\n* 3. Quit Program                                *");
		printf("\n**************************************************");
		printf("\n Please input function code [1-3]: ");

		scanf("%d", &op);
		switch(op){
			case 1: Q1(); break;
			case 2: Q2(); break;
			case 3: return 0;
			default:
				printf(" >> Invalid function code ! ");
		}
		getche();
		
		
	}while(1);
}

void Q1(){
	printf("\n Ham Q1 : Dang xay dung ... \n");
}

void Q2(){
	printf("\n Ham Q2 : Dang xay dung ... \n");
}
