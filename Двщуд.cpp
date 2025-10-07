#include <iostream>
using namespace std;

void task_1(){
      double num1, num2;
        
    cout << "Enter second number : ";
    cin >> num1;
    cout << "Enter first number:  ";
    cin >> num2;
    switch (num2 == 0) {
    case true:
         cout << "Error" << endl;
            break;
    case false:
        cout << "result:  " << num1 / num2 << endl;
            break;
    }
}





















int main(){
     task_1();
     task_2();
     task_3();
     task_4();
     task_5();
     task_6();
     task_7();
     task_8();
     task_9();
     task_10(); 
 
}
#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    // Проверка на трехзначность
    switch (number >= 100 && number <= 999) {
        case true:
            // Проверка на четность
            switch (number % 2 == 0) {
                case true:
                    cout << "Число " << number << " является трехзначным и четным" << endl;
                    break;
                case false:
                    cout << "Число " << number << " является трехзначным, но нечетным" << endl;
                    break;
            }
            break;
        case false:
            cout << "Число " << number << " не является трехзначным" << endl;
            break;
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int month;
    
    cout << "Введите номер месяца (1-12): ";
    cin >> month;
    
    switch (month) {
        case 1: case 2: case 12:
            cout << "Время года: Зима" << endl;
            break;
        case 3: case 4: case 5:
            cout << "Время года: Весна" << endl;
            break;
        case 6: case 7: case 8:
            cout << "Время года: Лето" << endl;
            break;
        case 9: case 10: case 11:
            cout << "Время года: Осень" << endl;
            break;
        default:
            cout << "Ошибка: введите число от 1 до 12" << endl;
            return 1;
    }
    
    // Определяем количество дней
    switch (month) {
        case 2:
            cout << "Количество дней: 28" << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "Количество дней: 30" << endl;
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Количество дней: 31" << endl;
            break;
    }
    
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
    
    switch (operation) {
        case '+':
            cout << "Результат: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Результат: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Результат: " << num1 * num2 << endl;
            break;
        case '/':
            switch (num2 == 0) {
                case true:
                    cout << "Ошибка: деление на ноль!" << endl;
                    break;
                case false:
                    cout << "Результат: " << num1 / num2 << endl;
                    break;
            }
            break;
        case '%':
            switch (num2 == 0) {
                case true:
                    cout << "Ошибка: деление на ноль!" << endl;
                    break;
                case false:
                    cout << "Результат: " << (int)num1 % (int)num2 << endl;
                    break;
            }
            break;
        default:
            cout << "Ошибка: неверный оператор!" << endl;
            break;
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int year;
    
    cout << "Введите год: ";
    cin >> year;
    
    bool isLeap = false;
    
    // Проверяем условия високосного года через switch
    switch (year % 4 == 0) {
        case true:
            switch (year % 100 == 0) {
                case true:
                    switch (year % 400 == 0) {
                        case true:
                            isLeap = true;
                            break;
                        case false:
                            isLeap = false;
                            break;
                    }
                    break;
                case false:
                    isLeap = true;
                    break;
            }
            break;
        case false:
            isLeap = false;
            break;
    }
    
    switch (isLeap) {
        case true:
            cout << year << " год является високосным" << endl;
            cout << "Следующий високосный год: " << year + 4 << endl;
            break;
        case false:
            // Находим следующий високосный год
            int nextLeap = year + 1;
            while (true) {
                if ((nextLeap % 4 == 0 && nextLeap % 100 != 0) || (nextLeap % 400 == 0)) {
                    break;
                }
                nextLeap++;
            }
            cout << year << " год не является високосным" << endl;
            cout << "Следующий високосный год: " << nextLeap << endl;
            break;
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
    
    // Проверка корректности времени
    switch (time >= 0 && time <= 23) {
        case false:
            cout << "Ошибка: время должно быть от 0 до 23" << endl;
            return 1;
        case true:
            break;
    }
    
    switch (isDoorOpen) {
        case true:
            switch (time > 22 || time < 6) {
                case true:
                    cout << "Alarm ON" << endl;
                    break;
                case false:
                    cout << "Добро пожаловать!" << endl;
                    break;
            }
            break;
        case false:
            cout << "Дверь закрыта, сигнализация выключена" << endl;
            break;
    }
    
    return 0;
}


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    
    int userChoice;
    string choices[3] = {"Камень", "Ножницы", "Бумага"};
    
    cout << "=== Камень, Ножницы, Бумага ===" << endl;
    cout << "Выберите:" << endl;
    cout << "0 - Камень" << endl;
    cout << "1 - Ножницы" << endl;
    cout << "2 - Бумага" << endl;
    cout << "Ваш выбор: ";
    cin >> userChoice;
    
    // Проверка ввода
    switch (userChoice) {
        case 0: case 1: case 2:
            break;
        default:
            cout << "Ошибка: выберите число от 0 до 2" << endl;
            return 1;
    }
    
    int computerChoice = rand() % 3;
    
    cout << "Вы выбрали: " << choices[userChoice] << endl;
    cout << "Компьютер выбрал: " << choices[computerChoice] << endl;
    
    // Определяем победителя
    switch (userChoice) {
        case 0: // Камень
            switch (computerChoice) {
                case 0: cout << "Ничья!" << endl; break;
                case 1: cout << "Вы победили!" << endl; break;
                case 2: cout << "Компьютер победил!" << endl; break;
            }
            break;
        case 1: // Ножницы
            switch (computerChoice) {
                case 0: cout << "Компьютер победил!" << endl; break;
                case 1: cout << "Ничья!" << endl; break;
                case 2: cout << "Вы победили!" << endl; break;
            }
            break;
        case 2: // Бумага
            switch (computerChoice) {
                case 0: cout << "Вы победили!" << endl; break;
                case 1: cout << "Компьютер победил!" << endl; break;
                case 2: cout << "Ничья!" << endl; break;
            }
            break;
    }
    
    return 0;
}








