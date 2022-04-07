#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,a[35][35],ans,cnt,x;

int nt(int n){
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    ans=INT_MIN;
    foru(i,1,n){
        cnt=0;
        foru(j,1,n){
            scanf("%d",&a[i][j]);
            cnt+=nt(a[i][j]);
        }
        if (ans<cnt){
            x=i;
            ans=cnt;
        }
    }
    printf("%d\n",x);
    foru(i,1,n)
        if (nt(a[x][i])) printf("%d ",a[x][i]);
}