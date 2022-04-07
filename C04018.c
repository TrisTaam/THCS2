#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[35],i,cnt,ans;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;++i) scanf("%d",&a[i]);
        cnt=0;
        ans=0;
        for(i=1;i<n;++i)
            if (a[i]==a[i-1]) cnt++;
            else{
                ans+=cnt;
                cnt=0;
            }
        ans+=cnt;
        printf("%d\n",ans);
    }
}