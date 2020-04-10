#include <stdio.h>

int main()
{
	int i, n, num, pos, arr[100];
    printf("Enter the number of elements");
    scanf("%d",&n);
    
    printf("Enter the array values\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\n Enter the element to be inserted \n");
    scanf("%d",&num);
    printf("\n Enter the postion at which the number to be added\n");
    scanf("%d",&pos);
    
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
        
    }
        arr[pos]=num;
        n++;
        printf("\n The array after insertion of %d is ",num);
        for(i=0;i<n;i++)
            printf("\t %d", arr[i]);
            printf("\n");
            
return 0;        
}
