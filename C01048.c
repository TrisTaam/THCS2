#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,a,le,chan;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    le=0;
    chan=0;
    while(n>0){
        a=n%10;
        if (a%2==1) le++;
        else chan++;
        n/=10;
    }
    printf("%d %d",le,chan);
}