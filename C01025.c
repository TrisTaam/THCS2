#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int a[2][4],i,j,maxx,maxy,max;

void swap(int *a,int *b){
    int tg=*a;
    *a=*b;
    *b=tg;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    for(i=0;i<2;++i)
        for(j=0;j<4;++j) scanf("%d",&a[i][j]);
    if (a[0][0]>a[1][0]){
        swap(&a[0][0],&a[1][0]);
        swap(&a[0][2],&a[1][2]);
    }
    if (a[0][1]>a[1][1]){
        swap(&a[0][1],&a[1][1]);
        swap(&a[0][3],&a[1][3]);
    }
    if (a[0][0]<=a[1][0]&&a[1][2]<=a[0][2]) maxx=a[0][2]-a[0][0];
    else maxx=a[1][2]-a[0][0];
    if (a[0][1]<=a[1][1]&&a[1][3]<=a[0][3]) maxy=a[0][3]-a[0][1];
    else maxy=a[1][3]-a[0][1];
    max=maxx;
    if (max<maxy) max=maxy;
    printf("%d",max*max);
}