#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll t,n;

int res(ll n){
    int a;
    while(n>0){
        a=n%10;
        if (a%2==1) return 0;
        n/=10;
    }
    return 1;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        printf("%s\n",(res(n)?"YES":"NO"));
    }
}