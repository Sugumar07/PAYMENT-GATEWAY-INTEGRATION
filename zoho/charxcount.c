#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int ans=0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        ans+=(int)s[i]-96;
    }
    printf("%d",ans);
}