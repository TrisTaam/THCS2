#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))

struct ps{
    char name[100],birth[100];
    float x,y,z,s;
};

typedef struct ps ps;
int k,n,cnt,p;
ps a[1000];

int check(ps a){
    return (a.x<a.y&&a.y<a.z);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    cnt=0;
    while(1){
        scanf("%d",&k);
        if (k==1){
            scanf("%d\n",&n);
            printf("%d\n",n);
            while(n--){
                gets(a[cnt].name);
                scanf("%f%f%f\n",&a[cnt].x,&a[cnt].y,&a[cnt].z);
                a[cnt].s=a[cnt].x+a[cnt].y+a[cnt].z;
                cnt++;
            }
        }
        else if (k==2){
            scanf("%d\n",&p);
            printf("%d\n",p);
            gets(a[p-1].name);
            scanf("%f%f%f\n",&a[p-1].x,&a[p-1].y,&a[p-1].z);
            a[p-1].s=a[p-1].x+a[p-1].y+a[p-1].z;
        }
        else if (k==3){
            foru(i,0,cnt-1)
                if (check(a[i])) printf("%d %s %.1f %.1f %.1f\n",i+1,a[i].name,a[i].x,a[i].y,a[i].z);
            break;
        }
    }
}