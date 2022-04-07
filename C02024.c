#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,m,i,j;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d%d",&n,&m);
    for(i=0;i<n;++i){
        if (i<m){
            for(j=i;j<m;++j) printf("%c",j+'A');
            for(j=i-1;j>=0;--j) printf("%c",j+'A');
        }
        else for(j=m-1;j>=0;--j) printf("%c",j+'A');
        printf("\n");
    }
}