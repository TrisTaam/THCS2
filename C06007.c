#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long

int n;
char a[105],b[105],s[105]="",*p,*q;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    gets(a);
    gets(b);
    n=strlen(b);
    q=a;
    while((p=strstr(q,b))!=NULL){
        strncat(s,q,p-q);
        q=p+n;
    }
    strcat(s,q);
    printf("%s",s);
}