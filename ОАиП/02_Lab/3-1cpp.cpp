#include <iostream>

void main()
{
    double t, u, k = 6, x = 0.095, r = 5 * pow(10, -7);
    t = tan(x) + r * (1 - log(x));
    u = t/(pow(x,3) + 1)/(1 - exp(k - 4));
    std::cout << "t=" << t;
    std::cout << " u=" << u;
}