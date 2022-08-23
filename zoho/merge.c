#include<stdio.h>
int main()
{
    int a[100],b[100],m,n,temp[100],k=0,i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            temp[k++]=a[i];
            i++;
        }
        else
        {
            temp[k++]=b[j];
            j++;
        }
    }
}