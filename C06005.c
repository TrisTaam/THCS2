#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 105

int t,n,c[N],cnt,kt;
char s[N],a[N][N],b[N][N],*tok;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    gets(s);
    tok=strtok(s," ");
    n=0;
    while(tok!=NULL){
        foru(i,0,strlen(tok)-1) tok[i]=tolower(tok[i]);
        strcpy(a[n++],tok);
        tok=strtok(NULL," ");
    }
    strcpy(b[0],a[0]);
    c[0]=1;
    cnt=1;
    foru(i,1,n-1){
        kt=0;
        foru(j,0,cnt-1)
            if (strcmp(a[i],b[j])==0){
                kt=1;
                c[j]++;
                break;
            }
        if (!kt){
            strcpy(b[cnt],a[i]);
            c[cnt]=1;
            cnt++;
        }
    }
    foru(i,0,cnt-1) printf("%s %d\n",b[i],c[i]);
}