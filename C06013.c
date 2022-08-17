#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long

int t;
char s[1005];

char *res(char *s){
    if (s[0]=='0') return "INVALID";
    int n=strlen(s);
    int a[10]={0};
    foru(i,0,n-1)
        if (s[i]<'0'||s[i]>'9') return "INVALID";
        else a[s[i]-'0']++;
    foru(i,0,9)
        if (!a[i]) return "NO";
    return "YES";
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        printf("%s\n",res(s));
    }
}