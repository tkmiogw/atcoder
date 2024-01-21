#include <stdio.h>
#include <omp.h>
#include <bits/stdc++.h>
using namespace std;



int main(){
  int n = 100000;
  vector<int> a(n,1), b(n,1), c(n,0);
  for (int i=0; i<n; i++){
    c[i] = b[i] + a[i];
  }
}