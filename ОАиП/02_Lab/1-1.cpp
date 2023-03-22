#include <iostream>

void main()
{
    double s, t, x = 0.1, j = 12, y = 5 * pow(10,-6);
    s = 0.4 * x - 1/ tan(y);
    t = s - sin(s);
    std::cout << "s=" << s;
    std::cout << " t=" << t;
}