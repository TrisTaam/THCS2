#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long

int n,k,a;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d%d",&n,&k);
    a=0;
    while(n>0){
        a+=n/2;
        n/=2;
    }
    printf("%s",(a>=k?"Yes":"No"));
}