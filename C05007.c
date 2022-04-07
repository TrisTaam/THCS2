#include<stdio.h>
#include<math.h>
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
 
int m,n,a[55][55],x,y;

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d%d",&m,&n);
    foru(i,1,m)
        foru(j,1,n) scanf("%d",&a[i][j]);
    scanf("%d%d",&x,&y);
    foru(i,1,m) swap(&a[i][x],&a[i][y]);
    foru(i,1,m){
        foru(j,1,n) printf("%d ",a[i][j]);
        printf("\n");
    }
}