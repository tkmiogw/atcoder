#include <iostream>
#include <string>
#include <math.h> 
using namespace std;

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int out(int x) {
    int a[100010];
    for (int i = 1; i <= 100003; i++) {
        a[i] = i;
    }
    int init = x;
    if (x % 2 == 0) init = x + 1;
    int ans = 0;
    for (int i = init; i <= 100003; i += 2) {
        if (IsPrime(a[i])) {
          ans = a[i] ;
          break;
        }
    }
    return ans;
}


int main() {
    int x, ans;
    cin >> x;
    if (IsPrime(x)) ans = x;
		else ans = out(x); 
	cout << ans << endl;
}