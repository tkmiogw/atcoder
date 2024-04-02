#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)

int W, H;
char maze[510][510];
bool reached[510][510];

void search(int x, int y){
    if (x<0 || W<=x || y<0 || H<=y || maze[x][y]=='#') return;
    if (reached[x][y]) return;

    reached[x][y] = true;
    search(x+1,y);
    search(x-1,y);
    search(x,y+1);
    search(x,y-1);
}

int main(){
    cin >> H >> W;
    int a,b,c,d;
    rep1(y, H){
        rep1(x, W){
            cin >> maze[x][y];
            if (maze[x][y] == 's') a=x, b=y;
            if (maze[x][y] == 'g') c=x, d=y;
        }
    }
    search(a,b);

    if (reached[c][d]){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}