#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))

struct point{
    double x,y;
};

int t;
struct point a[3];
double b,c,d,p,s;

double dis(struct point a,struct point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int check(double a,double b,double c){
    return (a+b>c&&b+c>a&&c+a>b);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        foru(i,0,2) scanf("%lf%lf",&a[i].x,&a[i].y);
        b=dis(a[0],a[1]);
        c=dis(a[1],a[2]);
        d=dis(a[2],a[0]);
        if (check(b,c,d)){
            p=(b+c+d)/2;
            s=sqrt(p*(p-b)*(p-c)*(p-d));
            printf("%.2lf",s);
        }
        else printf("INVALID");
        printf("\n");
    }
}