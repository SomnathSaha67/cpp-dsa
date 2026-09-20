#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int countSetBits(long long n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) count++;   
        n >>= 1;              
    }
    return count;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long fact = factorial(n);
    cout << "Factorial(" << n << ") = " << fact << endl;

    int bits = countSetBits(fact);
    cout << "Set bits in factorial(" << n << ") = " << bits << endl;

    return 0;
}
