#include <iostream>
#include <cmath> 

int main()
{
    setlocale(LC_ALL, "Russian");

    float value_si, value_sgse{ 0 };
    std::string choice;

    const float c_f = pow(10, 5);
    const float c_e = pow(10, 7);
    const float c_q = 3 * pow(10, 9);

    std::cout << "������� �������� � ��: ";
    std::cin >> value_si;

    std::cout << "�������� �������� ��������(E, F, q): ";
    std::cin >> choice;

    if (choice == "F") {
        value_sgse = value_si * c_f;
    }

    else if (choice == "q") {
        value_sgse = value_si * c_q;
    }

    else if (choice == "E") {
        value_sgse = value_si * c_e;
    }

    std::cout << "�������� � ����: " << value_sgse;

    return 0;
}