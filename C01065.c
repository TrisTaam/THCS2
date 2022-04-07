#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll n,n1;
int a,b[20],c[20],cnt,i,kt;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&n);
    n1=0;
    while(n>0){
        n1=n1*10+n%10;
        n/=10;
    }
    n=n1;
    cnt=0;
    while(n>0){
        a=n%10;
        if (a==2||a==3||a==5||a==7){
            if (cnt==0){
                b[cnt]=a;
                c[cnt]=1;
                cnt++;
            }
            else{
                kt=0;
                for(i=0;i<cnt;++i)
                    if (b[i]==a){
                        kt=1;
                        c[i]++;
                        break;
                    }
                if (!kt){
                    b[cnt]=a;
                    c[cnt]=1;
                    cnt++;
                }
            }
        }
        n/=10;
    }
    for(i=0;i<cnt;++i) printf("%d %d\n",b[i],c[i]);
}