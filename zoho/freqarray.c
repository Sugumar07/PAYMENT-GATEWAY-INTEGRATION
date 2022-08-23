#include<stdio.h>
#include<string.h>
int main()
{
    int n,arr[1000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int fr[n];
    int visited=-1;
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fr[j]=visited;
            }
        }
        if(fr[i]!=visited)
        {
            fr[i]=count;
        }
    }
    for(i=0;i<n;i++)
    {
        if(fr[i]!=visited && i==0)
        {
            printf("%d(%d)",arr[i],fr[i]);
        }
        if(fr[i]!=visited)
        {
            printf("%d(%d)",arr[i],fr[i]);
        }
    }
}