#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Rus");
	int a, b, c, k;
	printf("������� �:"); scanf_s("%d", &a);
	printf("������� b:"); scanf_s("%d", &b);
	printf("������� c:"); scanf_s("%d", &c);
	k = 0;
	if (a % 2 == 0)
		k ++ ;
	if (b % 2 == 0)
		k ++ ;
	if (c % 2 == 0)
		k ++ ;
	if (k >= 2)
		printf("YES");
	else
		printf("NO");
}