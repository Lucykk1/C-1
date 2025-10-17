#include <iostream>
#include <iomanip>

// ЗАДАНИЕ 1: Сумма целых чисел от а до 500
void task1() {
    std::wcout << L"=== ЗАДАНИЕ 1 ===" << std::endl;
    int a;
    std::wcout << L"Введите значение a: ";
    std::cin >> a;
    
    int sum = 0;
    for (int i = a; i <= 500; i++) {
        sum += i;
    }
    
    std::wcout << L"Сумма чисел от " << a << L" до 500: " << sum << std::endl;
    std::wcout << std::endl;
}

// ЗАДАНИЕ 2: x в степени y
void task2() {
    std::wcout << L"=== ЗАДАНИЕ 2 ===" << std::endl;
    int x, y;
    std::wcout << L"Введите x: ";
    std::cin >> x;
    std::wcout << L"Введите y: ";
    std::cin >> y;
    
    long long result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    
    std::wcout << x << L" в степени " << y << L" = " << result << std::endl;
    std::wcout << std::endl;
}

// ЗАДАНИЕ 3: Среднее арифметическое от 1 до 1000
void task3() {
    std::wcout << L"=== ЗАДАНИЕ 3 ===" << std::endl;
    
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }
    
    double average = static_cast<double>(sum) / 1000;
    std::wcout << L"Среднее арифметическое чисел от 1 до 1000: " 
               << std::fixed << std::setprecision(2) << average << std::endl;
    std::wcout << std::endl;
}

// ЗАДАНИЕ 4: Произведение всех целых чисел от а до 20
void task4() {
    std::wcout << L"=== ЗАДАНИЕ 4 ===" << std::endl;
    int a;
    
    do {
        std::wcout << L"Введите значение a (1 <= a <= 20): ";
        std::cin >> a;
    } while (a < 1 || a > 20);
    
    long long product = 1;
    for (int i = a; i <= 20; i++) {
        product *= i;
    }
    
    std::wcout << L"Произведение чисел от " << a << L" до 20: " << product << std::endl;
    std::wcout << std::endl;
}

// ЗАДАНИЕ 5: Таблица умножения на k
void task5() {
    std::wcout << L"=== ЗАДАНИЕ 5 ===" << std::endl;
    int k;
    std::wcout << L"Введите число k для таблицы умножения: ";
    std::cin >> k;
    
    std::wcout << L"Таблица умножения на " << k << L":" << std::endl;
    for (int i = 2; i <= 9; i++) {
        std::wcout << k << L" x " << i << L" = " << (k * i) << std::endl;
    }
    std::wcout << std::endl;
}

int main() {
    // Устанавливаем локаль для поддержки русского языка
    std::locale::global(std::locale(""));
    
    // Выполняем все задания
    task1();
    task2();
    task3();
    task4();
    task5();
    
    return 0;
}
