#include<stdio.h>
#include<math.h>
#include<limits.h>
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
 
int t,m,n,a[15][15],ans,tmp,x;

int max(int a,int b){
    return (a>b?a:b);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    foru(i,1,t){
        scanf("%d%d",&m,&n);
        printf("Test %d:\n",i);
        ans=INT_MIN;
        foru(j,1,m){
            tmp=0;
            foru(z,1,n){
                scanf("%d",&a[j][z]);
                tmp+=a[j][z];
            }
            if (ans<tmp){
                ans=tmp;
                x=j;
            }
        }
        m--;
        foru(j,x,m)
            foru(z,1,n) a[j][z]=a[j+1][z];
        ans=INT_MIN;
        foru(j,1,n){
            tmp=0;
            foru(z,1,m) tmp+=a[z][j];
            if (ans<tmp){
                ans=tmp;
                x=j;
            }
        }
        n--;
        foru(j,x,n)
            foru(z,1,m) a[z][j]=a[z][j+1];
        foru(j,1,m){
            foru(z,1,n) printf("%d ",a[j][z]);
            printf("\n");
        }
    }
}