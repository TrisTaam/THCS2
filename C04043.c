#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,i,j;
ll a[5005];

void swap(ll *a,ll *b){
    ll c=*a;
    *a=*b;
    *b=c;
}

int check(){
    ll x,y,z;
    int i,l,r;
    for(i=0;i<n;++i){
        x=a[i];
        l=n-2;
        r=n-1;
        while(l>i){
            y=a[l];
            z=a[r];
            if (z-y==x) return 1;
            if (z-y>x) r--;
            else l--;
        }
    }
    return 0;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;++i){
            scanf("%lld",&a[i]);
            a[i]=a[i]*a[i];
        }
        for(i=0;i<n-1;++i)
            for(j=i+1;j<n;++j)
                if (a[i]>a[j]) swap(&a[i],&a[j]);
        printf("%s\n",(check()?"YES":"NO"));
    }
}