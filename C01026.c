#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,s;

int nt(int n){
    int i;
    for(i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        printf("%s\n",(nt(n)?"YES":"NO"));
    }
}