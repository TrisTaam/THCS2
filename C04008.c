#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,m,a[105],b[105],p,i,j;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        scanf("%d%d%d",&n,&m,&p);
        for(j=0;j<n;++j) scanf("%d",&a[j]);
        for(j=0;j<m;++j) scanf("%d",&b[j]);
        printf("Test %d:\n",i);
        for(j=0;j<p;++j) printf("%d ",a[j]);
        for(j=0;j<m;++j) printf("%d ",b[j]);
        for(j=p;j<n;++j) printf("%d ",a[j]);
        printf("\n");
    }
}