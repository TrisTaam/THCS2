#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long

int t;
char s[1005];

char *res(char *s){
    int chan=0,le=0;
    int n=strlen(s);
    foru(i,0,n-1)
        if (s[i]<'0'||s[i]>'9') return "INVALID";
        else if (s[i]&1) le++;
        else chan++;
    if (n%2==1&&le>chan) return "YES";
    if (n%2==0&&le<chan) return "YES";
    return "NO";
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d\n",&t);
    while(t--){
        scanf("%s",s);
        printf("%s\n",res(s));
    }
}