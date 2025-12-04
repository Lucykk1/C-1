#include <iostream>
using namespace std;

int task_1(int number) {
    return number * number;
}

bool task_2(int number) {
    return (number % 2 == 0);
}

void task_3() {
    cout << "Hello, world!" << endl;
}

int task_4(int a, int b) {
    return (a > b) ? a : b;
}

double task_5(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

void task_6(int N) {
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int task_7(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    return sum;
}

void task_8(int number) {
    cout << "Таблица умножения для числа " << number << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}
int task_9(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int task_10(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void task_11(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int task_12(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}
void task_13(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void task_14(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int task_15(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


int task_16(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

void task_17(int matrix[][3], int transposed[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}


bool task_18(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


void task_19(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int countAboveAverage(int matrix[5][5]) {

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            sum += matrix[i][j];
        }
    }


    double average = static_cast<double>(sum) / 25;

  
    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] > average) {
                count++;
            }
        }
    }

    return count;
}

void printMatrix(int matrix[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}


int main() {
    cout << "--- Задача 1 ---\n";
    int number1 = 5;
    cout << "Квадрат числа " << number1 << " = " << task_1(number1) << endl;
    cout << endl;

    cout << "--- Задача 2 ---\n";
    int number2 = 7;
    if (task_2(number2)) {
        cout << number2 << " - чётное число\n";
    }
    else {
        cout << number2 << " - нечётное число\n";
    }
    cout << endl;

    cout << "--- Задача 3 ---\n";
    task_3();
    cout << endl;

    cout << "--- Задача 4 ---\n";
    int a = 10, b = 20;
    cout << "Большее число: " << task_4(a, b) << endl;
    cout << endl;

    cout << "--- Задача 5 ---\n";
    int a5 = 5, b5 = 10, c5 = 15;
    cout << "Среднее значение: " << task_5(a5, b5, c5) << endl;
    cout << endl;

    cout << "--- Задача 6 ---\n";
    int N = 10;
    cout << "Числа от 1 до " << N << ": ";
    task_6(N);
    cout << endl;

    cout << "--- Задача 7 ---\n";
    cout << "Сумма чисел от 1 до " << N << " = " << task_7(N) << endl;
    cout << endl;

    cout << "--- Задача 8 ---\n";
    int number8 = 7;
    task_8(number8);
    cout << endl;

    cout << "--- Задача 9 ---\n";
    int arr9[] = { 1, 2, 3, 4, 5 };
    int size9 = sizeof(arr9) / sizeof(arr9[0]);
    cout << "Сумма элементов: " << task_9(arr9, size9) << endl;
    cout << endl;

    cout << "--- Задача 10 ---\n";
    int arr10[] = { 5, 3, 8, 1, 6 };
    int size10 = sizeof(arr10) / sizeof(arr10[0]);
    cout << "Минимальный элемент: " << task_10(arr10, size10) << endl;
    cout << endl;

    cout << "--- Задача 11 ---\n";
    int arr11[] = { 10, 20, 30, 40, 50 };
    int size11 = sizeof(arr11) / sizeof(arr11[0]);
    cout << "Элементы массива: ";
    task_11(arr11, size11);
    cout << endl;

    cout << "--- Задача 12 ---\n";
    int arr12[] = { -1, 2, -3, 4, -5 };
    int size12 = sizeof(arr12) / sizeof(arr12[0]);
    cout << "Количество отрицательных: " << task_12(arr12, size12) << endl;
    cout << endl;


    cout << "--- Задача 13 ---\n";
    int a13 = 5, b13 = 10;
    cout << "До обмена: a = " << a13 << ", b = " << b13 << endl;
    task_13(a13, b13);

    cout << "--- Задача 14 ---\n";
    int arr14_1[] = { 1, 2, 3 };
    int arr14_2[] = { 4, 5, 6 };
    int result14[3];
    int size14 = sizeof(arr14_1) / sizeof(arr14_1[0]);

    task_14(arr14_1, arr14_2, result14, size14);
    cout << "Результат сложения: ";
    task_11(result14, size14);
    cout << endl;


    cout << "--- Задача 15 ---\n";
    int number15 = 5;
    cout << "Факториал числа " << number15 << " = " << task_15(number15) << endl;
    cout << endl;

    cout << "--- Задача 16 ---\n";
    int matrix16[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Сумма главной диагонали: " << task_16(matrix16) << endl;
    cout << endl;


    cout << "--- Задача 17 ---\n";
    int transposed17[3][3];
    int size17 = 3;
    task_17(matrix16, transposed17, size17);
    cout << "Исходная матрица:\n";
    for (int i = 0; i < size17; i++) {
        for (int j = 0; j < size17; j++) {
            cout << matrix16[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Транспонированная матрица:\n";
    for (int i = 0; i < size17; i++) {
        for (int j = 0; j < size17; j++) {
            cout << transposed17[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "--- Задача 18 ---\n";
    string str18_1 = "level";
    string str18_2 = "hello";
    cout << str18_1 << " - " << (task_18(str18_1) ? "палиндром" : "не палиндром") << endl;
    cout << str18_2 << " - " << (task_18(str18_2) ? "палиндром" : "не палиндром") << endl;
    cout << endl;


    cout << "--- Задача 19 ---\n";
    int arr19[] = { 9, 5, 7, 1, 3 };
    int size19 = sizeof(arr19) / sizeof(arr19[0]);
    cout << "До сортировки: ";
    task_11(arr19, size19);
    task_19(arr19, size19);
    cout << "После сортировки: ";
    task_11(arr19, size19);
    cout << endl;

    cout << "--- Задача 20 ---\n";
    int matrix20[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    cout << "Матрица:\n";
    printMatrix(matrix20);

}
