#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int a,b,c,i;
char s[505];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    gets(s);
    a=0;
    b=0;
    c=0;
    for(i=0;i<strlen(s);++i)
        if ((s[i]>='A'&&s[i]<='Z')||
            (s[i]>='a'&&s[i]<='z')) a++;
        else if (s[i]>='0'&&s[i]<='9') b++;
        else c++;
    printf("%d %d %d",a,b,c);
}