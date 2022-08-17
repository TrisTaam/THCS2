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
float maxs;
ts a[1000];

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d\n",&n);
    maxs=0;
    foru(i,0,n-1){
        gets(a[i].name);
        gets(a[i].birth);
        scanf("%f%f%f\n",&a[i].x,&a[i].y,&a[i].z);
        a[i].s=a[i].x+a[i].y+a[i].z;
        if (maxs<a[i].s) maxs=a[i].s;
        a[i].pos=i+1;
    }
    foru(i,0,n-1)
        if (a[i].s==maxs) printf("%d %s %s %.1f\n",a[i].pos,a[i].name,a[i].birth,a[i].s);
}