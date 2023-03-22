#include <iostream>

void main()
{
    double w, s, v, a = 1.5, j = 4, b = -8.1, t = 4 * pow(10, -8);
    s = sqrt(t * a / t + 1) + 4 * exp(2 * b);
    w = s * a/(1 + 0.1 * a);
    v = s + j * sqrt(pow(a,2) + pow(b,2));
    std::cout << "s=" << s;
    std::cout << " w=" << w;
    std::cout << " v=" << v;
}