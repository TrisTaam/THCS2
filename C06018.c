#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 205

int t,n,m,kt,cnt;
char s1[N],s2[N],tmp[N],a[N][N],b[N][N],c[N][N],*tok;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d\n",&t);
    while(t--){
        gets(s1);
        gets(s2);
        tok=strtok(s1," ");
        n=0;
        while(tok!=NULL){
            strcpy(a[n++],tok);
            tok=strtok(NULL," ");
        }
        foru(i,0,n-2)
            foru(j,i+1,n-1)
                if (strcmp(a[i],a[j])>0){
                    strcpy(tmp,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j],tmp);
                }
        tok=strtok(s2," ");
        m=0;
        while(tok!=NULL){
            strcpy(b[m++],tok);
            tok=strtok(NULL," ");
        }
        cnt=0;
        foru(i,0,n-1){
            kt=1;
            foru(j,0,m-1)
                if (!strcmp(a[i],b[j])){
                    kt=0;
                    break;
                }
            if (kt){
                foru(j,0,cnt-1)
                    if (!strcmp(c[j],a[i])){
                        kt=0;
                        break;
                    }
                if (kt) strcpy(c[cnt++],a[i]);
            }
        }
        foru(i,0,cnt-1) printf("%s ",c[i]);
        printf("\n");
    }
}