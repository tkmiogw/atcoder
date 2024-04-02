#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

//--------------------------------------------------------------------



void func() {
        int n, m;
        cin >> n >> m;
        int a[n], w[n], p;
        for(int i=0; i<n; i++){
                a[i] = 0;
                w[i] = 0;
        }
        string s;
        for(int i=0; i<m; i++){
                cin >> p >> s;
                if((s == "AC")&&(a[p-1] == 0)) a[p-1]++;
                if((s == "WA")&&(a[p-1] == 0)) w[p-1]++;
        }
        int AC=0, WA=0;
        for(int i=0; i<n; i++){
                AC += a[i] ;
                if (a[i]==1) WA += w[i];
        }
        cout << AC << " " << WA << endl;
}

int main(){
        func();
        return 0;
}