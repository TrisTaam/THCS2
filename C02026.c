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
    for(i=n;i>=1;--i){
        if (i<=m){
            for(j=1;j<=m-i+1;++j) printf("%c",'A'+i+j-2);
            for(j=m-i+2;j<=m;++j) printf("%c",'A'+m-1);
        }
        else
            for(j=1;j<=m;++j) printf("%c",'A'+m-1);            
        printf("\n");
    }
}