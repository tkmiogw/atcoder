#include <iostream>
#include <string>
using namespace std;

int main() {
    long long int a, b, k;
    cin >> a >> b >> k;
    long long int ansa = a;
    long long int ansb = b;
    if (k <= a) ansa = a - k;
        else if (k <= a + b) {
            ansa = 0;
            ansb = a + b - k;
        }
            else {
                ansa = 0;
                ansb = 0;
            }
    cout << ansa << " " << ansb << endl;
}