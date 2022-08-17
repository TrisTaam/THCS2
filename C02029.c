#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,i,j;
char a;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        a='A'+i-1;
        for(j=1;j<=i;j++){
            printf("%c ",a);
            a+=(n-j);
        }
        printf("\n");
    }
}