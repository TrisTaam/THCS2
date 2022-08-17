#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[100005],b[100005],i,min,cnt;

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

void qsort(int l,int r){
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
    if (l<j) qsort(l,j);
    if (i<r) qsort(i,r);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;++i) scanf("%d",&a[i]);
        qsort(0,n-1);
        min=INT_MAX;
        for(i=0;i<n-1;++i){
            b[i]=a[i+1]-a[i];
            if (min>b[i]) min=b[i];
        }
        printf("%d ",min);
        cnt=0;
        for(i=0;i<n-1;++i)
            if (min==b[i]) cnt++;
        printf("%d\n",cnt);
    }
}