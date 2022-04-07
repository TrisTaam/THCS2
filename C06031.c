#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long

int n,a[55],cnt;
char s[55];

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%s",s);
    n=strlen(s);
    cnt=0;
    foru(i,0,n-1){
        a[i]=1;
        foru(j,0,i-1)
            if (s[i]>s[j]&&a[i]<a[j]+1) a[i]=a[j]+1;
        if (cnt<a[i]) cnt=a[i];
    }
    printf("%d",26-cnt);
}