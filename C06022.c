#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 205

int t,n,c[N],cnt,kt;
char s1[N],s2[N],a[N][N],b[N],*tok;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d\n",&t);
    foru(i,1,t){
        gets(s1);
        gets(s2);
        printf("Test %d: ",i);
        strcpy(b,s2);
        foru(j,0,strlen(b)-1) b[j]=tolower(b[j]);
        strcpy(s2,b);
        tok=strtok(s1," ");
        n=0;
        while(tok!=NULL){
            strcpy(a[n++],tok);
            tok=strtok(NULL," ");
        }
        foru(j,0,n-1){
            strcpy(b,a[j]);
            foru(z,0,strlen(b)-1) b[z]=tolower(b[z]);
            if (strcmp(b,s2)!=0) printf("%s ",a[j]);
        }
        printf("\n");
    }
}