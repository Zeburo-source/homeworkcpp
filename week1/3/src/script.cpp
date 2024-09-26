#include <iostream>
#include <cmath> // Для функции sqrt()

int main() {
    double a;  // Длина ребра икосаэдра
    double volume;  // Объем икосаэдра

    // Ввод длины ребра от пользователя
    std::cout << "Введите длину ребра икосаэдра: ";
    std::cin >> a;

    // Формула для вычисления объема икосаэдра
    volume = (15 + (5 * std::sqrt(5)) / 12) * std::pow(a, 3);

    // Вывод объема икосаэдра
    std::cout << "Объем икосаэдра: " << volume << std::endl;

    return 0;
}
