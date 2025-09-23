#include <iostream>
 void task_1(){
   double lenght;
   double width;

   std::cout<<"enter width"<<std::endl;
   std::cin>>width;
   std::cout<<"enter lenght"<<std::endl;
   std::cin>>lenght;

   std::cout<<lenght * width <<std::endl;
   std::cout<<lenght + width<<std::endl;
}
void task_2(){
 
 std::srand(std::time(0));
 int randomNumber= std::rand()% 100;
 std::cout<<randomNumber<<std::endl;

 int user;
 std::cout<<"guess: "<<std::endl;
 std::cin>> user;
 if (user==randomNumber){
   std::cout<<"True"<<std::endl;
 }
 else{
   std::cout<<"false "<<std::endl;
}

 }
void task_3(){
 const double d = 90.0;  

    double r;
    std::cout << "Enter rubles ";
    std::cin >> r;

    double c= r/d;

    std::cout << std::fixed << std::endl;
    std::cout << "in dollars it is a:  " << c<< " USD" << std::endl;
}
void task_4(){
    char symbol;
    std::cout << "Enter  random sybol:  ";
    std::cin >> symbol;

    int ascii = static_cast<int>(symbol);
    std::cout << "ASCII code of the character: " << ascii << std::endl;

    char nextSymbol = symbol + 1;
    std::cout << "Next symbol: " << nextSymbol << std::endl;
}
void task_5(){
   int totalMinutes;
    std::cout << "enter minutes: ";
    std::cin >> totalMinutes;

    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;

    std::cout << hours << " hours " << minutes << " minutes" << std::endl;
}
void task_6(){
    double num;
    std::cout << "Enter number:  ";
    std::cin >> num;

 
    if (num >= 5 && num <= 10) {
        std::cout << "The number belongs to both intervals simultaneously." << std::endl;
    } else {
        std::cout << "The number doesn't belongs to both intervals simultaneously." << std::endl;
    }
}
void task_7(){
   int x, y;
    std::cout << "Enter value for x: ";
    std::cin >> x;
    std::cout << "Enter value for y: ";
    std::cin >> y;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    
    int temp = x; 
    x = y;         
    y = temp;     

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
}
void task_8(){
 double a, b, c;
    std::cout << "Enter fist number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    std::cout << "Enter tirth number: ";
    std::cin >> c;

    double mean = (a + b + c) / 3.0;
    int intMean = static_cast<int>(mean);
    std::cout << "Arithmetic mean (whole): "  << intMean << std::endl;
    std::cout << std::fixed << std::endl;
    std::cout << "Arithmetic mean (fractional): " << mean << std::endl;
}
void task_9(){
    int a;
    int b;
    std::cout<<"enter a: "<<std::endl;
    std::cin>>a;
    std::cout<<"enter b: "<<std::endl;
    std::cin>>b;
    if (a == 0) {
        if (b == 0) {
            std::cout << "The equation has infinitely many solutions" << std::endl;
        } else {
            std::cout << "The equation has no solutions." << std::endl;
        }
    } else {
        double x = -b / a;
        std::cout << "Root of the equation: x = " << x << std::endl;
    }
}
void task_10() {
 std::string name;
    int age;
    int favoriteNumber;


    std::cout << "Enter your name: ";
    std::cin>>name;


    std::cout << "Enter your age:  ";
    std::cin >> age;


    std::cout << "Enter your fav number: ";
    std::cin >> favoriteNumber;


    std::cout << "HII!! " << name << "  You are " << age << " years old, your fav number is " << favoriteNumber << "!" << std::endl;
}

 int main (){
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
