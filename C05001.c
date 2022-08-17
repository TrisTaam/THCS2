#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int m,n,a[15][15],i,j;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d%d",&m,&n);
    for(i=0;i<m;++i)
        for(j=0;j<n;++j) scanf("%d",&a[i][j]);
    for(i=0;i<n;++i){
        for(j=0;j<m;++j) printf("%d ",a[j][i]);
        printf("\n");
    }
}