#include <iostream>
#include <iomanip>

int main()
{
    std::string name;
    int price, temperature;
    bool hasCashback;

    std::cout << "Product's name: ";
    std::cin >> name;

    std::cout << "Product's price: ";
    std::cin >> price;

    std::cout << "Is cash-back available for this product? (true/false) ";
    std::cin >> std::boolalpha >> hasCashback;

    std::cout << "Maximum storing temperature: ";
    std::cin >> temperature;

    std::cout << '\n' << "*************** OUTPUT ***************" << "\n\n";

    std::cout << name << '\n';

    std::cout << "Price:..........." << std::hex << price << std::dec << '\n';

    std::cout << "Has cash-back:......." << std::boolalpha << hasCashback << '\n';

    if (temperature > 0) {
        std::cout << "Max temperature:......" << "+" << temperature << '\n';
    }
    else if (temperature < 0) {
        std::cout << "Max temperature:......" << temperature << '\n';
    }
    else {
        std::cout << "Max temperature:......" << temperature << '\n';
    }

    return 0;
}
