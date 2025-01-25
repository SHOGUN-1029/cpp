#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void printSubstrings(long long n)
{
    int s = log10(n);
 
    // 0.5 has been added because of it will
    // return double value like 99.556
    long long d = (long long)(pow(10, s) + 0.5);
    long long k = d;
    long long sum = 0;
 
    while (n) {
 
        // Print all the numbers from
        // starting position
        while (d) {
            sum = (sum + n / d) % MOD;
            d = d / 10;	
        }
        // Update the no.
        n = n % k;
 
        // Update the no.of digits
        k = k / 10;
        d = k;
    }
    cout << (sum % MOD) << endl;
}

int main()
{
    long long n;
    cin >> n;
    printSubstrings(n);
    return 0;
}
