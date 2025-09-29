#include <iostream>
void task_1(){
    std::cout << "please enter number:" << std::endl;
    int number_pluse;
    std::cin >> number_pluse;
    if (number_pluse > 0) {
        std::cout << "good" << std::endl;
    } else {
        std::cout << "minus or zero" << std::endl;
    }
 
}   
void task_2(){
     std::cout<<"please enter number:"<<std::endl;
     int number;
     std::cin>>number;
     if (number %2==0)  {
       std::cout<<"The number is even"<<std::endl;
          }
     else {
            std::cout<<"the number is not even"<<std::endl;
          }
            
           
}
void task_3(){
    std::cout << "Enter number:" << std::endl;
    int a, b;
    std::cin >> a >> b;

    if (a > b) {
        std::cout << "Max number: " << a << std::endl;
    } else if (b > a) {
        std::cout << "Min number: " << b << std::endl;
    } else {
        std::cout << "equal: " << a << std::endl;
    }

}
void task_4(){
    std::cout << "Please enter a grade (1-5):" << std::endl;
    int grade;
    std::cin >> grade;

    if (grade == 1 || grade == 2) {
        std::cout << "satisfactory" << std::endl;
    } else if (grade == 3 || grade == 4 || grade == 5) {
        std::cout << "Saits  and above" << std::endl;
    } else {
        std::cout << "fail" << std::endl;
    }

  
}
void task_5(){
      std::cout << "Enter latter:" << std::endl;
    char latter;
    std::cin>>latter;
    if (latter=='a' || latter=='e'|| latter=='i' || latter=='o' || latter=='u' ){
        std::cout<<"The latter is vowel"<<std::endl;
    }
     else {
     std::cout<<"The latter is not vowel"<<std::endl;
     }
}
void task_6(){
    
    std::cout << "Enter a year: ";
    int year;
    std::cin >> year;

    bool isLeap = false;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        isLeap = true;
    }

    if (isLeap) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

}
void task_7(){

    double num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operator : ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    if (op == '+') {
        std::cout << "Result: " << num1 + num2 << std::endl;
    } else if (op == '-') {
        std::cout << "Result: " << num1 - num2 << std::endl;
    } else if (op == '*') {
        std::cout << "Result: " << num1 * num2 << std::endl;
    } else if (op == '/') {
        if (num2 != 0) {
            std::cout << "Result: " << num1 / num2 << std::endl;
        } else {
            std::cout << "Error: Division by zero!" << std::endl;
        }
    } else {
        std::cout << "Error: Unknown operator." << std::endl;
    }


}
void task_8(){
    
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;

    if (number >= 10 && number <= 20) {
        std::cout << number << " belongs to the interval [10, 20]." << std::endl;
    } else {
        std::cout << number << " does NOT belong to the interval [10, 20]." << std::endl;
    }

    
}
void task_9(){

    std::cout << "Enter month number (1-12): ";
    int month;
    std::cin >> month;

    if (month == 12 || month == 1 || month == 2) {
        std::cout << "Winter" << std::endl;
    } else if (month >= 3 && month <= 5) {
        std::cout << "Spring" << std::endl;
    } else if (month >= 6 && month <= 8) {
        std::cout << "Summer" << std::endl;
    } else if (month >= 9 && month <= 11) {
        std::cout << "Autumn" << std::endl;
    } else {
        std::cout << "Invalid month number!" << std::endl;
    }
}
void task_10(){
    
    std::cout << "Enter a three-digit number: ";
    int number;
    std::cin >> number;

    if (number < 100 || number > 999) {
        std::cout << "Error" << std::endl;
        
    }

    int first = number / 100;         
    int last = number % 10;            

    if (first == last) {
        std::cout << number << " is symmetric." << std::endl;
    } else {
        std::cout << number << " is not symmetric." << std::endl;
    }

}
    
    

int main()
{
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
