#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 100005

int n,a,b,c[N];

int res(){
    foru(i,1,n-1)
        if (c[i]==n-1) return 1;
    return 0;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    foru(i,1,n-1){
        scanf("%d%d",&a,&b);
        c[a]++;
        c[b]++;
    }
    printf("%s",(res()?"Yes":"No"));
}