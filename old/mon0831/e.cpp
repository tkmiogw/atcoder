#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using Graph = vector<vector<int> >;

ll cnt = 0;
// �[���D��T��
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; // v ��K��ςɂ���
    cnt++;
    // v ����s����e���_ next_v �ɂ���
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v ���T���ς�������X���[
        dfs(G, next_v); // �ċA�I�ɒT��
    }
}

int main() {
    // ���_���ƕӐ�
    int N;
    cin >> N;

    // �O���t���͎�� (�����ł͖����O���t��z��)
    Graph G(N);
    for (int i = 0; i < N-1; ++i) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // ���_ 0 ���X�^�[�g�Ƃ����T��
    seen.assign(N, false); // �S���_���u���K��v�ɏ�����
    dfs(G, 0);
    if (cnt & 1) cout << "First" << endl;
    else cout << "Second" << endl;
}
