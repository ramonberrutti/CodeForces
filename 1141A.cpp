#include <iostream>

int main()
{
    int m, n, c, mn;
    std::cin >> n;
    std::cin >> m;

    c = -1;

    if (m % n == 0)
    {
        c = 0;
        mn = m / n;

        while (mn % 2 == 0)
        {
            mn /= 2;
            c++;
        }

        while (mn % 3 == 0)
        {
            mn /= 3;
            c++;
        }

        if (mn != 1)
        {
            c = -1;
        }
    }

    std::cout << c;
}
