#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll n;
int t,a,le,chan;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        le=0;
        chan=0;
        while(n>0){
            a=n%10;
            if (a%2==1) le++;
            else chan++;
            n/=10;
        }
        printf("%s\n",(le>chan?"YES":"NO"));
    }
}