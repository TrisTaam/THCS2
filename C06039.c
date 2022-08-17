#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 55

int n,m,ans,tmp,cnt,kt;
char a[N][N],s[N];

void dich(char s[]){
    char x=s[0];
    int n=strlen(s);
    foru(i,0,n-2) s[i]=s[i+1];
    s[n-1]=x;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    foru(i,0,n-1) scanf("%s",a[i]);
    m=strlen(a[0]);
    ans=INT_MAX;
    kt=1;
    foru(i,0,n-1){
        tmp=0;
        foru(j,0,n-1){
            cnt=0;
            strcpy(s,a[j]);
            while(strcmp(a[i],s)!=0){
                dich(s);
                cnt++;
                if (cnt==m){
                    kt=0;
                    break;
                }
            }
            if (!kt) break;
            tmp+=cnt;
        }
        if (!kt) break;
        if (ans>tmp) ans=tmp;
    }
    printf("%d",(kt?ans:-1));
}