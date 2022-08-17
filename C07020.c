#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))

int n,a,b,ans,maxcnt,cnt,tmp;
char s[1000],p[1000];

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    ans=0;
    maxcnt=0;
    while(n--){
        scanf("%s",s);
        scanf("%d%d",&a,&b);
        cnt=0;
        while(b>=a){
            tmp=b/a;
            cnt+=tmp;
            b=b%a+tmp*2;
        }
        ans+=cnt;
        if (maxcnt<cnt){
            maxcnt=cnt;
            strcpy(p,s);
        }
    }
    printf("%d\n%s",ans,p);
}