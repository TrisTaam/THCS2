#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll t,a,b;

ll min(ll n){
    char s[20];
    int a,i,cnt=0;
    while(n>0){
        a=n%10;
        if (a==6) s[cnt++]='5';
        else s[cnt++]=a+'0';
        n/=10;
    }
    n=0;
    for(i=cnt-1;i>=0;--i) n=n*10+s[i]-'0';
    return n;
}

ll max(ll n){
    char s[20];
    int a,i,cnt=0;
    while(n>0){
        a=n%10;
        if (a==5) s[cnt++]='6';
        else s[cnt++]=a+'0';
        n/=10;
    }
    n=0;
    for(i=cnt-1;i>=0;--i) n=n*10+s[i]-'0';
    return n;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&a,&b);
        printf("%lld %lld\n",min(a)+min(b),max(a)+max(b));
    }
}