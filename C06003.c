#include<stdio.h>
#include<math.h>
#include<string.h>
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
 
int t,i,ans;
char s[205];
 
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    scanf("\n");
    while(t--){
        gets(s);
        i=0;
        while(s[i]==' ') i++;
        ans=1;
        foru(j,i+1,strlen(s)-1)
            if (s[j]!=' '&&s[j-1]==' ') ans++;
        printf("%d\n",ans);
    }
}  