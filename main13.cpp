#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double a, b, c;

    // �������� ��������� ����� A, B � C
    std::cout << "������ ���������� ����� A: ";
    std::cin >> a;

    std::cout << "������ ���������� ����� B: ";
    std::cin >> b;

    std::cout << "������ ���������� ����� C: ";
    std::cin >> c;

    // ��������� ������� ������ AC � BC
    double lengthAC = std::abs(c - a);
    double lengthBC = std::abs(c - b);

    // ��������� ���� ������ ������
    double sumLength = lengthAC + lengthBC;

    // �������� ���������
    std::cout << "������� ������ AC: " << lengthAC << std::endl;
    std::cout << "������� ������ BC: " << lengthBC << std::endl;
    std::cout << "���� ������ ������ AC � BC: " << sumLength << std::endl;

    return 0;