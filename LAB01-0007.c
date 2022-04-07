#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll n,a,i,s;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&n);
    s=0;
    for(i=0;i<n;++i){
        scanf("%lld",&a);
        s+=a;
    }
    printf("%.3lf",(double)s/n);
}