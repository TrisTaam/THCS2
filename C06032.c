#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long

int t,n;
char a[105][105],tmp[105];

int cmp(char a[105],char b[105]){
    char c[105];
    char d[105];
    strcpy(c,a);
    strcpy(d,b);
    strcat(c,b);
    strcat(d,a);
    return (strcmp(c,d)<0);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        foru(i,0,n-1) scanf("%s",a[i]);
        foru(i,0,n-2)
            foru(j,i+1,n-1)
                if (!cmp(a[i],a[j])){
                    strcpy(tmp,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j],tmp);
                }
        foru(i,0,n-1) printf("%s",a[i]);
        printf("\n");
    }
}