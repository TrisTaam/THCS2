#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,i;
ll a[100];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    a[1]=1;
    a[2]=1;
    for(i=3;i<=92;++i) a[i]=a[i-1]+a[i-2];
    while(t--){
        scanf("%d",&n);
        printf("%lld\n",a[n]);
    }
}