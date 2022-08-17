#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,m,n,a[105][105],b[105][105],x,y,dir;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&m,&n);
        foru(i,1,m)
            foru(j,1,n){
                scanf("%d",&a[i][j]);
                b[i][j]=0;
            }
        foru(i,0,m+1){
            b[i][0]=1;
            b[i][n+1]=1;
        }
        foru(i,0,n+1){
            b[0][i]=1;
            b[m+1][i]=1;
        }
        x=1;
        y=1;
        dir=0;
        foru(i,1,m*n){
            b[x][y]=1;
            printf("%d ",a[x][y]);
            x+=dx[dir];
            y+=dy[dir];
            if (b[x][y]){
                x-=dx[dir];
                y-=dy[dir];
                dir=(dir+1)%4;
                x+=dx[dir];
                y+=dy[dir];
            }
        }
        printf("\n");
    }
}