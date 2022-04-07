#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,i,p;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        p=1;
        for(i=2;i*i<=n;++i)
            if (n%i==0){
                p*=i;
                while(n%i==0) n/=i;
            }
        if (n>1) p*=n;
        printf("%d\n",p);
    }
}