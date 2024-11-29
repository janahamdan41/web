#include <iostream>
#include <chrono>
using namespace std;

int main() {

    auto start = std::chrono::high_resolution_clock::now();

    long long number;
    cout << "Enter the number: " << endl;
    cin >> number;



    long long fact = 1;

    for (int i = 2; i <= number; i++) {
        fact *= i;
    }


    cout << "Factorial of " << number << ": " << fact << endl;


    auto end = std::chrono::high_resolution_clock::now();


    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    cout << "Execution time: " << duration << " ms" << endl;

    return 0;
}
