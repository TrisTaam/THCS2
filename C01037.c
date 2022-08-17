#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll a,b;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld%lld",&a,&b);
    if (a>b) printf("%lld",(a+b)*(a-b+1)/2);
    else printf("%lld",(a+b)*(b-a+1)/2);
}