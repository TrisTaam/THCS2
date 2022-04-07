#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,i,j;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);    
    if (n==1) printf("*");
    else{
        for(i=1;i<=n;++i) printf("*");
        printf("\n");
        for(i=2;i<n;++i){
            printf("*");
            for(j=2;j<n;++j) printf(".");
            printf("*\n");
        }
        for(i=1;i<=n;++i) printf("*");
    }
}