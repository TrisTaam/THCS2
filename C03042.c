#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,a,b,i,ans;

int check(int n){
    int a=n%10;
    n/=10;
    while(n>0){
        if (a>=n%10) return 0;
        a=n%10;
        n/=10;
    }
    return 1;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        ans=0;
        for(i=a;i<=b;++i)
            if (check(i)) ans++;
        printf("%d\n",ans);
    }
}