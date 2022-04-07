#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(ll i=a;i<=b;++i)
#define ford(i,b,a) for(ll i=b;i>=a;--i)
#define ll long long

int t,n,p,ans;

int res(int n,int x){
    int ans=0;
    while(n){
        ans+=n/x;
        n/=x;
    }
    return ans;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&p);
        printf("%d\n",res(n,p));
    }
}