#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 1005

int t,n,m,a[N][N];
ll b[N][2],c[N][2],ans;
char x;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        foru(i,1,n)
            foru(j,0,1) b[i][j]=0;
        foru(i,1,m)
            foru(j,0,1) c[i][j]=0;
        foru(i,1,n){
            scanf("\n");
            foru(j,1,m){
                scanf("%c",&x);
                a[i][j]=x-'0';
                if (a[i][j]){
                    b[i][a[i][j]-1]++;
                    c[j][a[i][j]-1]++;
                }
            }
        }
        ans=0;
        foru(i,1,n)
            foru(j,1,m)
                if (a[i][j]) ans+=(b[i][a[i][j]%2]*c[j][a[i][j]%2]);
        printf("%lld\n",ans);
    }
}