#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c, D, x1, x2;
    std::cin >> a >> b >> c;
    D = pow(b, 2) - 4 * a * c;
    if (D > 0)
    {
        x1 = (b + sqrt(D)) / 2;
        x2 = (b - sqrt(D)) / 2;
        std::cout << "2 �����: " << x1 << " � " << x2;
        return 0;
    }
    else if (D == 0)
    {
        x1 = b / 2;
        std::cout << "1 ������: " << x1;
        return 0;
    }
    else
    {
        std::cout << "��� ������";
        return 0;
    }
}