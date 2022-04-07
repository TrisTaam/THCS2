#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,i,j;
char a,b;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    a='a';
    for(i=1;i<=n;++i){
        if (i%2==1)
            for(j=1;j<=i;++j) printf("%c ",a++);
        else{
            b=a+i-1;
            for(j=b;j>=a;--j) printf("%c ",j);
            a=b+1;
        }
        printf("\n");
    }
}