#include <iostream>
//#include "division.h"
using namespace std;

int main()
{
	int num, dev[20], i = 0, j = 0;
	setlocale(LC_CTYPE, "Rus");
	printf("¬ведите число: ");
	scanf_s("%d", &num);
	while (num > 1) {
		dev[i] = num % 2;
		/*num = division(num);*/
		num = num / 2;
		i++;
	}
	dev[i] = 1;
	for (int j = i; j >= 0; j = j - 1)
	{
		cout << dev[j];
	}
		
}