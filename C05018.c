#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[25][25],x,y,dir;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    foru(i,1,t){
        scanf("%d",&n);
        printf("Test %d:\n",i);
        foru(j,1,n)
            foru(z,1,n) a[j][z]=0;
        foru(j,0,n+1){
            a[0][j]=-1;
            a[n+1][j]=-1;
            a[j][0]=-1;
            a[j][n+1]=-1;
        }
        x=1;
        y=1;
        dir=0;
        ford(j,n*n,1){
            a[x][y]=j;
            x+=dx[dir];
            y+=dy[dir];
            if (a[x][y]!=0){
                x-=dx[dir];
                y-=dy[dir];
                dir=(dir+1)%4;
                x+=dx[dir];
                y+=dy[dir];
            }
        }
        foru(j,1,n){
            foru(z,1,n) printf("%d ",a[j][z]);
            printf("\n");
        }
    }
}