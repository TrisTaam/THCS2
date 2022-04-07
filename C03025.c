#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long

int t,a,b,ans;

int nt(int n){
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}

int res(int n){
    if (!nt(n)) return 0;
    int s=0,a;
    while(n){
        a=n%10;
        if (a!=2&&a!=3&&a!=5&&a!=7) return 0;
        s+=a;
        n/=10;
    }
    return nt(s);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        ans=0;
        foru(i,a,b) ans+=res(i);
        printf("%d\n",ans);
    }
}