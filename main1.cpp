#include <iostream>
void greetUser(std::string name){
    std::cout<<"Hi!"<<name<<"!Good luck!"<<std::endl;
}
void findMax(int a, int b) {
    if (a>b) {
        std::cout<<"The largest number"<<a<<std::endl;
    }
    else{
        std::cout<<"The largest number"<<b<<std::endl;
    }
}
void isEven (int num) {
    if (num%2==0) {
        std::cout <<"true"<<std::endl;
    }
    else {
        std::cout<<"false"<<std::endl;
    }
}
        
int main() {
    std::string name="lucy" ;
    greetUser(name);

    findMax (10,20);
    isEven(4);

    return 0;
}
