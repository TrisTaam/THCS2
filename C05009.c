#include<stdio.h>
#include<math.h>
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
 
int n,a[55][55],x,y;

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    foru(i,1,n)
        foru(j,1,n) scanf("%d",&a[i][j]);
    foru(i,1,n) swap(&a[i][i],&a[i][n-i+1]);
    foru(i,1,n){
        foru(j,1,n) printf("%d ",a[i][j]);
        printf("\n");
    }
}