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
    for(i=1;i<=b;++i) printf("*"); 
    if (a>1){
        printf("\n");
        for(i=2;i<a;++i){
            for(j=1;j<i;++j) printf("~");
            printf("*");
            for(j=2;j<b;++j) printf(".");
            if (b>1) printf("*");
            printf("\n");
        }
        for(i=1;i<a;++i) printf("~"); 
        for(i=1;i<=b;++i) printf("*"); 
    } 
}