#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))
#define N 1005

struct tg{
    int a,b,c;
    double s;
};

typedef struct tg tg;
int n;
tg x[N];

void nhap(tg *x){
    scanf("%d%d%d",&x->a,&x->b,&x->c);
}

void xuat(tg x){
    printf("%d %d %d\n",x.a,x.b,x.c);
}

void cal(tg *x){
    double p=(double)(x->a+x->b+x->c)/2;
    x->s=sqrt(p*(p-x->a)*(p-x->b)*(p-x->c));
}

void swap(tg *a,tg *b){
    tg c=*a;
    *a=*b;
    *b=c;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    foru(i,0,n-1){
        nhap(&x[i]);
        cal(&x[i]);
    }
    foru(i,0,n-2)
        foru(j,i+1,n-1)
            if (x[i].s>x[j].s) swap(&x[i],&x[j]);
    foru(i,0,n-1) xuat(x[i]);
}