#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[105],i,max;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=0;i<n;++i) scanf("%d",&a[i]);
    for(i=n-1;i>=0;--i) printf("%d ",a[i]);
}