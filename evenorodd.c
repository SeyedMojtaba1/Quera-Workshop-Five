#include<stdio.h>
#include<math.h>

int main()
{
    int num,j=0,z=0,i;
    
    int arreven[100]; 
    int arrodd[100];
    while(scanf("%d",&num)==1)
	      {
	         if(num%2==0)
        {
            arreven[j]=num;
            j++;} 
         if(num%2!=0)
            {arrodd[z]=num;
            z++;}
        
            } 
    printf("Even:\n");
    for(i=0;i<j;i++)
    {
    printf("%d\n",arreven[i]);}
    printf("Odd:\n");
    for(i=0;i<z;i++)
    {
    printf("%d\n",arrodd[i]); }
    return 0;
}
