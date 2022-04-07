#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

double a,b,c,d,x1,x2;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a==0){
        if (b==0) printf("NO");
        else printf("%.2lf",-c/b);
    }
    else{
        d=b*b-4*a*c;
        if (d<0) printf("NO");
        else{
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            if (d==0) printf("%.2lf",x1);
            else printf("%.2lf %.2lf",x1,x2);
        }
    }
}