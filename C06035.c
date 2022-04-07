#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long

int t;
char s[1005];

int palin(char s[1005]){
    int n=strlen(s);
    int cnt=0,l=0,r=n-1;
    while(l<r){
        cnt+=(s[l]!=s[r]);
        l++;
        r--;
    }
    if (n%2==1&&cnt<=1) return 1;
    if (n%2==0&&cnt==1) return 1;
    return 0;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        printf("%s\n",(palin(s)?"YES":"NO"));
    }
}