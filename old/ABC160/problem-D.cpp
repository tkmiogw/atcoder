#include <bits/stdc++.h>
using namespace std;
long long int big = 1e5; 

int main() {
    long long int n, x, y;
    cin >> n >> x >> y;
    x--, y--;
    vector<vector<long long int>> dist(n, vector<long long int>(n, big));
    for(int i=0; i<n; i++){
        dist[i][i] = 0;
    }    
    for(int i=0; i<n-1; i++){
        dist[i][i+1] = 1;
        dist[i+1][i] = 1;
    }
    dist[x][y] = 1;
    dist[y][x] = 1;
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    vector<long long int> count(n+5,0);
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            count[dist[i][j]]++;
        }
    }
    for(int i=1; i<n; i++){
        cout << count[i] << endl;
    }
}