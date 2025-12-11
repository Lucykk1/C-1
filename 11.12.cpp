1)#include <iostream>

auto square(int x) -> int {
    return x * x;
}

int main() {
    std::cout << "squere of 5: " << square(5) << std::endl;
    return 0;
}
2)#include <iostream>

auto min(int a, int b) -> int {
    return (a < b) ? a : b;
}

int main() {
    std::cout << "Minimum from 10 and 7: " << min(10, 7) << std::endl;
    return 0;
}

3)#include <iostream>

int globalVar = 42;
void showVars() {
    int localVar = 15; 
    std::cout << "global: " << globalVar << " local: " << localVar << std::endl;
}

int main() {
    showVars();
    return 0;
}
4) #include <iostream>

void counter() {
    static int count = 0; 
    count++;
    std::cout << "enter №" << count << std::endl;
}

int main() {
    counter(); 
    counter(); 
    counter(); 
    return 0;
}

5) #include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int data[] = {1, 2, 3, 4, 5};
    printArray(data, 5);
    return 0;
}

6)
  #include <iostream>

int sum(int a, int b); // прототип

int main() {
    std::cout << "Сумма 3 и 4: " << sum(3, 4) << std::endl;
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
7) #include <iostream>

void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printMatrix(mat);
    return 0;
}
8) #include <iostream>

void increaseByFive(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] += 5;
    }
}

int main() {
    int data[] = {1, 2, 3};
    increaseByFive(data, 3);
    for (int x : data) {
        std::cout << x << " "; // 6 7 8
    }
    return 0;
}

9) #include <iostream>
#include "globals.h"

void showValue() {
    std::cout << "Значение sharedValue: " << sharedValue << std::endl;
}

int main() {
    showValue();
    return 0;
}

10) 
  #include <iostream>

auto arraySum(int arr[], int size) -> int {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int data[] = {1, 2, 3, 4};
    std::cout << "Сумма: " << arraySum(data, 4) << std::endl;
    return 0;
}


