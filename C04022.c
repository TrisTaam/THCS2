#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[105],i,max1,max2;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    max1=INT_MIN;
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        if (max1<a[i]) max1=a[i];
    }
    max2=INT_MIN;
    for(i=0;i<n;++i)
        if (a[i]<max1&&max2<a[i]) max2=a[i];
    printf("%d %d",max1,max2);
}