#include<stdio.h>
#include<math.h>
#include<limits.h>
 
#define foru(i,a,b) for(ll i=a;i<=b;++i)
#define ford(i,b,a) for(ll i=b;i>=a;--i)
#define ll long long
 
int t,n,a[10]={0,1,9,18,90,180,900,1800,9000};

int palin(ll n){
    ll n1=n;
    ll s=0;
    int a,p=0;
    while(n1>0){
        a=n1%10;
        s=s*10+a;
        p+=a;
        n1/=10;
    }
    return s==n&&p%10==0;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){ 
        scanf("%d",&n);
        printf("%d\n",a[n-1]);
    }
}