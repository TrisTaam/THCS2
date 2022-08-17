#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,i,a[40];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    a[1]=0;
    a[2]=1;
    for(i=3;i<=n;++i) a[i]=a[i-1]+a[i-2];
    for(i=1;i<=n;++i) printf("%d ",a[i]);
}