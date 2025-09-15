#include <iostream>
      
void task1() {
    std::cout<<"Hello world!"<<std::endl;
}   
void task2() {
    int x=5;
    std::cout<<x<<std::endl;
}
    
void task3() {
    
    std::cout<<"enter your age"<<std::endl;
    int age;
    std::cin>>age;
    int userage = age;
    
}
void task4() { 
    std::cout<<"write two numbers"<<std::endl;
    int a;
    int b;
    std::cin>>a;
    std::cin>>b;
    std::cout<<a+b<<std::endl;
}
void task5()
{
    std::cout<<"radius pliz"<<std::endl;
    double r;
    std::cin>>r;
    
    std::cout<<2*3.14*r<<std::endl;
} 





int main() 
{
    task1();
    task2();
    task3();
    task4();
    task5();
    return 0;
    
    
    
    
    
    return (0);
}
