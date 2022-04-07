#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(ll i=a;i<=b;++i)
#define ford(i,b,a) for(ll i=b;i>=a;--i)
#define ll long long

int t;
ll n,ans;

ll ucln(ll a,ll b){
    ll r;
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

ll bcnn(ll a,ll b){
    return a*b/ucln(a,b);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        ans=1;
        foru(i,2,n) ans=bcnn(ans,i);
        printf("%lld\n",ans);
    }
}