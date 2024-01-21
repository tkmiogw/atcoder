#include <bits/stdc++.h>
using namespace std;


int main() {
    int a, b, c;
    cin >> a >> b >> c;
  	int count = 0;
    if (a == b) count++;
    if (a == c) count++;
    if (c == b) count++;
    if (count == 1){
        cout << "Yes" <<endl;
    }
    else{
        cout << "No" <<endl;
    }
}