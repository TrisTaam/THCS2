#include<stdio.h>
#include<math.h>
#include<limits.h>
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
 
int t;
ll n,a[100];

int res(ll n){
    foru(i,0,92)
        if (a[i]==n) return 1;
    return 0;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    a[0]=0;
    a[1]=1;
    foru(i,2,92) a[i]=a[i-1]+a[i-2];
    while(t--){ 
        scanf("%lld",&n);
        printf("%s\n",(res(n)?"YES":"NO"));
    }
}  