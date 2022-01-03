
  
#include<stdio.h>
#include<stdlib.h>
void main()
{
char *x = calloc(1,sizeof(char));;
printf("enter the string :");
scanf("%s",x);
for(int i=0;i<strlen(x);i++)
  	{
  		for(int j=i+1;x[j]!='\0';j++)
  		{
  			if(x[j]==x[i])  
			{
  				for(int k=j;x[k]!='\0';k++)
				{
					x[k]=x[k+1];
				   
                                }
				j=j-1;
                          }
                }
         }
    printf("\n The Final String after Removing:%s ", x);
}
