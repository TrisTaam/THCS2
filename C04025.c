#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,i,j;
ll a[105];

void swap(ll *a,ll *b){
    ll c=*a;
    *a=*b;
    *b=c;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=0;i<n;++i) scanf("%lld",&a[i]);
    for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
            if (a[i]>a[j]) swap(&a[i],&a[j]);
    for(i=0;i<n;++i)
        if (a[i]%2==0){
            printf("%lld",a[i]);
            break;
        }
    for(j=i+1;j<n;++j)
        if (a[j]%2==0) printf(" %lld",a[j]);
    for(i=0;i<n;++i)
        if (a[i]%2==1) printf(" %lld",a[i]);
}