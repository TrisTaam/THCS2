#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,i,ans;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans=0;
        for(i=1;i*i<=n;++i)
            if (n%i==0){
                if (i%2==0) ans++;
                if (n/i!=i&&(n/i)%2==0) ans++;
            }
        printf("%d\n",ans);
    }
}