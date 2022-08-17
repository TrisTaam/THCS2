#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int m,n,p,q,a[1005][1005],b[1005][1005],c[1005][1005],x[1005][1005],tmp;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d%d%d%d",&m,&n,&p,&q);
    foru(i,0,m-1)
        foru(j,0,n-1) scanf("%d",&a[i][j]);
    foru(i,0,n-1)
        foru(j,0,p-1) scanf("%d",&b[i][j]);
    foru(i,0,p-1)
        foru(j,0,q-1) scanf("%d",&c[i][j]);
    foru(i,0,m-1)
        foru(j,0,p-1){
            x[i][j]=0;
            foru(z,0,n-1) x[i][j]+=a[i][z]*b[z][j];
        }
    foru(i,0,m-1){
        foru(j,0,q-1){
            tmp=0;
            foru(z,0,p-1) tmp+=x[i][z]*c[z][j];
            printf("%d ",tmp);
        }
        printf("\n");
    }
}