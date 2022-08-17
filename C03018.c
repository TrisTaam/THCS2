#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int a,b,c,i,f[7]={1,2,3,5,8,13,21};

int nt(int n){
    int i;
    for(i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}

int tongcs(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

int check(int n){
    int i;
    int s=tongcs(n);
    for(i=0;i<7;++i)
        if (s==f[i]) return 1;
    return 0;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d%d",&a,&b);
    if (a>b){
        c=a;
        a=b;
        b=c;
    }
    for(i=a;i<=b;++i)
        if (nt(i)&&check(i)) printf("%d ",i);
}