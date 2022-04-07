#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 105

int t,n,kt;
char s[N],a[N][N],*tok;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    gets(s);
    tok=strtok(s," ");
    n=0;
    while(tok!=NULL){
        if (n==0) strcpy(a[n++],tok);
        else{
            kt=1;
            foru(i,0,n-1)
                if (strcmp(a[i],tok)==0){
                    kt=0;
                    break;
                }
            if (kt) strcpy(a[n++],tok);
        }
        tok=strtok(NULL," ");
    }
    foru(i,0,n-1) printf("%s ",a[i]);
}