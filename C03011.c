#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int a,b,c,i,f[4]={1,2,145,40585};

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d%d",&a,&b);
    if (a>b){
        c=a;
        a=b;
        b=c;
    }
    for(i=0;i<4;++i)
        if (f[i]>=a&&f[i]<=b) printf("%d ",f[i]);
}