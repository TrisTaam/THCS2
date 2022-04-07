#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,s,i;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    s=0;
    for(i=1;i*i<=n;++i)
        if (n%i==0){
            s+=i;
            if (i>1&&i*i!=n) s+=n/i;
        }
    printf("%d",(s==n?1:0));
}