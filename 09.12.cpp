#include <iostream>
#include <thread>
#include <chrono>  
using namespace std;

const int N = 1000000;
int arr[N];

long long partial_sum(int start, int end) {
    long long s = 0;
    for (int i = start; i < end; i++) s += arr[i];
    return s;
}

int main()
{
    for (int i = 0; i < N; i++) arr[i] = 1;

    long long sum1, sum2;
    auto start_time = chrono::high_resolution_clock::now();

    thread t1([&]() { sum1 = partial_sum(0, N / 2); });
    thread t2([&]() { sum2 = partial_sum(N / 2, N); });

    t1.join();
    t2.join();

    auto end_time = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);

    cout << "total = " << sum1 + sum2 << endl;
    cout << "Time taken: " << duration.count() << " ms" << endl;

    return 0;
}
