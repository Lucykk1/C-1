#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    
    if (num2 == 0) {
        cout << "Ошибка: деление на ноль!" << endl;
    } else {
        double result = num1 / num2;
        cout << "Результат деления: " << result << endl;
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    if (number >= 100 && number <= 999) {
        if (number % 2 == 0) {
            cout << "Число " << number << " является трехзначным и четным" << endl;
        } else {
            cout << "Число " << number << " является трехзначным, но нечетным" << endl;
        }
    } else {
        cout << "Число " << number << " не является трехзначным" << endl;
    }
    
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int month;
    
    cout << "Введите номер месяца (1-12): ";
    cin >> month;
    
    if (month < 1 || month > 12) {
        cout << "Ошибка: введите число от 1 до 12" << endl;
        return 1;
    }
    
    // Определяем время года
    string season;
    if (month == 12 || month == 1 || month == 2) {
        season = "Зима";
    } else if (month >= 3 && month <= 5) {
        season = "Весна";
    } else if (month >= 6 && month <= 8) {
        season = "Лето";
    } else {
        season = "Осень";
    }
    
    // Определяем количество дней
    int days;
    if (month == 2) {
        days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }
    
    cout << "Время года: " << season << endl;
    cout << "Количество дней: " << days << endl;
    
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите оператор (+, -, *, /, %): ";
    cin >> operation;
    cout << "Введите второе число: ";
    cin >> num2;
    
    double result;
    bool error = false;
    
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Ошибка: деление на ноль!" << endl;
                error = true;
            } else {
                result = num1 / num2;
            }
            break;
        case '%':
            if (num2 == 0) {
                cout << "Ошибка: деление на ноль!" << endl;
                error = true;
            } else {
                result = (int)num1 % (int)num2;
            }
            break;
        default:
            cout << "Ошибка: неверный оператор!" << endl;
            error = true;
    }
    
    if (!error) {
        cout << "Результат: " << result << endl;
    }
    
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int year;
    
    cout << "Введите год: ";
    cin >> year;
    
    // Проверяем, является ли год високосным
    bool isLeap = false;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeap = true;
            }
        } else {
            isLeap = true;
        }
    }
    
    if (isLeap) {
        cout << year << " год является високосным" << endl;
        cout << "Следующий високосный год: " << year + 4 << endl;
    } else {
        // Находим следующий високосный год
        int nextLeap = year + 1;
        while (true) {
            if (nextLeap % 4 == 0) {
                if (nextLeap % 100 == 0) {
                    if (nextLeap % 400 == 0) {
                        break;
                    }
                } else {
                    break;
                }
            }
            nextLeap++;
        }
        cout << year << " год не является високосным" << endl;

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел
    
    int userChoice;
    
    cout << "=== Камень, Ножницы, Бумага ===" << endl;
    cout << "Выберите:" << endl;
    cout << "0 - Камень" << endl;
    cout << "1 - Ножницы" << endl;
    cout << "2 - Бумага" << endl;
    cout << "Ваш выбор: ";
    cin >> userChoice;
    
    if (userChoice < 0 || userChoice > 2) {
        cout << "Ошибка: выберите число от 0 до 2" << endl;
        return 1;
    }
    
    int computerChoice = rand() % 3;
    
    string choices[3] = {"Камень", "Ножницы", "Бумага"};
    
    cout << "Вы выбрали: " << choices[userChoice] << endl;
    cout << "Компьютер выбрал: " << choices[computerChoice] << endl;
    
    // Определяем победителя
    if (userChoice == computerChoice) {
        cout << "Ничья!" << endl;
    } else if ((userChoice == 0 && computerChoice == 1) || 
               (userChoice == 1 && computerChoice == 2) || 
               (userChoice == 2 && computerChoice == 0)) {
        cout << "Вы победили!" << endl;
    } else {
        cout << "Компьютер победил!" << endl;
    }
    
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    bool isDoorOpen;
    int time;
    
    cout << "Дверь открыта? (1 - да, 0 - нет): ";
    cin >> isDoorOpen;
    cout << "Введите текущий час (0-23): ";
    cin >> time;
    
    if (time < 0 || time > 23) {
        cout << "Ошибка: время должно быть от 0 до 23" << endl;
        return 1;
    }
    
    if (isDoorOpen) {
        if (time > 22 || time < 6) {
            cout << "Alarm ON" << endl;
        } else {
            cout << "Добро пожаловать!" << endl;
        }
    } else {
        cout << "Дверь закрыта, сигнализация выключена" << endl;
    }
    
    return 0;
}







