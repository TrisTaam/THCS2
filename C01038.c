#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,n1,a,cnt,p,i;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    if (n<10) printf("%d",n);
    else{
        n1=n;
        a=n%10;
        n/=10;
        cnt=1;
        while(n>10){
            n/=10;
            cnt++;
        }
        p=1;
        for(i=1;i<=cnt;++i) p*=10;
        p--;
        printf("%d",n1+p*(a-n));
    }
}