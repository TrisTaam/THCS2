#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

double a,b;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lf%lf",&a,&b);
    if (a==0){
        if (b==0) printf("Vo so nghiem");
        else printf("Vo nghiem");
    }
    else printf("%.2lf",-b/a);
}