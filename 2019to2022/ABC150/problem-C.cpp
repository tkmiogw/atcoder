#include <bits/stdc++.h>
using namespace std;

#define FOR(i, start, end) for(i64 i = (start), CPP_CAT(i,xxxx_end)=(end); i < CPP_CAT(i,xxxx_end); ++i)
#define REP(i, n) FOR(i, 0, n)

//--------------------------------------------------------------------

int fac(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> P(n), Q(n);
    for(int i=0; i<n; i++) cin >> P[i]; 
    for(int i=0; i<n; i++) cin >> Q[i];
    int a = 0, b = 0;
	for (int i = 0; i < n-1; i++) {
		if (P[i] != 1) {
			a += (P[i] - 1) * fac(n - i - 1);
		}
		if (Q[i] != 1) {
			b += (Q[i] - 1) * fac(n - i - 1);
		}
		for (int j = i + 1; j < n; j++) {
			if (P[i] < P[j]) {
				P[j] -= 1;
			}
			if (Q[i] < Q[j]) {
				Q[j] -= 1;
            }
        }
    }
    int ans = std::abs(a-b);
    cout << ans << endl;




    
}