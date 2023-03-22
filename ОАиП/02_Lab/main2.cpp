#include <iostream>

void main()
{
    double t = 6, y = -1.2, x = 0.4e-6, p, q;
    p = 2.6 * t + cos(y / (3 * x + y));
    q = sin(t) / cos(t);
    std::cout << "p=" << p;
    std::cout << " q=" << q;
}
