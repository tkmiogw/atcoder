//sample answer"https://atcoder.jp/contests/abc147/submissions/8909282"
#include<stdio.h>
long long int a[1000000]; //long long型にしている(箱のサイズだよねこれ?)先に指定しないといけない
int mod=1e9+7;
int main() {
	int n,i,j;
	long long int s=0,c,d=1;
	scanf("%d",&n); //初めのインプット
	for(i=1;i<=n;i++) scanf("%lld",&a[i]); //Aたちのインプット
	for(i=0;i<60;i++) { //2進数に書き直して2^60まで(各bitの1の和を求めるのが最速)
        c=0; //7行目で型は指定しているのでOK
        for(j=1;j<=n;j++) { 
            if(a[j]&1) c++; 
            a[j]=a[j]>>1; 
        }
		s=s+(c*(n-c)%mod)*d%mod; //1の個数*0の個数で1がいくつ返ってくるか判定できる
		d=d*2%mod; //dを*2して次の桁へ
	}
	printf("%lld",s%mod);
} 
