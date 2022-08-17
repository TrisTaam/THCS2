#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 505

int t;
char s1[N],s2[N];

char *add(char s1[N],char s2[N]){
    int n1=strlen(s1);
    int n2=strlen(s2);
    char *s=malloc(N);
    if (n1<n2){
        foru(i,0,n2-n1-1) s[i]='0';
        foru(i,n2-n1,n2-1) s[i]=s1[i-n2+n1];
        s[n2]='\0';
        strcpy(s1,s);
        n1=n2;
    }
    else if (n1>n2){
        foru(i,0,n1-n2-1) s[i]='0';
        foru(i,n1-n2,n1-1) s[i]=s2[i-n1+n2];
        s[n1]='\0';
        strcpy(s2,s);
        n2=n1;
    }
    int a=0,sum;
    ford(i,n1-1,0){
        sum=s1[i]+s2[i]-'0'*2+a;
        s[i]=(char)(sum%10+'0');
        a=sum/10;
    }
    if (a){
        n1++;
        ford(i,n1-1,1) s[i]=s[i-1];
        s[0]='1';
    }
    s[n1]='\0';
    return s;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%s",s1);
        scanf("%s",s2);
        printf("%s\n",add(s1,s2));
    }
}