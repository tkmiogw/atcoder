#include <iostream>
#include <string>
using namespace std;

void ans() {
    long long int n, a, b;
    std::cin >> n >> a >> b;
    long long int ans = 0;
    if ((b-a)%2 ==0) ans = (b-a)/2;
    else {
        long long int x = (a+b-1)/2;
        long long int y = (2*n+1-a-b)/2;
        if (x > y) ans = y;
        else ans = x;
    }
    cout << ans << endl;
}

int main() {
  ans();
  return 0;
}