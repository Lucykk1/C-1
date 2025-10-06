#include  <iostream>
using namespace std;
void task_1() {

    int number;
    cout << "enter number: ";
    cin >> number;
    cout << (number % 2 == 0 ? "even" : "not even") << endl;    
}
void task_2(){
    int a, b;
    cout << "Enter two num: ";
    cin >> a >> b;
    cout << "max number: " << (a > b ? a : b) << endl;   
}    
    
void task_3(){
    bool value;
    cout << "Enter 1 (true) or 0 (false): ";
    cin >> value;
    cout << (value ? "yes" : "no" : ) << endl;
}  
void task_4(){
    int number;
    cout << "Enter number: ";
    cin >> number;
    string sign = (number > 0 ? "pluys" : (number== 0 ? "minus" : "zero"));
    cout << "sing: " << sign << endl;
}
void task_5(){
 char ch;
    cout << "Enter symbol: ";
    cin >> ch;
    char upper = (ch >= 'a' && ch <= 'z') ? (ch - 32) : ch;
    cout << "Result: " << (isalpha(ch) ? upper : ch) << endl;   
}
void task_6(){
   int amount;
    cout << "Enter count of money: ";
    cin >> amount;
    string message = (amount > 0 && amount <= 50000 && amount % 100 == 0) ? 
                     "successfully!!!!!" : 
                     (amount <= 0 ? "successfully" : 
                     (amount > 50000 ? "The amount exceeds the limit." : 
                     "The amount must be a multiple of 100."));
    cout << message << endl;        
}
void task_7(){
    const int SECRET_NUMBER = 66;
    int guess;
    int attempts = 0;
    const int MAX_ATTEMPTS = 5;
    
    cout << "I thought of a number from 1 to 100. You have " << MAX_ATTEMPTS << " attempts!" << endl;
    
    while (attempts < MAX_ATTEMPTS) {
        cout << "attempts!" << (attempts + 1) << "/" << MAX_ATTEMPTS << "Your guess: ";
        cin >> guess;
        attempts++;
        
        string hint = (guess < SECRET_NUMBER) ? "The hidden number is GREATER" :
                      (guess > SECRET_NUMBER) ? "The hidden number is LESS" :
                     "CONGRATULATIONS! You guessed it!";
        
        cout << hint << endl;
        
        if (guess == SECRET_NUMBER) {
            cout << "You guessed the number for " << attempts << " attempts" << endl;
            break;
        }
        
        if (attempts == MAX_ATTEMPTS) {
            cout << "Unfortunately, the attempts were over. The hidden number was: " << SECRET_NUMBER << endl;
        }
    }
    cout << endl;
}
void task_8(){
    int city_code, duration;
    cout << "cods: 1-Moscow, 2-SPb, 3-Other" << endl;
    cout << "enter code of city: ";
    cin >> city_code;
    cout << "How long will your call be: ";
    cin >> duration;
    
    double rate = (city_code == 1) ? 2.5 : 
                  (city_code == 2) ? 3.0 : 4.5;
    
    double cost = duration * rate;
    
    cout << "cost of call: " << cost << " rub." << endl << endl;
}
 
void task_9(){
    double a, b, c;
    cout << "Enter: ";
    cin >> a >> b >> c;
    
    
    bool is_triangle = (a + b > c) && (a + c > b) && (b + c > a);
    
    if (!is_triangle) {
        cout << "error" << endl << endl;
        return;
    }
    
    string type = (a == b && b == c) ? "ravnastoroni" :
                  (a == b || a == c || b == c) ? " ravnobedreni" : "raznastoroni";
    
    cout << "triangle " << type <<  endl;  
}
    
void task_10(){
    const string CORRECT_LOGIN = "admin";
    const string CORRECT_PASSWORD = "12345";
    
    string login, password;
    cout << "ENTER LOGING: ";
    cin >> login;
    cout << "ENTER PASSWORD: ";
    cin >> password;

    string result = (login != CORRECT_LOGIN) ? "ERROR LOGIN " :
                    (password != CORRECT_PASSWORD) ? "ERROR PASSWORD " : "Access allowed";
    
    cout << result  << endl;
}
int main(){
    
    task_1();
    task_2();
    task_3();
    task_4();
    task_5();
    task_6();
    task_8();
    task_9();
    task_10();
}


