#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 1005

int t,n;
char s[N],a[N][N],*tok;

void chuanhoa1(char *s){
    s[0]=toupper(s[0]);
    foru(i,1,strlen(s)-1) s[i]=tolower(s[i]);
}
void chuanhoa2(char *s){
    foru(i,0,strlen(s)-1) s[i]=toupper(s[i]);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d\n",&t);
    while(t--){
        gets(s);
        tok=strtok(s," ");
        n=0;
        while(tok!=NULL){
            chuanhoa1(tok);
            strcpy(a[n++],tok);
            tok=strtok(NULL," ");
        }
        chuanhoa2(a[0]);
        printf("%s",a[1]);
        foru(i,2,n-1) printf(" %s",a[i]);
        printf(", %s\n",a[0]);
    }
}