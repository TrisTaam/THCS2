#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int n,a[105][105],x,y,dir;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    foru(i,0,n+1){
        a[0][i]=-1;
        a[n+1][i]=-1;
        a[i][0]=-1;
        a[i][n+1]=-1;
    }
    x=1;
    y=1;
    dir=0;
    foru(i,1,n*n){
        a[x][y]=i;
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
    foru(i,1,n){
        foru(j,1,n) printf("%d ",a[i][j]);
        printf("\n");
    }
}