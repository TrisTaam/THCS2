#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,m,n,a[55][55],b[55][55],tmp;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    foru(i,1,t){
        scanf("%d%d",&m,&n);
        printf("Test %d:\n",i);
        foru(j,0,m-1)
            foru(z,0,n-1){
                scanf("%d",&a[j][z]);
                b[z][j]=a[j][z];
            }
        foru(j,0,m-1){
            foru(z,0,m-1){
                tmp=0;
                foru(k,0,n-1) tmp+=a[j][k]*b[k][z];
                printf("%d ",tmp);
            }
            printf("\n");
        }
    }
}
    