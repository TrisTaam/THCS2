#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,m,max,i,j,a;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d%d",&n,&m);
    max=n;
    if (max<m) max=m;
    a='a'+max;
    if (max<n) max=m;
    for(i=1;i<=n;++i){
        for(j=1;j<=m;++j) printf("%c",(char)(a-(i<j?i:j)));
        printf("\n");
    }
}