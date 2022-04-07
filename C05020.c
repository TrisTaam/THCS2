#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,sz,x,y,p,dir;
ll a[25][25],b[85];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    b[0]=0;
    b[1]=1;
    foru(i,2,n*n-1) b[i]=b[i-1]+b[i-2];
    foru(i,1,n)
        foru(j,1,n) a[i][j]=0;
    foru(j,0,n+1){
        a[0][j]=-1;
        a[n+1][j]=-1;
        a[j][0]=-1;
        a[j][n+1]=-1;
    }
    x=1;
    y=1;
    dir=0;
    p=0;
    foru(i,1,n*n){
        a[x][y]=b[p++];
        x+=dx[dir];
        y+=dy[dir];
        if (a[x][y]!=0||(x==1&&y==1)){
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