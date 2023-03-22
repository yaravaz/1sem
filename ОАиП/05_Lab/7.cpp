#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_CTYPE, "Rus");
	int count = 0;
	for (int k = 1; k < 10; k++)
	{
		for (int o = 0; o < 10; o++)
		{
			for (int t = 0; t < 10; t++)
			{
				if ((100 * k + 10 * t + o) + (100 * k + 10 * o + t) == (100 * t + 10 * o + k))
				{
					cout << k << t << o << "+" << k << o << t << "=" << t << o << k;
					count = 1;
				}	
			}	
		}
	}
	if (count == 0)
		printf("нет решений");
	return 0;
}