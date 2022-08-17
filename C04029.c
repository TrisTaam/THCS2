#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[105],i,j,cnt;

void print(){
    int i;
    for(i=0;i<n;++i) printf("%d ",a[i]);
}

void swap(int *a,int *b){
    int tg=*a;
    *a=*b;
    *b=tg;
}

int check(){
    int i;
    for(i=0;i<n-1;++i)
        if (a[i]>a[i+1]) return 0;
    return 1;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=0;i<n;++i) scanf("%d",&a[i]);
    cnt=0;
    for(i=0;i<n-1;++i){
        for(j=0;j<n-i-1;++j)
            if (a[j]>a[j+1]) swap(&a[j],&a[j+1]);
        printf("Buoc %d: ",i+1);
        print();
        printf("\n");
        if (check()) break;
    }
}