#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 105

int t,n,a,b,ans;
char s[N];

int res(char x){
    if (x=='I') return 1;
    if (x=='V') return 5;
    if (x=='X') return 10;
    if (x=='L') return 50;
    if (x=='C') return 100;
    if (x=='D') return 500;
    return 1000;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        n=strlen(s);
        ans=0;
        for(int i=0;i<n;++i){
            a=res(s[i]);
            ans+=a;
            if (i<n-1){
                b=res(s[i+1]);
                if (a<b){
                    ans+=(b-2*a);
                    i++;
                }
            }
        }
        printf("%d\n",ans);
    }
}