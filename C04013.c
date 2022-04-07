#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,a[105],b[100005],c[105],i,j,cnt;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    cnt=0;
    for(i=0;i<n;++i)
        if (b[a[i]]==1) c[cnt++]=a[i];
    printf("%d\n",cnt);
    for(i=0;i<cnt;++i) printf("%d ",c[i]);
}