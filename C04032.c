#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int x,n,a[100005],b[100005],c[100005],i,cnt,sz;

int check(int n){
    int a=n%10,b;
    n/=10;
    while(n>0){
        b=n%10;
        if (b>a) return 0;
        a=b;
        n/=10;
    }
    return 1;
}

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

void qsort1(int l,int r){
    int i=l;
    int j=r;
    int x=a[(l+r)/2];
    while(i<=j){
        while(a[i]<x) i++;
        while(a[j]>x) j--;
        if (i<=j){
            swap(&a[i],&a[j]);
            i++;
            j--;
        }
    }
    if (l<j) qsort1(l,j);
    if (i<r) qsort1(i,r);
}

void qsort2(int a[],int b[],int l,int r){
    int i=l;
    int j=r;
    int x=a[(l+r)/2];
    while(i<=j){
        while(a[i]>x) i++;
        while(a[j]<x) j--;
        if (i<=j){
            swap(&a[i],&a[j]);
            swap(&b[i],&b[j]);
            i++;
            j--;
        }
    }
    if (l<j) qsort2(c,b,l,j);
    if (i<r) qsort2(c,b,i,r);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    n=0;
    while(scanf("%d",&x)!=-1)
        if (check(x)) a[n++]=x;
    qsort1(0,n-1);
    cnt=1;
    sz=0;
    for(i=0;i<n-1;++i)
        if (a[i]==a[i+1]) cnt++;
        else{
            b[sz]=a[i];
            c[sz]=cnt;
            cnt=1;
            sz++;
        }
    b[sz]=a[n-1];
    c[sz]=cnt;
    sz++;
    qsort2(c,b,0,sz-1);
    for(i=0;i<sz;++i) printf("%d %d\n",b[i],c[i]);
}