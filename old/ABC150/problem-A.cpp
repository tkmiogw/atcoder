#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

#define FOR(i, start, end) for(i64 i = (start), CPP_CAT(i,xxxx_end)=(end); i < CPP_CAT(i,xxxx_end); ++i)
#define REP(i, n) FOR(i, 0, n)

//--------------------------------------------------------------------



int main() {
    int k, x;
    cin >> k >> x;
    string judge = "No";
    if (k*500 >= x) judge = "Yes";
    cout << judge << endl;

}