#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))

char s[60];
int a[255],b[255],c[255],ans;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%s",s);
    foru(i,0,strlen(s)-1){
        if (!c[s[i]]){
            c[s[i]]=1;
            a[s[i]]=i;
        }
        else b[s[i]]=i;
    }
    ans=0;
    foru(i,'A','Z')
        foru(j,'A','Z') ans+=(a[i]<a[j]&&b[i]>a[j]&&b[j]>b[i]);
    printf("%d",ans);
}