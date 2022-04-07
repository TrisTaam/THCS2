#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,cnt,a[10000];

int res(int n){
    int i;
    for(i=0;i<cnt;++i)
        if (a[i]==n) return 1;
    return 0;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    a[0]=1;
    a[1]=1;
    cnt=1;
    while(a[cnt]<100000000){
        cnt++;
        a[cnt]=a[cnt-1]+a[cnt-2];
    }
    printf("%d",res(n));
}