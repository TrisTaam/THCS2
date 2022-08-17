#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,i,cnt,kt;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%d = ",n);
        kt=0;
        for(i=2;i*i<=n;++i){
            cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            if (cnt>0){
                if (kt) printf(" * %d^%d",i,cnt);
                else{
                    kt=1;
                    printf("%d^%d",i,cnt);
                }
            }
        }
        if (n>1){
            if (kt) printf(" * %d^1",n);
            else{
                kt=1;
                printf("%d^1",n);
            } 
        }
        printf("\n");
    }
}