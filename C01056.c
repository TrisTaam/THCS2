#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll t,n,a,b,kt;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        a=n%10;
        n/=10;
        kt=1;
        while(n>0){
            b=n%10;
            if (a<b){
                kt=0;
                break;
            }
            a=b;
            n/=10;
        }
        printf("%s\n",(kt?"YES":"NO"));
    }
}