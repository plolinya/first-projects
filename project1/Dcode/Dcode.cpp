#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    char symbol;
    int length;
    int choice;

    std::cout << "Введите символ для линии: ";
    std::cin >> symbol;

    std::cout << "Введите длину линии: ";
    std::cin >> length;

    std::cout << "Выберите тип линии:\n";
    std::cout << "1 - Горизонтальная\n";
    std::cout << "2 - Вертикальная\n";
    std::cout << "3 - Диагональная\n";
    std::cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < length; i++) {
            std::cout << symbol;
        }
        std::cout << std::endl;
    }
    else if (choice == 2) {
        for (int i = 0; i < length; i++) {
            std::cout << symbol << std::endl;
        }
    }
    else if (choice == 3) {
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < i; j++) {
                std::cout << ' ';
            }
            std::cout << symbol << std::endl;
        }
    }
    else {
        std::cout << "Неверный выбор!" << std::endl;
    }

    return 0;
}