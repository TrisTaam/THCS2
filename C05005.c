#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,m,n,a[15][15],i,j,z;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        scanf("%d%d",&m,&n);
        printf("Test %d:\n",i);
        for(j=0;j<m;++j)
            for(z=0;z<n;++z) scanf("%d",&a[j][z]);
        for(j=1;j<m;++j){
            for(z=1;z<n;++z) printf("%d ",a[j][z]);
            printf("\n");
        }
    }
}