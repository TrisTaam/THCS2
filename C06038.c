#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 65

int t,n;
char s[N],a[N*2],b[N];

int res(){
    int x,sum;
    foru(i,2,n){
        x=0;
        sum=0;
        ford(j,n-1,0){
            sum=b[j]+s[j]-'0'*2+x;
            b[j]=sum%10+'0';
            x=sum/10;
        }
        if (!strstr(a,b)) return 0;
    }
    return 1;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        n=strlen(s);
        strcpy(a,s);
        strcpy(b,s);
        strcat(a,s);
        printf("%s\n",(res()?"YES":"NO"));
    }
}