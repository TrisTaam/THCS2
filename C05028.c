#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long

int n,kt,ans,x,y;
char a[15][15];

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    foru(i,0,n-1){
        scanf("\n");
        foru(j,0,n-1) scanf("%c",&a[i][j]);
    }
    ans=0;
    while(1){
        kt=0;
        ford(i,n-1,0){
            ford(j,n-1,0)
                if (a[i][j]=='1'){
                    kt=1;
                    x=i;
                    y=j;
                    break;
                }
            if (kt) break;
        }
        if (!kt) break;
        ans++;
        foru(i,0,x)
            foru(j,0,y) a[i][j]=(char)((a[i][j]-'0'+1)%2+'0');
    }
    printf("%d",ans);
}