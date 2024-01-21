#include <iostream>
#include <string>
using namespace std;

int N;
int A[200001];


int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    int id = 1;
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (A[i] == id) id += 1;
        else count += 1;
    }
    if (count == N) count = -1;
    cout << count << endl;
}