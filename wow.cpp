#include <iostream>

void task1() 
{
    std::cout << "Hello world!" << std::endl;
}

void task2() 
{
    int x = 5;
    std::cout << x << std::endl;
}

void task3() 
{
    std::cout << "Enter your age:" << std::endl;
    int age;
    std::cin >> age;
    int userAge = age;
    std::cout << "Your age is: " << userAge << std::endl;
}

void task4() 
{
    std::cout << "Write two numbers:" << std::endl;
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;
    std::cout << "Sum = " << a + b << std::endl;
}

void task5() 
{
    std::cout << "Enter radius:" << std::endl;
    double r;
    std::cin >> r;
    const double PI = 3.14;
    std::cout << "Circle length = " << 2 * PI * r << std::endl;
}

void task6() 
{
    int a = 10;
    int b = 3;
    std::cout << "Integer division a / b = " << a / b << std::endl;
    std::cout << "Remainder a % b = " << a % b << std::endl;
}

void task7() 
{
    int counter = 0;
    for (int i = 0; i < 5; i++) {
        counter++;
    }
    std::cout << "Counter value after increments: " << counter << std::endl;
}

void task8() 
{
    std::cout << "Enter a number: " << std::endl;
    int number;
    std::cin >> number;

    int result = 1;
    for (int i = 0; i < 2; i++) {
        result *= number;
    }
    std::cout << "Square of the number = " << result << std::endl;
}

void task9() 
{
    int score = 100;
    for (int i = 0; i < 15; i++) {
        score += 1;
    }
    std::cout << "Score after += 15: " << score << std::endl;
}

void task10() 
{
    std::cout << "Enter product price: " << std::endl;
    double price;
    std::cin >> price;
    std::cout << "Price: " << price << std::endl;
}

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();
    task10();
    return 0;
}
