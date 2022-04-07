#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,a[55][55],s;

int nt(int n){
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    foru(i,0,n-1)
        foru(j,0,n-1) scanf("%d",&a[i][j]);
    s=0;
    foru(i,0,n-1)
        foru(j,i,n-1)
            if (nt(a[i][j])) s+=a[i][j];
    printf("%d",s);
}
    