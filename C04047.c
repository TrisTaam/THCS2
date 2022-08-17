#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,a[105],b[105],i,j,ans;

void swap(int *a,int *b){
    int tg=*a;
    *a=*b;
    *b=tg;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=0;i<n;++i) scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
            if(a[i]>a[j]){
                swap(&a[i],&a[j]);
                swap(&b[i],&b[j]);
            }
    ans=a[0]+b[0];
    for(i=1;i<n;++i){
        if (ans>a[i]) ans+=b[i];
        else ans=a[i]+b[i];
    }
    printf("%d",ans);
}