//sample answer
#include <bits/stdc++.h>
using namespace std;

int N;
int A[20];
int x[20][20];
int y[20][20];

int counter(int x) {
    if(x == 0) return 0;
    return counter(x >> 1) + (x & 1);
} //2進数下の桁からカウント。(x & 1)で下1桁が1なら+1。末桁を消去。

void solve() {
    cin >> N;
    for(int i = 1; i <= N; i++) { //データの回収をしている
        cin >> A[i];
        for(int j = 1; j <= A[i]; j++) {
            cin >> x[i][j] >> y[i][j];
        }
    }
    int ans = 0;
    for(int bits = 1; bits < (1 << N); bits++) {　//(bit全探索のメイン)正直者を1,不親切を0と割り振ることで判定を行なっているっぽい
        bool ok = true;
        for(int i = 1; i <= N; i++) { //A-san,B-san,...の検証
            if(!(bits & (1 << (i-1)))) continue; //正直者だったら検証を行う(正直者なら2進数の桁にフラグ=1が立っている)
            for(int j = 1; j <= A[i]; j++) { //証言数でループを組んでいる
                if(((bits >> (x[i][j]-1)) & 1) ^ y[i][j]) ok = false; //排他倫理和を利用。bitsのフラグと証言が一致しているかを確かめる
                //確認したい箇所のフラグを0桁目にシフト。これに1が含まれているかどうか。
                //実際に正直者か否かは1,0。これと証言の1,0と排他倫理和をとっている(一致していれば0=false(検証続行))
            } //あるbits(場合の数)で矛盾がなかった場合はok=trueのまま
        }
        if(ok) ans = max(ans, counter(bits)); //trueの最大値を抽出。breakは、bitsの昇順が人数の昇順ではないためできない。
    }
    cout << ans << endl;
    return; //input,output指定がないときにvoid
}

int main() {
    solve();
    return 0;
}
