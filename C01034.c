#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int m,n,a,b,i;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d%d",&m,&n);
    a=(int)sqrt(m);
    if (a*a!=m) a++;
    b=(int)sqrt(n);
    printf("%d\n",b-a+1);
    for(i=a;i<=b;++i) printf("%d\n",i*i);
}