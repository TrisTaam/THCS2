#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,i,j;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        for(j=1;j<=i*2-1;j+=2) printf("%d",j);
        for(j=i*2-3;j>=1;j-=2) printf("%d",j);
        printf("\n");
    }
}