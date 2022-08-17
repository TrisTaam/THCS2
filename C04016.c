#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a,b[100005],i,j,max;

int nt(int n){
    int i;
    for(i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        scanf("%d",&n);
        printf("Test %d:\n",i);
        max=0;
        for(j=0;j<n;++j){
            scanf("%d",&a);
            if (max<a) max=a;
            if (nt(a)) b[a]++;
        }
        for(j=1;j<=max;++j)
            if (b[j]>0){
                printf("%d xuat hien %d lan\n",j,b[j]);
                b[j]=0;
            }
    }
}