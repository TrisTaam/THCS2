#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,m,max,a,i,j;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d%d",&n,&m);
    max=n;
    if (max<m) max=m;
    for(i=1;i<=n;++i){
        a=max-i+1;
        if (a-m+1>0)
            for(j=a;j>=a-m+1;--j) printf("%d",j);
        else{
            for(j=a;j>=1;--j) printf("%d",j);
            for(j=2;j<=m-a+1;++j) printf("%d",j);
        }
        printf("\n");
    }
}