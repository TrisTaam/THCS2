#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,i,a[105],b[30005],max;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        max=0;
        scanf("%d",&n);
        for(i=0;i<n;++i){
            scanf("%d",&a[i]);
            b[a[i]]++;
            if (max<b[a[i]]) max=b[a[i]];
        }
        for(i=0;i<n;++i)
            if (b[a[i]]==max){
                printf("%d ",a[i]);
                b[a[i]]=0;
            }
            else b[a[i]]=0;
        printf("\n");
    }
}