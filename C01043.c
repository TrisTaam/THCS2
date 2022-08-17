#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,n1,s,p,a,i;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    n1=n;
    s=0;
    while(n>0){
        p=1;
        a=n%10;
        for(i=1;i<=a;++i) p*=i;
        s+=p;
        n/=10;
    }
    printf("%d",(s==n1?1:0));
}