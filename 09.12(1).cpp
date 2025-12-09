#include <iostream>

using namespace std;

int main() {
  
    const char sequence[] = { 'T', 'N', 'T', 'T', 'N', 'N', 'T', 'N', 'T' };
    const int length = 9;  

    cout << "=== Always Taken Predictor ===\n";


    int correct_always = 0, incorrect_always = 0;

    for (int i = 0; i < length; ++i) {
        char predicted = 'T';       
        char actual = sequence[i];  

        cout << "Access " << (i + 1) << ": predicted = " << predicted
            << ", actual = " << actual << " -> ";

        if (predicted == actual) {
            cout << "OK\n";
            correct_always++;
        }
        else {
            cout << "MISS\n";
            incorrect_always++;
        }
    }

    cout << "Correct = " << correct_always << "\n";
    cout << "Incorrect = " << incorrect_always << "\n\n";

    cout << "=== 1-bit Branch Predictor ===\n";

    int correct_1bit = 0, incorrect_1bit = 0;
    int state = 1; 

    for (int i = 0; i < length; ++i) {
        char predicted = (state == 1) ? 'T' : 'N';
        char actual = sequence[i];

        cout << "Access " << (i + 1) << ": state = " << state
            << ", predicted = " << predicted
            << ", actual = " << actual << " -> ";

        if (predicted == actual) {
            cout << "OK\n";
            correct_1bit++;
        }
        else {
            cout << "MISS (state flipped)\n";
            state = 1 - state;
            incorrect_1bit++;
        }
    }

    cout << "Correct = " << correct_1bit << "\n";
    cout << "Incorrect = " << incorrect_1bit << "\n";

    return 0;
}
