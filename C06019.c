#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 105

int t,n;
char s[N],a[N][N],*tok;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    gets(s);
    tok=strtok(s," ");
    n=0;
    while(tok!=NULL){
        strcpy(a[n++],tok);
        tok=strtok(NULL," ");
    }
    foru(i,0,n-2) printf("%c",tolower(a[i][0]));
    foru(i,0,strlen(a[n-1])-1) a[n-1][i]=tolower(a[n-1][i]);
    printf("%s@ptit.edu.vn",a[n-1]);
}