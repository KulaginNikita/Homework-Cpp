#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	float x, y;

	std::cout << "¬ведите x: ";
	std::cin >> x;

	std::cout << "¬ведите y: ";
	std::cin >> y;

	x += y;
	y = x - y;
	x -= y;

	std::cout << "–езультат смены: ";
	std::cout << "x = " << x;
	std::cout << ", y = " << y << "\n";

	return 0;
}