#include <iostream>

bool isPrime(int n);
long long gcd(long long a, int b);

int main() {
    int n;
    std::cin >> n;
    long long p = 1;

    for (int i = 1; i <= n; i++) {
        p = (p * i) / gcd(p, i);
    }

    std::cout << p;

    return 0;
}

long long gcd(long long a, int b) {
    long long res = 0;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            res = i;
    }

    return res;
}