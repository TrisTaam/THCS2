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
    scanf("%d%d",&a,&b);    
    for(i=1;i<=a;++i){
        for(j=1;j<i;++j) printf("~");
        for(j=1;j<=b;++j) printf("*");
        printf("\n");
    }
}