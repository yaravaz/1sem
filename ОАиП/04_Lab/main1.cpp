#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Rus");
	int a, b, c, k;
	printf("¬ведите а:"); scanf_s("%d", &a);
	printf("¬ведите b:"); scanf_s("%d", &b);
	printf("¬ведите c:"); scanf_s("%d", &c);
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