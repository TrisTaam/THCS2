#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,a,b,min1,min2,sum1,sum2;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    min1=INT_MAX;
    min2=INT_MAX;
    sum1=0;
    sum2=0;
    while(n--){
        scanf("%d%d",&a,&b);
        if (min1>a) min1=a;
        if (min2>b) min2=b;
        sum1+=a;
        sum2+=b;
    }
    sum1+=min2;
    sum2+=min1;
    if (sum1<sum2) printf("%d",sum2);
    else printf("%d",sum1);
}