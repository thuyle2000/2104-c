#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double fn_factorial(int n);
double fn_isPrime(int n);

int main(){
	//khai bao 1 con tro ham
	double (*f)(int);
	
	int n;
	printf("nhap 1 so nguyen : ");
	scanf("%d", &n);
	
	f = fn_factorial;   // gan dia chi cua ham fn_factorial cho f
	
	double kq = f(n);
	printf(" >> %d! = %.0f \n", n, kq);
	
	f = fn_isPrime;	// gan dia chi cua ham fn_isPrime cho f
	kq = f(n);
	if(kq == 1){
		printf(" >> %d la so NGUYEN TO ! \n", n);
	}
	else
	{
		printf(" >> %d la so HOP SO ! \n", n);
	}
}

double fn_factorial(int n)
{
	double r = 1;
	
	for(int i=2; i<=n; i++){
		r *= i;
	}
	
	return r;
}

double fn_isPrime(int n)
{
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
	
}
