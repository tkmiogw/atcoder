#include <iostream>
#include <string>
using namespace std;


int main() {
    long long int n;
    cin >> n;
    long long int ans = 0;
    if (n%2 != 0) cout << ans << endl;
    else{
        while (n /5 > 0) {
            ans += n / 10;
            n = n /5;
        }
        cout << ans << endl;
    }
}