#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	float x, y;

	std::cout << "������� x: ";
	std::cin >> x;

	std::cout << "������� y: ";
	std::cin >> y;

	x += y;
	y = x - y;
	x -= y;

	std::cout << "��������� �����: ";
	std::cout << "x = " << x;
	std::cout << ", y = " << y << "\n";

	return 0;
}