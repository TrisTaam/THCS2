#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))
#define N 205

int n,j,ans;
char s1[N],s2[N],t1[N],t2[N],s[2*N],tmp[2*N];

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    while(1){
        scanf("%d",&n);
        if (!n) break;
        scanf("%s",s1);
        scanf("%s",s2);
        strcpy(t1,s1);
        strcpy(t2,s2);
        scanf("%s",s);
        ans=0;
        while(1){
            ans++;
            fill(tmp,'\0');
            j=0;
            foru(i,0,n-1){
                tmp[j++]=s2[i];
                tmp[j++]=s1[i];
            }
            tmp[j++]='\0';
            if (!strcmp(tmp,s)) break;
            foru(i,0,n-1) s1[i]=tmp[i];
            foru(i,n,2*n-1) s2[i-n]=tmp[i];
            if (!strcmp(s1,t1)&&!strcmp(s2,t2)){
                ans=-1;
                break;
            }
        }
        printf("%d\n",ans);
    }
}