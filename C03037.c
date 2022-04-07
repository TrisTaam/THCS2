#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll n,s;
int i,a[4],b[4],c,cnt,kt;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&n);
    s=0;
    while(n>0){
        s=s*10+n%10;
        n/=10;
    }
    n=s;
    cnt=0;
    while(n>0){
        c=n%10;
        if (c==2||c==3||c==5||c==7){
            kt=0;
            for(i=0;i<cnt;++i)
                if (a[i]==c){
                    kt=1;
                    b[i]++;
                }
            if (!kt){
                a[cnt]=c;
                b[cnt]=1;
                cnt++;
            }
        }
        n/=10;
    }
    for(i=0;i<cnt;++i) printf("%d %d\n",a[i],b[i]);
}