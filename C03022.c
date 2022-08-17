#include<stdio.h>
#include<math.h>
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
 
int n,ans;

int nt(int n){
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}

int res(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s%5==0;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    ans=0;
    foru(i,1,n-1)
        if (nt(i)&&res(i)){
            printf("%d ",i);
            ans++;
        }
    printf("\n%d",ans);
}