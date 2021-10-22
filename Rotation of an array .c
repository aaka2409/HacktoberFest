#include <stdio.h>
int main()
{
    int a[10],i,n,j,k,l;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("how many times right rotate : ");
    scanf("%d", &k);
     
    for(i=0; i<k; i++)
    {
        l=a[0];
        for(j=0; j<n-1; j++) 
        {
           a[j]=a[j+1];
		}
 
         a[j]=l;
        
 
    }
    printf("\nArray elements  rotate  : ");
 
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    
 }

