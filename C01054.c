#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[2000005],b[148938],i,j,cnt;
ll ans;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    a[0]=1;
    a[1]=1;
    for(i=2;i*i<=2000000;++i)
        if (!a[i])
            for(j=i*i;j<=2000000;j+=i) a[j]=i;
    for(i=2;i<=2000000;++i)
        if (!a[i]) a[i]=i;
    ans=0;
    while(t--){
        scanf("%d",&n);
        while(n>1){
            ans+=a[n];
            n/=a[n];
        }
    }
    printf("%lld",ans);
}