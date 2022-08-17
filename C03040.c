#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n;

int tongcs(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

int tongts(int n){
    int i,s=0;
    for(i=2;i*i<=n;++i)
        while(n%i==0){
            s+=tongcs(i);
            n/=i;
        }
    if (n>1) s+=tongcs(n);
    return s;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    printf("%s",(tongcs(n)==tongts(n)?"YES":"NO"));
}