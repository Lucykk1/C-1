1)#include <iostream>
using namespace std;
 const int SIZE = 10;
 int arr[SIZE];
 int sum = 0;

 
 cout << "enter 10 numbers : " << endl;
 for (int i = 0; i < SIZE; i++) {
     cout << "elements " << i + 1 << ": ";
     cin >> arr[i];
 }


 cout << "Array: ";
 for (int i = 0; i < SIZE; i++) {
     cout << arr[i] << " ";
 }
 cout << endl;

 for (int i = 0; i < SIZE; i++) {
     if (arr[i] > 0) {
         sum += arr[i];
     }
 }

 
 cout << "sum:  " << sum << endl

2)
  #include <iostream>
using namespace std;
  const int SIZE = 10;
int arr[SIZE];
int sum = 0;

   
cout << "eNTER:" << endl;
for (int i = 0; i < SIZE; i++) {
    cout <<  i + 1 << ": ";
    cin >> arr[i];
}

cout << "Array:  ";
for (int i = 0; i < SIZE; i++) {
    cout << arr[i] << " ";
}
cout << endl;


for (int i = 0; i < SIZE; i += 2) {
    sum += arr[i];
}


cout << "Sum: " << sum << endl;


3)  #include <iostream>
using namespace std;


void replaceNegativesWithZero(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 8;
    int myArray[SIZE] = {-5, 3, -2, 0, 7, -1, 4, -8};

    cout << "Исходный массив: ";
    printArray(myArray, SIZE);

   
    replaceNegativesWithZero(myArray, SIZE);

    cout << "После замены отрицательных на нули: ";
    printArray(myArray, SIZE);

    return 0;
}
4) #include <iostream>
using namespace std;

int findMinElement(int arr[], int size);



int findMinElement(int arr[], int size) {
   
    int min = arr[0];
    
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];  
        }
    }
    
    return min;
}

int main() {
    const int SIZE = 6;
    int numbers[SIZE] = {15, -3, 8, -7, 0, 4};
    
  
    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    
    int minValue = findMinElement(numbers, SIZE);
    cout << "Минимальный элемент: " << minValue << endl;
    
    return 0;
}
5)
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    const int SIZE = 8;
    int numbers[SIZE] = { 10, 3, 7, 15, 9, 3, 22, 4 };

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int searchKey;
    cout << "Введите число для поиска: ";
    cin >> searchKey;

    int index = linearSearch(numbers, SIZE, searchKey);

    if (index != -1) {
        cout << "Элемент " << searchKey << " найден на позиции " << index << endl;
    }
    else {
        cout << "Элемент " << searchKey << " не найден в массиве" << endl;
    }

    return 0;
}
6)
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Меняем элементы местами
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  


        if (arr[mid] == key) {
            return mid;  
        }

        if (arr[mid] < key) {
            left = mid + 1;  
        } else {
            right = mid - 1; 
        }
    }

    return -1;  /
}
7) #include <iostream>
using namespace std;

void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
           
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
 
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 8;
    int numbers[SIZE] = { 64, 34, 25, 12, 22, 11, 90, 5 };

    cout << "Исходный массив: ";
    printArray(numbers, SIZE);


    bubbleSortDescending(numbers, SIZE);

    cout << "Отсортированный по убыванию массив: ";
    printArray(numbers, SIZE);

    return 0;
}
8) #include <iostream>
using namespace std;

void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
           
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
 
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 8;
    int numbers[SIZE] = { 64, 34, 25, 12, 22, 11, 90, 5 };

    cout << "Исходный массив: ";
    printArray(numbers, SIZE);


    bubbleSortDescending(numbers, SIZE);

    cout << "Отсортированный по убыванию массив: ";
    printArray(numbers, SIZE);

    return 0;
}
9) #include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    // Начинаем со второго элемента (индекс 1)
    for (int i = 1; i < size; i++) {
        int key = arr[i]; 
        int j = i - 1;  

       
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

 
        arr[j + 1] = key;
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 7;
    int numbers[SIZE] = {12, 11, 13, 5, 6, 7, 8};

    cout << "Исходный массив: ";
    printArray(numbers, SIZE);

    insertionSort(numbers, SIZE);

    cout << "Отсортированный массив: ";
    printArray(numbers, SIZE);

    return 0;
}

10) #include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int matrix[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += matrix[i][i];  // элемент [i][i] лежит на главной диагонали
    }
    
    cout << "Сумма элементов главной диагонали: " << sum << endl;
    return 0;
}
11) #include <iostream>
using namespace std;

void findMaxInRows(int arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        int max = arr[i][0];
        for (int j = 1; j < 4; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        cout << "Максимум в строке " << i << ": " << max << endl;
    }
}

int main() {
    int matrix[4][4] = {
        {1, 5, 3, 9},
        {4, 2, 8, 6},
        {7, 1, 4, 3},
        {2, 9, 5, 7}
    };
    
    findMaxInRows(matrix);
    return 0;
}
12) #include <iostream>
using namespace std;

void counter() {
    static int count = 0; 
    count++;
    cout << "Вызов №" << count << endl;
}

int main() {
    counter();  
    counter();  
    counter(); 
    return 0;
}

13) #include <iostream>
using namespace std;

int globalVar = 100;  

void showScope() {
    int globalVar = 50; 
    cout << "Локальная globalVar: " << globalVar << endl;
    cout << "Глобальная globalVar: " << ::globalVar << endl;  // доступ через ::
}

int main() {
    showScope();
    return 0;
}
14)  #include <iostream>
using namespace std;

auto calculateAverage(int arr[], int size) -> double {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int size = 5;
    
    double avg = calculateAverage(data, size);
    cout << "Среднее арифметическое: " << avg << endl;
    return 0;
}
15) #include <iostream>
using namespace std;

void printChar(char ch = '*', int count = 5) {
    for (int i = 0; i < count; i++) {
        cout << ch;
    }
    cout << endl;
}

int main() {
    printChar();       
    printChar('#');     
    printChar('x', 3); 
    return 0;
}
16) #include <iostream>
using namespace std;

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Максимум из 10 и 20: " << max(10, 20) << endl;
    return 0;
}
17) #include <iostream>
using namespace std;

void print(int value) {
    cout << "int: " << value << endl;
}

void print(double value) {
    cout << "double: " << value << endl;
}

void print(int arr[], int size) {
    cout << "array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    print(42);
    print(3.14);
    int arr[] = {1, 2, 3};
    print(arr, 3);
    return 0;
}
18) #include <iostream>
using namespace std;

void transpose(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {  // только выше диагонали
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    cout << "Исходная матрица:" << endl;
    printMatrix(mat);
    
    transpose(mat);
    
    cout << "Транспонированная матрица:" << endl;
    printMatrix(mat);
    
    return 0;
}
19) #include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}


int sum(int arr[], int size = 10) {  // size по умолчанию = 10
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {

    cout << "Сумма 5 и 7: " << sum(5, 7) << endl;

    int data1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Сумма массива (по умолчанию 10 элементов): " << sum(data1) << endl;

   
    int data2[5] = {2, 4, 6, 8, 10};
    cout << "Сумма массива из 5 элементов: " << sum(data2, 5) << endl;

    return 0;
}
20) #include <iostream>
using namespace std;
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;  
        }

        if (arr[mid] < key) {
            left = mid + 1;  
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 15;
    int arr[SIZE];

srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Исходный массив: ";
    printArray(arr, SIZE);

    selectionSort(arr, SIZE);
    cout << "Отсортированный массив: ";
    printArray(arr, SIZE);


    int searchKey;
    cout << "Введите число для поиска: ";
    cin >> searchKey;

    int result = binarySearch(arr, SIZE, searchKey);


    if (result != -1) {
        cout << "Число " << searchKey << " найдено на позиции " << result << endl;
    } else {
        cout << "Число " << searchKey << " не найдено в массиве" << endl;
    }

    return 0;
}
