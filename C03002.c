#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,a[1000005],i,j;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=2;i<n;++i) a[i]=1;
    for(i=2;i*i<=n;++i)
        if (a[i])
            for(j=i*i;j<=n;j+=i) a[j]=0;
    for(i=2;i<n;++i)
        if (a[i]) printf("%d\n",i);
}