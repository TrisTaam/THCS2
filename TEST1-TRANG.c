#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,a,b[100],cnt,i;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d",&a);
    if (a==0) printf("0");
    else{
        cnt=0;
        while(a>0){
            b[cnt++]=a%2;
            a/=2;
        }
        for(i=cnt-1;i>=0;--i) printf("%d",b[i]);
        printf("\n");
    }
}