#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[105],i,min1,min2;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    min1=INT_MAX;
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        if (min1>a[i]) min1=a[i];
    }
    min2=INT_MAX;
    for(i=0;i<n;++i)
        if (a[i]>min1&&min2>a[i]) min2=a[i];
    printf("%d %d",min1,min2);
}