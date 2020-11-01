#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;


struct NUM
{
	int number; 
};

void fac(int*);
int main()
{

	struct NUM open;
	int amount;
	cout << "Amount array : " ;
	cin >> amount;
	
	open.number = amount;
	
	fac(&open.number);
	
	return 0;
}

void fac(int *n )
{
	
	int Factorial[*n];
	int i;
	for (i = 1 ; i<=*n ; i++)
	{
		int a;
		int sum = 1;
		cout << "Factorial of : ";
		cin >> a;
		cout << "1";
		for (int i = 2; i <= a; i++)

		{
			printf(" x %d ", i);
			sum *= i;
		}
		printf("\nFactorial of %d is %d\n\n", a, sum);
	}
	
}
