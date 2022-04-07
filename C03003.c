#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,a[1299714],i,j,cnt;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=2;i<=1299714;++i) a[i]=1;
    for(i=2;i*i<=1299714;++i)
        if (a[i])
            for(j=i*i;j<=1299714;j+=i) a[j]=0;
    cnt=0;
    for(i=2;i<=1299714;++i)
        if (a[i]){
            cnt++;
            printf("%d\n",i);
            if (cnt==n) break;
        }
}