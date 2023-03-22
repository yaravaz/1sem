#include <iostream>
using namespace std;

int main()
{
    int byn = 100, count = 0, c50, c20, c5, c2;
    for (c50 = 0; c50 <= 50; c50++)
    {
        for (c20 = 0; c20 <= 20; c20++)
        {
            for (c5 = 0; c5 <= 5; c5++)
            {
                for (c2 = 0; c2 <= 2; c2++)
                {
                    if (byn == (c50 * 2 + c20 * 5 + c5 * 20 + c2 * 50))
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d", count);
}