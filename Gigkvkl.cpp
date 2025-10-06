#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;
    cout << (number % 2 == 0 ? "Четное" : "Нечетное") << endl;
    return 0;
}
 #include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "Максимальное число: " << (a > b ? a : b) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    bool value;
    cout << "Введите 1 (true) или 0 (false): ";
    cin >> value;
    cout << (value ? "Да" : "Нет") << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    bool value;
    cout << "Введите 1 (true) или 0 (false): ";
    cin >> value;
    cout << (value ? "Да" : "Нет") << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;
    string sign = (number > 0 ? "положительное" : (number < 0 ? "отрицательное" : "ноль"));
    cout << "Знак числа: " << sign << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Введите символ: ";
    cin >> ch;
    char upper = (ch >= 'a' && ch <= 'z') ? (ch - 32) : ch;
    cout << "Результат: " << (isalpha(ch) ? upper : ch) << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Введите сумму для снятия: ";
    cin >> amount;
    string message = (amount > 0 && amount <= 50000 && amount % 100 == 0) ? 
                     "Снятие прошло успешно." : 
                     (amount <= 0 ? "Сумма должна быть положительной." : 
                     (amount > 50000 ? "Сумма превышает лимит." : 
                     "Сумма должна быть кратна 100.")));
    cout << message << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int secretNumber = 42; // Загаданное число
    int guess;
    cout << "Угадайте число (от 1 до 100): ";
    
    do {
        cin >> guess;
        cout << (guess < secretNumber ? "Больше!" : 
                  (guess > secretNumber ? "Меньше!" : 
                  "Поздравляю! Вы угадали число!")) << endl;
    } while (guess != secretNumber);
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// Задание 8: Стоимость звонка
void task_8() {
    cout << "=== Задание 8: Стоимость звонка ===" << endl;
    
    int city_code, duration;
    cout << "Коды городов: 1-Moscow, 2-SPb, 3-Other" << endl;
    cout << "Введите код города: ";
    cin >> city_code;
    cout << "Введите длительность разговора (мин): ";
    cin >> duration;
    
    // Стоимость за минуту в зависимости от города
    double rate = (city_code == 1) ? 2.5 : 
                  (city_code == 2) ? 3.0 : 4.5;
    
    double cost = duration * rate;
    
    cout << "Стоимость звонка: " << cost << " руб." << endl << endl;
}

// Задание 9: Проверка треугольника
void task_9() {
    cout << "=== Задание 9: Проверка треугольника ===" << endl;
    
    double a, b, c;
    cout << "Введите три отрезка: ";
    cin >> a >> b >> c;
    
    // Проверяем, можно ли составить треугольник
    bool is_triangle = (a + b > c) && (a + c > b) && (b + c > a);
    
    if (!is_triangle) {
        cout << "Из этих отрезков нельзя составить треугольник" << endl << endl;
        return;
    }
    
    // Определяем тип треугольника
    string type = (a == b && b == c) ? "равносторонний" :
                  (a == b || a == c || b == c) ? "равнобедренный" : "разносторонний";
    
    cout << "Треугольник " << type << endl << endl;
}

// Задание 10: Система логина
void task_10() {
    cout << "=== Задание 10: Система логина ===" << endl;
    
    const string CORRECT_LOGIN = "admin";
    const string CORRECT_PASSWORD = "12345";
    
    string login, password;
    cout << "Введите логин: ";
    cin >> login;
    cout << "Введите пароль: ";
    cin >> password;
    
    // Проверяем логин и пароль
    string result = (login != CORRECT_LOGIN) ? "Неверный логин" :
                    (password != CORRECT_PASSWORD) ? "Неверный пароль" : "Доступ разрешен";
    
    cout << result << endl << endl;
}

int main() {
    int choice;
    
    do {
        cout << "Выберите задание для выполнения (8-10) или 0 для выхода: ";
        cin >> choice;
        
        switch(choice) {
            case 0:
                cout << "Выход из программы." << endl;
                break;
            case 8:
                task_8();
                break;
            case 9:
                task_9();
                break;
            case 10:
                task_10();
                break;
            default:
                cout << "Неверный выбор! Пожалуйста, выберите от 0 до 10." << endl << endl;
        }
    } while (choice != 0);
    
    return 0;
}



