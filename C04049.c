#include<stdio.h>
#include<math.h>
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
 
int t,n,a[1005],i;

int ucln(int a,int b){
    int r;
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
 
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        a[0]=1;
        a[n+1]=1;
        for(i=1;i<=n;++i) scanf("%d",&a[i]);
        for(i=0;i<=n;++i) printf("%d ",a[i]*a[i+1]/ucln(a[i],a[i+1]));
        printf("\n");
    }
}  