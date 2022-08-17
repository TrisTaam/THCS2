#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t;
char a[505];

int palin(char a[505]){
    int i;
    for(i=0;i<strlen(a);++i)
        if (a[i]!=a[strlen(a)-i-1]) return 0;
    return 1;
}

int chan(char a[505]){
    int i;
    for(i=0;i<strlen(a);++i)
        if ((a[i]-'0')%2==1) return 0;
    return 1;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%s",&a);
        printf("%s\n",(palin(a)&&chan(a)?"YES":"NO"));
    }
}