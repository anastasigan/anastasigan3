#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Ukrainian");
    const double pi = 3.14;
    double alpha_degrees, alpha_radians;

    // Зчитуємо значення кута в градусах
    cout << "Введіть значення кута в градусах (0 ≤ α < 360): ";
    cin >> alpha_degrees;

    // Обчислюємо кут в радіанах
    alpha_radians = (alpha_degrees * pi) / 180;

    // Виводимо результат
    cout << "Значення кута в радіанах: " << alpha_radians << endl;

    return 0;
}