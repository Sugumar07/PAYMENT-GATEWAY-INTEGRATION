#include <stdio.h>
#include<string.h>
int main()
{
    int count[256]={0};
    char str[1000];
    scanf("%s",str);
    int len = strlen(str);
    int max=0;
    char result;
    for(int i=0;i<len;i++)
    {
        count[str[i]]++;
        if(max<count[str[i]])
        {
            max=count[str[i]];
            result = str[i];
        }
    }
    return result;
}
