#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,m,a[105],b[105],x,i;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d %d",&n,&m);
    for(i=0;i<n;++i) scanf("%d",&a[i]);
    for(i=0;i<m;++i) scanf("%d",&b[i]);
    scanf("%d",&x);
    for(i=0;i<x;++i) printf("%d ",a[i]);
    for(i=0;i<m;++i) printf("%d ",b[i]);
    for(i=x;i<n;++i) printf("%d ",a[i]);
}