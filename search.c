#include<stdio.h>
#include <conio.h>


void main()
{
    int a[10],i,n,key;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("search key : ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
			printf("element found ");
        }
        else
        {
            printf("element  not  found");
        }


    }

}
