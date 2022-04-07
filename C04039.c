#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll a,b,c,f,i;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld%lld",&a,&b)!=-1){
        c=abs(b-a);
        f=0;
        i=0;
        while(f<c){
            f+=(i+1)/2;
            i++;
        }
        if (c>0) i--;
        printf("%lld\n",i);
    }
}