#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[105],b[105],i,j,z;

void swap(int *a,int *b){
    int tg=*a;
    *a=*b;
    *b=tg;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        printf("Test %d:\n",i);
        scanf("%d",&n);
        for(j=0;j<n;++j) scanf("%d",&a[j]);
        for(j=0;j<n;++j) scanf("%d",&b[j]);
        for(j=0;j<n-1;++j)
            for(z=j+1;z<n;++z){
                if (a[j]>a[z]) swap(&a[j],&a[z]);
                if (b[j]<b[z]) swap(&b[j],&b[z]);
            }
        for(j=0;j<n*2;++j)
            if (j%2==0) printf("%d ",a[j/2]);
            else printf("%d ",b[j/2]);
        printf("\n");
    }
}