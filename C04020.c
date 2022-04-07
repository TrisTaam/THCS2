#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[210],x,i;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=0;i<n;++i) scanf("%d",&a[i]);
    scanf("%d",&x);
    x%=n;
    for(i=n;i<n*2;++i) a[i]=a[i-n];
    for(i=x;i<x+n;++i) printf("%d ",a[i]);
}