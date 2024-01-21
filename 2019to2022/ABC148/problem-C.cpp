#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


int main() {
    long long int a, b;
    std::cin >> a >> b;
    long long int c = a * b;
    long long int ans = c / gcd(a, b);
    cout << ans << endl;
}