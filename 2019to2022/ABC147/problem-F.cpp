//sample answer"https://atcoder.jp/contests/abc147/submissions/8910401"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=200005;
ll n,a,q;
struct node { ll l,r; } e[maxn];
inline bool operator < (const node &a,const node &b) { return a.l<b.l; }
int main()
{
	scanf("%lld%lld%lld",&n,&a,&q);
	if(a==0 && q==0) return printf("1\n"),0;
	if(q==0) return printf("%lld\n",n+1),0;
	if(q<0) a+=(n-1)*q,q=-q;
	ll val=__gcd(abs(a),q);
	a/=val,q/=val;
	ll i,j,k,l,r,ans=0;
	for(i=0;i<=min(q-1,n);i++)
	{
		// a * x + q * y
		// (x % q) * a + ((x / q) * a + y)
		for(j=i,k=0;j<=n;j+=q,k++)
			e[k].l=j*(j-1)/2+k*a,e[k].r=j*(2*n-j-1)/2+k*a;
		sort(e,e+k);
		l=e[0].l,r=e[0].r;
		for(j=1;j<k;j++)
		{
			if(e[j].l>r) ans+=r-l+1,l=e[j].l;
			r=max(r,e[j].r);
		}
		ans+=r-l+1;
	}
	printf("%lld\n",ans);
	return 0;
}
