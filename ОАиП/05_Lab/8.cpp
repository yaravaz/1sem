#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Rus");
	printf("¬ведите число: ");
	int n, count = 0, a, b, c;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		count = 0;
		for (int j = 1; j <= i; j++)
			if (i % j == 0)
				count++;
		if (count == 2)
		{
			count = 0;
			if (i > 0 && i <= 9)
			{
				for (int j = 1; j <= i; j++)
					if (i % j == 0)
						count++;
				if (count == 2)
					printf("%d\n", i);
			}
			if (i >= 10 && i <= 99)
			{
				b = i % 10;
				a = (i - b) / 10;
				for (int j = 1; j <= (b * 10 + a); j++)
					if ((b * 10 + a) % j == 0)
						count++;
				if (count == 2)
					printf("%d\n", i);
			}
			if (i >= 100 && i <= 999)
			{
				c = i % 10;
				b = ((i - c) / 10) % 10;
				a = (i - (b * 10 + c)) / 100;
				for (int j = 1; j <= (c * 100 + b * 10 + a); j++)
					if ((c * 100 + b * 10 + a) % j == 0)
						count++;
				if (count == 2)
				{
					count = 0;
					for (int j = 1; j <= (a * 100 + c * 10 + b); j++)
						if ((a * 100 + c * 10 + b) % j == 0)
							count++;
					if (count == 2)
					{
						count = 0;
						for (int j = 1; j <= (b * 100 + a * 10 + c); j++)
							if ((b * 100 + a * 10 + c) % j == 0)
								count++;
						if (count == 2)
						{
							count = 0;
							for (int j = 1; j <= (b * 100 + c * 10 + a); j++)
								if ((b * 100 + c * 10 + a) % j == 0)
									count++;
							if (count == 2)
							{
								count = 0;
								for (int j = 1; j <= (c * 100 + a * 10 + b); j++)
									if ((c * 100 + a * 10 + b) % j == 0)
										count++;
								if (count == 2)
									printf("%d\n", i);
							}
						}
					}
				}
			}
		}
	}
}