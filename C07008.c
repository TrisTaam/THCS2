#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))
#define N 1000005

int t,a[N],maxl,cnt;
char s1[N],s2[N];

void update(char s[N]){
    char *tok=strtok(s," ");
    int b,c,pos;
    while(tok!=NULL){
        if (strcmp(tok,"+")){
            b=0;
            foru(i,0,strlen(tok)-1)
                if (tok[i]!='*') b=b*10+tok[i]-'0';
                else{
                    pos=i;
                    break;
                }
            c=0;
            foru(i,pos+3,strlen(tok)-1) c=c*10+tok[i]-'0';
            if (maxl<c) maxl=c;
            a[c]+=b;
        }
        tok=strtok(NULL," ");
    }
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d\n",&t);
    while(t--){
        gets(s1);
        gets(s2);
        maxl=0;
        fill(a,0);
        update(s1);
        update(s2);
        cnt=0;
        ford(i,maxl,0)
            if (a[i]){
                if (cnt) printf(" + %d*x^%d",a[i],i);
                else printf("%d*x^%d",a[i],i);
                cnt++;
            }
        printf("\n");
    }
}