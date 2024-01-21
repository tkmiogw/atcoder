#include <bits/stdc++.h>
using namespace std;

int mini(const int* array, size_t size)
{
    assert(array != NULL);
    assert(size >= 1);

    int min = array[0];
    for (size_t i = 1; i < size; ++i) {
        if (min > array[i]) {
            min = array[i];
        }
    }

    return min;
}

int main() {
    int k, l, m;
    cin >> k >> l >> m;
    int a[k], b[l], aa[m], bb[m], c[m];
    for(int i=0; i<k; i++) cin >> a[i];    
    for(int i=0; i<l; i++) cin >> b[i];    
    for(int i=0; i<m; i++){
        cin >> aa[i] >> bb[i] >> c[i];
    }
    int ans = mini(a,k) + mini(b,l);
    for(int i=0; i<m; i++){
        ans = std::min(ans, a[aa[i]-1]+b[bb[i]-1]-c[i]);
    }
    cout << ans << endl;
}