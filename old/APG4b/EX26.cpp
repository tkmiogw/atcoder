#include <bits/stdc++.h>
using namespace std;

//実はEX24です。悪しからず。
// 以下に、24時間表記の時計構造体 Clock を定義する


struct Clock{
    int hour;
    int minute;
    int second;
    void set(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
    }
    string to_str(){
        string time;
        vector<int> cont = {hour, minute, second};
        for (int i=0; i < 3; i++){
            if (cont[i] < 10) time += '0';
            time += to_string(cont[i]);
            if (i<2) time += ':';
        }
        return time;
    }
    void shift(int diff_second){
        second += diff_second;
        while (second<0) {
            second += 60;
            minute--;
        }
        while (second>59) {
            second -= 60;
            minute++;
        }
        while (minute<0) {
            minute += 60;
            hour--;
        }
        while (minute>59) {
            minute -= 60;
            hour++;
        }
        while (hour < 0) hour += 24;
        while (hour > 23) hour -=24;
    }
};

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
