#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))

struct ts{
    char name[100],birth[100];
    float x,y,z,s;
    int pos;
};
typedef struct ts ts;
int n;
ts a[1000];

int cmp(ts a,ts b){
    if (a.s>b.s) return 1;
    if (a.s==b.s&&a.pos<b.pos) return 1;
    return 0;
}

void swap(ts *a,ts *b){
    ts c=*a;
    *a=*b;
    *b=c;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d\n",&n);
    foru(i,0,n-1){
        gets(a[i].name);
        gets(a[i].birth);
        scanf("%f%f%f\n",&a[i].x,&a[i].y,&a[i].z);
        a[i].s=a[i].x+a[i].y+a[i].z;
        a[i].pos=i+1;
    }
    foru(i,0,n-2)
        foru(j,i+1,n-1)
            if (!cmp(a[i],a[j])) swap(&a[i],&a[j]);
    foru(i,0,n-1) printf("%d %s %s %.1f\n",a[i].pos,a[i].name,a[i].birth,a[i].s);
}