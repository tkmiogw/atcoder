#include <bits/stdc++.h>
using namespace std;

#define FOR(i, start, end) for(i64 i = (start), CPP_CAT(i,xxxx_end)=(end); i < CPP_CAT(i,xxxx_end); ++i)
#define REP(i, n) FOR(i, 0, n)

//--------------------------------------------------------------------



int main() {
    int n;
    std::string s;
    cin >> n >> s;
    int ans = 0;
    for(int i=0; i<n-2; i++) {
        if ((s[i] == 'A')&&(s[i+1] == 'B')&&(s[i+2] == 'C')) ans += 1;
    }
    cout << ans << endl;
}