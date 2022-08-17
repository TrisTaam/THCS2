#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll t,a,b,c;

ll ucln(ll a,ll b){
    ll r;
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&a,&b);
        c=ucln(a,b);
        printf("%lld %lld\n",a*b/c,c);
    }
}