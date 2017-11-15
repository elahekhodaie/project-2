#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])


 {
 	int n;int k;
 	scanf("%d%d",&n,&k);
 	int i;
	int array[8] = {0};
	
 	for(i=0;i<2*n;i++)
 	{
 		array[i] = (i + 2) / 2;
	 }
	 for (i = 0; i < 2 * n; i++)
	 	printf("%d ", array[i]);
	 	
	 	
	 int j=0;int c=0;//c is a counter
	 while(j<2*n)
{
		 
	     while(c!=k)
	 {
	 	if(array[j]!=0)
	 	{
	 		printf("%d ",array[j]);
	 		c++;
	 		j++;
		 }
		 
		  if(c==k)
		 {
		 	array[j]=0;
		 	printf("\n");
		 }
   }
		 	
	 }
 	
 	
 	
	return 0;
}
