#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))

char a[1000],b[1000];
int n,cnt;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%s",a);
    n=strlen(a);
    cnt=0;
    foru(i,0,n-1)
        if (!cnt) b[cnt++]=a[i];
        else if (b[cnt-1]=='('&&a[i]==')') cnt--;
        else if (b[cnt-1]=='['&&a[i]==']') cnt--;
        else if (b[cnt-1]=='"'&&a[i]=='"') cnt--;
        else if (b[cnt-1]==39&&a[i]==39) cnt--;
        else b[cnt++]=a[i];
    printf("%d",(cnt?0:1));
}