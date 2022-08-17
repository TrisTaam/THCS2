#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,i,j,cnt;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        scanf("%d",&n);
        printf("Test %d: ",i);
        for(j=2;j*j<=n;++j){
            cnt=0;
            while(n%j==0){
                cnt++;
                n/=j;
            }
            if (cnt>0) printf("%d(%d) ",j,cnt);
        }
        if (n>1) printf("%d(1)",n);
        printf("\n");
    }
}