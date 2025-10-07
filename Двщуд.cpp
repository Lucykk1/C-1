#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Task 1: Division of two numbers
void task_1() {
    cout << "=== Task 1: Division of Two Numbers ===" << endl;
    double num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    switch (num2 == 0) {
        case true:
            cout << "Error: Division by zero!" << endl;
            break;
        case false:
            cout << "Division result: " << num1 / num2 << endl;
            break;
    }
    cout << endl;
}

// Task 2: Check if number is three-digit and even
void task_2() {
    cout << "=== Task 2: Three-digit Even Number Check ===" << endl;
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    switch (number >= 100 && number <= 999) {
        case true:
            switch (number % 2 == 0) {
                case true:
                    cout << "Number " << number << " is three-digit and even" << endl;
                    break;
                case false:
                    cout << "Number " << number << " is three-digit but odd" << endl;
                    break;
            }
            break;
        case false:
            cout << "Number " << number << " is not three-digit" << endl;
            break;
    }
    cout << endl;
}

// Task 3: Season and days in month
void task_3() {
    cout << "=== Task 3: Season and Days in Month ===" << endl;
    int month;
    
    cout << "Enter month number (1-12): ";
    cin >> month;
    
    switch (month) {
        case 1: case 2: case 12:
            cout << "Season: Winter" << endl;
            break;
        case 3: case 4: case 5:
            cout << "Season: Spring" << endl;
            break;
        case 6: case 7: case 8:
            cout << "Season: Summer" << endl;
            break;
        case 9: case 10: case 11:
            cout << "Season: Autumn" << endl;
            break;
        default:
            cout << "Error: Please enter a number from 1 to 12" << endl;
            cout << endl;
            return;
    }
    
    switch (month) {
        case 2:
            cout << "Days: 28" << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "Days: 30" << endl;
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Days: 31" << endl;
            break;
    }
    cout << endl;
}

// Task 4: Calculator
void task_4() {
    cout << "=== Task 4: Calculator ===" << endl;
    double num1, num2;
    char operation;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;
    
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            switch (num2 == 0) {
                case true:
                    cout << "Error: Division by zero!" << endl;
                    break;
                case false:
                    cout << "Result: " << num1 / num2 << endl;
                    break;
            }
            break;
        case '%':
            switch (num2 == 0) {
                case true:
                    cout << "Error: Division by zero!" << endl;
                    break;
                case false:
                    cout << "Result: " << (int)num1 % (int)num2 << endl;
                    break;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            break;
    }
    cout << endl;
}

// Task 5: Leap year
void task_5() {
    cout << "=== Task 5: Leap Year ===" << endl;
    int year;
    
    cout << "Enter a year: ";
    cin >> year;
    
    bool isLeap = false;
    
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
            cout << year << " is a leap year" << endl;
            cout << "Next leap year: " << year + 4 << endl;
            break;
        case false:
            int nextLeap = year + 1;
            while (true) {
                if ((nextLeap % 4 == 0 && nextLeap % 100 != 0) || (nextLeap % 400 == 0)) {
                    break;
                }
                nextLeap++;
            }
            cout << year << " is not a leap year" << endl;
            cout << "Next leap year: " << nextLeap << endl;
            break;
    }
    cout << endl;
}

// Task 6: Smart home
void task_6() {
    cout << "=== Task 6: Smart Home ===" << endl;
    bool isDoorOpen;
    int time;
    
    cout << "Is door open? (1 - yes, 0 - no): ";
    cin >> isDoorOpen;
    cout << "Enter current hour (0-23): ";
    cin >> time;
    
    switch (time >= 0 && time <= 23) {
        case false:
            cout << "Error: Time must be between 0 and 23" << endl;
            cout << endl;
            return;
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
                    cout << "Welcome!" << endl;
                    break;
            }
            break;
        case false:
            cout << "Door closed, alarm off" << endl;
            break;
    }
    cout << endl;
}

// Task 7: Rock, Paper, Scissors
void task_7() {
    cout << "=== Task 7: Rock, Paper, Scissors ===" << endl;
    srand(time(0));
    
    int userChoice;
    string choices[3] = {"Rock", "Scissors", "Paper"};
    
    cout << "Choose:" << endl;
    cout << "0 - Rock" << endl;
    cout << "1 - Scissors" << endl;
    cout << "2 - Paper" << endl;
    cout << "Your choice: ";
    cin >> userChoice;
    
    switch (userChoice) {
        case 0: case 1: case 2:
            break;
        default:
            cout << "Error: Please choose a number from 0 to 2" << endl;
            cout << endl;
            return;
    }
    
    int computerChoice = rand() % 3;
    
    cout << "You chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;
    
    switch (userChoice) {
        case 0:
            switch (computerChoice) {
                case 0: cout << "Draw!" << endl; break;
                case 1: cout << "You win!" << endl; break;
                case 2: cout << "Computer wins!" << endl; break;
            }
            break;
        case 1:
            switch (computerChoice) {
                case 0: cout << "Computer wins!" << endl; break;
                case 1: cout << "Draw!" << endl; break;
                case 2: cout << "You win!" << endl; break;
            }
            break;
        case 2:
            switch (computerChoice) {
                case 0: cout << "You win!" << endl; break;
                case 1: cout << "Computer wins!" << endl; break;
                case 2: cout << "Draw!" << endl; break;
            }
            break;
    }
    cout << endl;
}

// Main menu
int main() {
    int choice;
    
    do {
        cout << "=== MAIN MENU ===" << endl;
        cout << "1. Division of two numbers" << endl;
        cout << "2. Three-digit even number check" << endl;
        cout << "3. Season and days in month" << endl;
        cout << "4. Calculator" << endl;
        cout << "5. Leap year" << endl;
        cout << "6. Smart home" << endl;
        cout << "7. Rock, Paper, Scissors" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose a task: ";
        cin >> choice;
        
        switch (choice) {
            case 1: task_1(); break;
            case 2: task_2(); break;
            case 3: task_3(); break;
            case 4: task_4(); break;
            case 5: task_5(); break;
            case 6: task_6(); break;
            case 7: task_7(); break;
            case 0: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice! Please try again." << endl << endl; break;
        }
    } while (choice != 0);
    
    return 0;
}

