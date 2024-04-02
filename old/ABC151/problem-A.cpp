#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

#define FOR(i, start, end) for(i64 i = (start), CPP_CAT(i,xxxx_end)=(end); i < CPP_CAT(i,xxxx_end); ++i)
#define REP(i, n) FOR(i, 0, n)

//--------------------------------------------------------------------



int main() {
    std::string c;
    cin >> c ;
    std::string alp = "abcdefghijklmnopqrstuvwxyz";
    char ans = alp[alp.find(c)+1];
    cout << ans << endl;
}

