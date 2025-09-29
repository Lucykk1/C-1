#include <iostream>

void task_1(){
    std::cout<<"please enter number:"<<std::endl;
    int number_pluse;
    std::cin>>number_pluse;
    if (number_pluse >=0){
        std::cout<<"The number is more than 0"<<std::endl;
    }
    else {
        std::cout<<"the number is less than 0"<<std::endl;
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
    std::cout<<"please enter number:"<<std::endl;
    int number;
    std::cin>>number;
    std::cout<<"please enter 2 number:"<<std::endl;
    int number_2;
    std::cin>>number_2;
    if (number==number_2)  {
        std::cout<<"The numbers are equal"<<std::endl;
    }
    else {
        std::cout<<"the number are not equal"<<std::endl;
    }
}

void task_4(){
    std::cout<<"please enter number:"<<std::endl;
    int number;
    std::cin>>number;
    if (number %5==0)  {
        std::cout<<"The number is even"<<std::endl;
    }
    else {
        std::cout<<"the number is not even"<<std::endl;
    }
}

void task_5(){ 
    std::cout<<"please enter your age: "<<std::endl;
    int age;
    std::cin>>age;
    if (age >=18){
        std::cout<<" You are an adult"<<std::endl;
    }
    else {
        std::cout<<"You are not an adult"<<std::endl;
    }
}

void task_6(){
  int number_minus;
  std::cin>>number_minus;
  if (number_minus <0){
    std::cout<<"The number is less than 0"<<std::endl;
  }
  else {
    std::cout<<"the number is more than 0"<<std::endl;
  }
}

void task_7(){
    std::cout<<"please enter symbol: "<<std::endl;
    char a;
    std::cin>> a;
    if (a == 'A'){
    std::cout<<"right"<<std::endl;
    }
    else {
        std::cout<<"falllseee!!"<<std::endl;
    }
}

void task_8(){
    std::cout<<"please enter number : "<<std::endl;
    int a;
    std::cin>>a;
    std::cout<<"please enter  2 number : "<<std::endl;
    int b;
    std::cin>>b;
    if (a>=0 && b>=0){
        std::cout<<"Right!"<<std::endl;
    }
    else{
        std::cout<<"nooooo"<<std::endl;
}
}

void task_9(){
    std::cout<<"please enter number : "<<std::endl;
    int a;
    std::cin>>a;
    std::cout<<"please enter  2 number : "<<std::endl;
    int b;
    std::cin>>b;
    if (a==0 || b==0){
        std::cout<<"Right!"<<std::endl;
    }
    else{
        std::cout<<"nooooo"<<std::endl;
}

}
void task_10(){

    std::cout<<"please enter number:"<<std::endl;
    int number_pluse;
    std::cin>>number_pluse;
    if (number_pluse !=0){
        std::cout<<"The number is more than 0"<<std::endl;
    }
    else {
        std::cout<<"error"<<std::endl;
    }
}
int main(){
    task_1();
    task_2();
    task_3 ();
    task_4 ();
    task_5 ();
    task_6 ();
    task_7 ();
    task_8 ();
    task_9();
    task_10();
  return 0;
}
