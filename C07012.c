#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))

struct mh{
    char name[100],grp[100];
    float buy,sell,s;
    int pos;
};
typedef struct mh mh;
int n;
mh a[1000];

int cmp(mh a,mh b){
    if (a.s>b.s) return 1;
    if (a.s==b.s&&a.pos<b.pos) return 1;
    return 0;
}

void swap(mh *a,mh *b){
    mh c=*a;
    *a=*b;
    *b=c;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d\n",&n);
    foru(i,0,n-1){
        gets(a[i].name);
        gets(a[i].grp);
        scanf("%f%f\n",&a[i].buy,&a[i].sell);
        a[i].s=a[i].sell-a[i].buy;
        a[i].pos=i+1;
    }
    foru(i,0,n-2)
        foru(j,i+1,n-1)
            if (!cmp(a[i],a[j])) swap(&a[i],&a[j]);
    foru(i,0,n-1) printf("%d %s %s %.2f\n",a[i].pos,a[i].name,a[i].grp,a[i].s);
}