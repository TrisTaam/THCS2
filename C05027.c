#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long

int n;
ll a,b,ans1,ans2;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    ans1=LLONG_MAX;
    ans2=LLONG_MAX;
    while(n--){
        scanf("%lld%lld",&a,&b);
        if (ans1>a) ans1=a;
        if (ans2>b) ans2=b;
    }
    printf("%lld",ans1*ans2);
}