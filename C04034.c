#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[1005],b[1005],i,cnt;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;++i) scanf("%d",&a[i]);
        b[0]=a[n-1];
        cnt=1;
        for(i=n-2;i>=0;--i)
            if (a[i]>b[cnt-1]) b[cnt++]=a[i];
        for(i=cnt-1;i>=0;--i) printf("%d ",b[i]);
        printf("\n");
    }
}