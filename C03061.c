#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,a,i,j,kt;
ll n,n1;

int palin(ll n){
    ll n1=n,s=0;
    while(n>0){
        s=s*10+n%10;
        n/=10;
    }
    return s==n1;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        a=n%10;
        n/=10;
        n1=0;
        while(n>=10){
            n1=n1*10+n%10;
            n/=10;
        }
        printf("%s\n",((a==2*n||n==2*a)&&palin(n1)?"YES":"NO"));
    }
}