#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Rus");
	float c1 = 0,c2 = 0;
	printf("¬ведите кол-во литров в первом сосуде: ");
	scanf_s("%f", &c1);
	printf("¬ведите кол-во литров во втором сосуде: ");
	scanf_s("%f", &c2);
	for (int i = 1; i <= 12; i++)
	{
		c1 = c1 / 2;
		c2 = (c2 + c1) / 2;
		c1 = c1 + c2;
	}
	printf("%4.2f\n%4.2f\n", c1, c2);
}