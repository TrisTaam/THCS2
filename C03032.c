#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,a,b,ans,i;

int nt(int n){
    int i;
    for(i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}

int check(int n){
    if (!nt(n)) return 0;
    while(n>0){
        if (!nt(n%10)) return 0;
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