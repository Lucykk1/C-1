// Example program
#include <iostream>
void task_1(){
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number >= 10 && number <= 99) {
        std::cout << "The number is two-digit and positive"<<std::endl;
    } else {
        std::cout << "The number is not two-digit or not positive"<<std::endl;
    }
}  

void task_2() {
    double a, b, c;
    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                std::cout << "Infinite number of solutions"<<std::endl;
            } else {
                std::cout << "No solutions"<<std::endl;
            }
        } else {
            double x = -c / b;
            std::cout << "Linear equation, one root: x = " << x <<std::endl;
        }
    } else {
        double D = b * b - 4 * a * c;
        std::cout << "Discriminant = " << D  <<std::endl;

        if (D > 0) {
            double x1 = (-b + std::sqrt(D)) / (2 * a);
            double x2 = (-b - std::sqrt(D)) / (2 * a);
            std::cout << "Two roots: x1 = " << x1 << ", x2 = " << x2 <<std::endl;
        } else if (D == 0) {
            double x = -b / (2 * a);
            std::cout << "One root: x = " << x <<std::endl;
        } else {
            std::cout << "No real roots (discriminant less than 0)"<<std::endl;
        }
    }
} 




void task_3() {
    std::string password;
    std::cout << "Enter password: "<<std::endl;
    std::cin >> password;  

    if (password.length() < 8) {
        std::cout << "Password too short"<<std::endl;
        return;
    }

    bool hasDigit = false;
    for (char c : password) {
        if (c >= '0' && c <= '9') {
            hasDigit = true;
            
        }
    }

    if (hasDigit) {
        std::cout << "Password is valid"<<std::endl;
    } else {
        std::cout << "Password must contain at least one digit"<<std::endl;
    }
}   


void task_4() {
    double a, b, c;
    std::cout << "Enter sides a, b, c: ";
    std::cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        std::cout << "Triangle exists"<<std::endl;
    } else {
        std::cout << "Triangle does not exist"<<std::endl;
    }
}  
    



void task_5() {
    double a, b, c;
    std::cout << "Enter sides a, b, c: ";
    std::cin >> a >> b >> c;

   
    if (!((a + b > c) && (a + c > b) && (b + c > a))) {
        std::cout << "Triangle does not exist"<<std::endl;
        return;
    }

    double hyp, side1, side2;

    if (a >= b && a >= c) {
        hyp = a; side1 = b; side2 = c;
    } else if (b >= a && b >= c) {
        hyp = b; side1 = a; side2 = c;
    } else {
        hyp = c; side1 = a; side2 = b;
    }


    if (hyp*hyp - (side1*side1 + side2*side2))  {
        std::cout << "Triangle is right-angled"<<std::endl;
    } else {
        std::cout << "Triangle is not right-angled"<<std::endl;
    }
}


void task_6(){

    double num1, num2;
    char op;

    std::cout << "Enter expression: "<<std::endl;
    std::cin >> num1 >> op >> num2;

    if (op == '+') {
        std::cout << num1 + num2 <<std::endl;
    } else if (op == '-') {
        std::cout << num1 - num2 <<std::endl;
    } else if (op == '*') {
        std::cout << num1 * num2<<std::endl;
    } else if (op == '/') {
        if (num2 == 0) {
            std::cout << "Error: Division by zero"<<std::endl;
        } else {
            std::cout << num1 / num2 <<std::endl;
        }
    } else {
        std::cout << "Error: Unknown operator"<<std::endl;
    }
}
    
void task_7(){

    double a, b, c;
    std::cout << "Enter sides a, b, c: "<<std::endl;
    std::cin >> a >> b >> c;

    if (a == b && b == c) {
        std::cout << "Equilateral triangle"<<std::endl;
    } else if (a == b || a == c || b == c) {
        std::cout << "Isosceles triangle"<<std::endl;
    } else {
        std::cout << "Scalene triangle"<<std::endl;
    }
}  


void task_8() {
    double x, y, x1, y1, x2, y2;
    std::cout << "Enter x and y: "<<std::endl;
    std::cin >> x >> y;
    std::cout << "Enter x1, y1, x2, y2: "<<std::endl;
    std::cin >> x1 >> y1 >> x2 >> y2;

    double minX = (x1 < x2) ? x1 : x2;
    double maxX = (x1 > x2) ? x1 : x2;
    double minY = (y1 < y2) ? y1 : y2;
    double maxY = (y1 > y2) ? y1 : y2;

    if (x >= minX && x <= maxX && y >= minY && y <= maxY) {
        std::cout << "Point is inside or on the boundary"<<std::endl;
    } else {
        std::cout << "Point is outside"<<std::endl;
    }
}    
void task_9(){

    int day, month;
    std::cout << "Enter day: "<<std::endl;
    std::cin >> day;
    std::cout << "Enter month: "<<std::endl;
    std::cin >> month;


if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
    std::cout << "Your zodiac sign: Aquarius" << std::endl;
else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
    std::cout << "Your zodiac sign: Pisces" << std::endl;
else if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
    std::cout << "Your zodiac sign: Aries" << std::endl;
else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
    std::cout << "Your zodiac sign: Taurus" << std::endl;
else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
    std::cout << "Your zodiac sign: Gemini" << std::endl;
else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
    std::cout << "Your zodiac sign: Cancer" << std::endl;
else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
    std::cout << "Your zodiac sign: Leo" << std::endl;
else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
    std::cout << "Your zodiac sign: Virgo" << std::endl;
else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
    std::cout << "Your zodiac sign: Libra" << std::endl;
else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
    std::cout << "Your zodiac sign: Scorpio" << std::endl;
else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
    std::cout << "Your zodiac sign: Sagittarius" << std::endl;
else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
    std::cout << "Your zodiac sign: Capricorn" << std::endl;
else
    std::cout << "Invalid date" << std::endl;
   
}
void task_10(){

    int year;
    std::cout << "Enter the year: "<<std::endl;
    std::cin >> year;

    if (year % 4 != 0) {
        std::cout << "Year is not a leap year" << std::endl;
    } else {
        std::cout << "Year is a leap year" << std::endl;
        if (year % 4 == 0) {
            std::cout << "Year is an Olympic year" << std::endl;
        }
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
return 0;
}
