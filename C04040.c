#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,i;
ll a,max,s;

int main(){
    ///freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        max=INT_MIN;
        s=0;
        for(i=0;i<n;++i){
            scanf("%lld",&a);
            s+=a;
            if (max<s) max=s;
            if (s<0) s=0;
        }
        printf("%lld\n",max);
    }
}