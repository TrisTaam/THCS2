#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,i,ans,a[10]={1,2,5,10,20,50,100,200,500,1000};

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans=0;
        for(i=9;i>=0;--i){
            ans+=n/a[i];
            n%=a[i];
        }
        printf("%d\n",ans);
    }
}