#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int a,b,i,j;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d%d",&b,&a);
    for(i=1;i<=b;++i) printf("*");
    printf("\n");
    for(i=2;i<a;++i){
        printf("*");
        for(j=2;j<b;++j) printf(" ");
        if (b>1) printf("*");
        printf("\n");
    }
    if (a>1) for(i=1;i<=b;++i) printf("*");
}