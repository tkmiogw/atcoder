#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int size = s.length() - 1;
    int half = s.length() / 2;
    int counter = 0;
    for (int i = 0; i < half; ++i) {
        if (s[i] != s[size - i]) ++counter;
    }
    cout << counter << endl;
}