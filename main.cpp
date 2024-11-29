#include <iostream>
#include <chrono>
using namespace std;


long long factorial(long long n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {

    auto start = chrono::high_resolution_clock::now();

    long long number;
    cout << "Enter the number: ";
    cin >> number;

    long long fact = factorial(number);

    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    cout << "Factorial of " << number << " is: " << fact << endl;
    cout << "Execution time: " << duration << " ms" << endl;

    return 0;
}
