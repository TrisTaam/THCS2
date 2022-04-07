#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,a,b,i,cnt;

int nt(int n){
    int i;
    for(i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}

int palin(int n){
    int n1=n,s=0;
    while(n>0){
        s=s*10+n%10;
        n/=10;
    }
    return s==n1;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        cnt=0;
        for(i=a;i<=b;++i)
            if (nt(i)&&palin(i)){
                printf("%d ",i);
                cnt++;
                if (cnt==10){
                    cnt=0;
                    printf("\n");
                }
            }
        printf("\n\n");
    }
}