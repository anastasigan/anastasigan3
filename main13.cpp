#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double a, b, c;

    // Введення координат точок A, B і C
    std::cout << "Введіть координату точки A: ";
    std::cin >> a;

    std::cout << "Введіть координату точки B: ";
    std::cin >> b;

    std::cout << "Введіть координату точки C: ";
    std::cin >> c;

    // Знаходимо довжини відрізків AC і BC
    double lengthAC = std::abs(c - a);
    double lengthBC = std::abs(c - b);

    // Знаходимо суму довжин відрізків
    double sumLength = lengthAC + lengthBC;

    // Виводимо результат
    std::cout << "Довжина відрізка AC: " << lengthAC << std::endl;
    std::cout << "Довжина відрізка BC: " << lengthBC << std::endl;
    std::cout << "Сума довжин відрізків AC і BC: " << sumLength << std::endl;

    return 0;