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
    for(i=-n+1;i<=n-1;++i){
        for(j=-n+1;j<=n-1;++j)
            if (abs(i)>abs(j)) printf("%d",abs(i)+1);
            else printf("%d",abs(j)+1);
        printf("\n");
    }

}