#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,m,k,a,b[1005],ans,i,j;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    while(m--){
        scanf("%d",&a);
        foru(i,(a-k>0?a-k:1),(a+k<n?a+k:n)) b[i]=1;
    }
    ans=0;
    foru(i,1,n)
        if (!b[i]){
            foru(j,i,(i+k*2<n?i+k*2:n)) b[j]=1;
            ans++;
        }
    printf("%d",ans);
}