#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[1234],b[10005],i,j,cnt;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    for(i=2;i<=10000;++i) b[i]=1;
    for(i=2;i*i<=10000;++i)
        if (b[i])
            for(j=i*i;j<=10000;j+=i) b[j]=0;
    cnt=0;
    for(i=2;i<=10000;++i)
        if (b[i]) a[cnt++]=i;
    while(t--){
        scanf("%d",&n);
        for(i=0;i<=cnt;++i){
            if (a[i]>=n) break;
            for(j=i;j<=cnt;++j){
                if (a[j]>=n) break;
                if (a[i]+a[j]==n) printf("%d %d ",a[i],a[j]);
            }
        }
        printf("\n");
    }
}