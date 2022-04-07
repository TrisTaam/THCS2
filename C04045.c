#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a,b[2];
char x;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        b[0]=0;
        b[1]=0;
        n=0;
        while(scanf("%d",&a)!=-1){
            b[a%2]++;
            n++;
            scanf("%c",&x);
            if (x=='\n') break;
        }
        printf("%s\n",((b[0]>b[1]&&n%2==0)||(b[0]<b[1]&&n%2==1)?"YES":"NO"));
    }
}