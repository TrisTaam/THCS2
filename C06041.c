#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 100005

int t,n,a[255],cnt,i,j,pos;
char s[N],b[N];

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%s",s);
    n=strlen(s);
    foru(i,0,n-1) a[s[i]]=1;
    cnt=0;
    ford(i,'z','a')
        if (a[i]) b[cnt++]=i;
    i=0;
    j=0;
    while(i<n&&j<cnt){
        foru(z,i,n-1)
            if (s[z]==b[j]){
                printf("%c",b[j]);
                pos=z;
            }
        i=pos+1;
        j++;
    }
}