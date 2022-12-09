#include<stdio.h>
#include<math.h>

int main()
{
    int j,k,i,num1,sum=0,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3); 
    int arr[num1][num2];
    int arr2[num2][num3];
    int arr3[num1][num3];
    
    for(j=0;j<num1;j++)
    {
    	for(i=0;i<num2;i++)
    		scanf("%d",&arr[j][i]);
    }
    
    for(j=0;j<num2;j++)
    {
    	for(i=0;i<num3;i++)
    		scanf("%d",&arr2[j][i]);
    }
    
    for(i=0;i<num1;i++){
        for(j=0;j<num3;j++){
            for(k=0;k<num2;k++)
                {	  
	              sum+=arr[i][k]*arr2[k][j];
				  }
				                    arr3[i][j]=sum;
									sum=0;
}
}

		for(i=0;i<num1;i++)
			{
				for(j=0;j<num3;j++)
					{
						printf("%d  ",arr3[i][j]);
    				}
    				printf("\n");
			}
	
	return 0;
}

