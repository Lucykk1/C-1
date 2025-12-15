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
11) #include <iostream>
#include <vector>


int countEven(const std::vector<int>& arr);

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8};
    std::cout << "Чётных элементов: " << countEven(data) << std::endl;
    return 0;
}
int countEven(const std::vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (num % 2 == 0) {
            count++;
        }
    }
    return count;
}
12) #include <iostream>


int sumDiagonal4x4(const int arr[4][4]);

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    std::cout << "Сумма диагонали: " << sumDiagonal4x4(matrix) << std::endl;
    return 0;
}


int sumDiagonal4x4(const int arr[4][4]) {
    int sum = 0;
    for (int i = 0; i < 4; ++i) {
        sum += arr[i][i];
    }
    return sum;
}

13) #include <iostream>
#include <vector>

double average(const std::vector<double>& arr);

int main() {
    std::vector<double> data = {1.5, 2.5, 3.5, 4.5};
    std::cout << "Среднее: " << average(data) << std::endl;
    return 0;
}


double average(const std::vector<double>& arr) {
    if (arr.empty()) return 0.0;
    double sum = 0.0;
    for (double val : arr) {
        sum += val;
    }
    return sum / arr.size();
}
14) #include <iostream>

int counter = 0;  // Глобальная переменная

void incrementCounter();
void printCounter();

int main() {
    incrementCounter();
    incrementCounter();
    printCounter();  // Выведет 2
    return 0;
}

void incrementCounter() {
    counter++;
}

void printCounter() {
    std::cout << "Счётчик: " << counter << std::endl;
}

15) #include <iostream>


void fillArray(int (&arr)[6]);

int main() {
    int arr[6];
    fillArray(arr);
    for (int i = 0; i < 6; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}


void fillArray(int (&arr)[6]) {
    for (int i = 0; i < 6; ++i) {
        arr[i] = i * 10;
    }
}

16)#include <iostream>
void zeroBelowDiagonal(int (&matrix)[3][3]);

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    zeroBelowDiagonal(matrix);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}



void zeroBelowDiagonal(int (&matrix)[3][3]) {
    for (int i = 1; i < 3; ++i) {  
        
        for (int j = 0; j < i; ++j) {  
            
            matrix[i][j] = 0;
        }
    }
}
17)
    #include <iostream>
#include <vector>

auto findMaxIndex(const std::vector<int>& arr) -> size_t;

int main() {
    std::vector<int> data = {3, 7, 2, 9, 1};
    size_t idx = findMaxIndex(data);
    std::cout << "Индекс максимума: " << idx << " (значение: " << data[idx] << ")" << std::endl;
    return 0;
}


auto findMaxIndex(const std::vector<int>& arr) -> size_t {
    if (arr.empty()) return 0;
    size_t maxIdx = 0;
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }
    }
    return maxIdx;
}

18) #include <iostream>

int value = 100;  

void showValues();

int main() {
    showValues();
    return 0;
}

void showValues() {
    int value = 42; 
    std::cout << "Локальная value: " << value << std::endl;
    std::cout << "Глобальная value: " << ::value << std::endl;  
}
19) 
#include <iostream>


void transposeMatrix(int (&matrix)[3][3]);

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Исходная матрица:" << std::endl;
    for (int i = 0; i < 3; ++i)

20) #include <iostream>
#include <vector>


auto countAboveAverage(const std::vector<double>& arr) -> size_t;

int main() {
    std::vector<double> data = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0};
    
    size_t count = countAboveAverage(data);
    
    std::cout << "Количество элементов выше среднего: " << count << std::endl;
    
    return 0;
}

auto countAboveAverage(const std::vector<double>& arr) -> size_t {
    // Проверяем, что массив не пустой
    if (arr.empty()) {
        return 0;
    }
    
 
    double sum = 0.0;
    for (double value : arr) {
        sum += value;
    }
    double average = sum / arr.size();
    

    size_t count = 0;
    for (double value : arr) {
        if (value > average) {
            count++;
        }
    }
    
    return count;
}
