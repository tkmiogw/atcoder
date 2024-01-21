#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)


void print_vec(vector<int> vec) {
    cout << "[ ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }
    cout << "]" << endl;
}

string read_name(){
    string name, equal;
    cin >> name >> equal;
    return name;
}

int read_int(map<string, int> &var_int){
    string val;
    cin >> val;
    //数値か判定→数値or変数
    return isdigit(val[0])?stoi(val):var_int[val];
}

int calc_int(map<string, int> &var_int){
    string symbol = "";
    int result = 0;
    while (symbol != ";"){
        //奇数番目は数字or変数なので以下の書き方で良い(read_intで1入力ある)
        int val = read_int(var_int);
        if (symbol == "") result = val;
        if (symbol == "+") result += val;
        if (symbol == "-") result -= val;
        //symbolは偶数番目に入力されるので、下で入力
        cin >> symbol;
    }
    return result;
}

vector<int> read_vec_val(map<string, int> &var_int){
    vector<int> result;
    string symbol = "";
    //1ベクトル分だけ処理するよ
    while (symbol != "]"){
        //1つcinが処理される
        int val = read_int(var_int);
        result.push_back(val);
        cin >> symbol;
    }
    return result;
}

vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec){
    string val;
    cin >> val;
    //ベクトル1つぶんだけ読み込むよ
    return (val == "[")?(read_vec_val(var_int)):(var_vec[val]);
}

vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec){
    string symbol;
    vector<int> result;
    while (symbol != ";"){
        vector<int> vec = read_vec(var_int, var_vec);
        if (symbol == "") result = vec;
        if (symbol == "+"){
            for (int i=0; i<result.size(); i++) result[i] += vec[i];
        }
        if (symbol == "-"){
            for (int i=0; i<result.size(); i++) result[i] -= vec[i];
        }
    cin >> symbol;
    }
    return result;
}


int main() {
  int N;
  cin >> N;
  map<string, int> var_int; // intの変数を管理するmap
  map<string, vector<int>> var_vec; // vectorの変数を管理するmap

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;

    if (s == "int") {
      string name = read_name();
      var_int[name] = calc_int(var_int);
    }
    if (s == "vec") {
      string name = read_name();
      var_vec[name] = calc_vec(var_int, var_vec);
    }
    if (s == "print_int") {
      cout << calc_int(var_int) << endl;
    }
    if (s == "print_vec") {
      print_vec(calc_vec(var_int, var_vec));
    }
  }
}
