#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))

int gcd(int a,int b){
    int r;
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

struct ps{
    int ts,ms;
};

typedef struct ps ps;
int t;
ps a,b,c,d;

void tg(ps *a){
    int b=gcd((*a).ts,(*a).ms);
    (*a).ts/=b;
    (*a).ms/=b;
}

void dis(ps a){
    printf("%d/%d",a.ts,a.ms);
}

void qd(ps *a,ps *b){
    tg(a);
    tg(b);
    int c=lcm((*a).ms,(*b).ms);
    (*a).ts=c/(*a).ms*(*a).ts;
    (*a).ms=c;
    (*b).ts=c/(*b).ms*(*b).ts;
    (*b).ms=c;
}

ps add(ps a,ps b){
    ps c;
    c.ts=a.ts+b.ts;
    c.ms=a.ms;
    tg(&c);
    return c;
}

ps div(ps a,ps b){
    ps c;
    c.ts=a.ts;
    c.ms=b.ts;
    tg(&c);
    return c;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    foru(i,1,t){
        printf("Case #%d:\n",i);
        scanf("%d%d%d%d",&a.ts,&a.ms,&b.ts,&b.ms);
        qd(&a,&b);
        dis(a);
        printf(" ");
        dis(b);
        printf("\n");
        c=add(a,b);
        d=div(a,b);
        dis(c);
        printf("\n");
        dis(d);
        printf("\n");
    }
}